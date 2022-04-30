#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

//冒泡排序；
void bubble_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz - 1;i++) {
		int j = 0; 
		//第一次比对9次
		//第二次比对8次
		//第三次比对7次
		//sz-1 - i
		for (j = 0; j < sz - 1 - i; j++) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}
void print_arr2(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz ;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}
//int main(void) {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr2(arr, sz);
//	bubble_sort(arr, sz); //qsort 排序函数（快速排序）
//	print_arr2(arr, sz);
//	return 0;
//}
//回调函数
//通过指针调用的函数；
//把函数的指针作为参数，传递给另外一个函数，此指针用来调用其所指向的函数时；即为
//回调函数不是实现方调用，而是特定事件、条件发生时，由另外一方调用；用于对事件进行响应；

//qsort 排序函数（快速）  
//支持多个类型 ：整形，字符串，结构体
//void qsort(void* base,     带排序数据中第一个对象的地址
//		size_t num,			元素（个数）
//		size_t size,		一个元素大小（步长)
//		int (*compar)(const void*, const void*));  比较待排序数据中的2个元素的函数；

int cmp(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
void test1() {
	///qsort排序数组数据
	int arr[] = { 0,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr2(arr, sz);
	//函数作为指针被其他函数调用 回调函数；
	//void* base, num,size,int(*cmp)(void*,void*);
	qsort(arr, sz, 4, cmp);
	print_arr2(arr, sz);
}
struct stu {
	char name[20];
	int age;
};
int sort_by_age(const void* e1, const void* e2) {
	//小到大
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
	//大到小
	//return ((struct stu*)e2)->age - ((struct stu*)e1)->age;

}
int sort_by_name(const void* e1, const void* e2) {
	//strcmp(a,b)   a、b字符串第一个字付进行比较；以此类推到结束符
	//a<b 返回 <0    不匹配字符a中的值（二进制比较）小于b   
	//a=b 返回 0
	//a>b 返回 >0
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}
void print_sarr(struct stu* s, int sz) {
	int i = 0;
	for (i = 0; i < sz;i++) {
		printf("%s %d\n", (s+i)->name, (s + i)->age);
	}
}
void test2() {
	///qsort排序结构体数据
	struct stu s[] = { {"one",20},{"two",10} ,{"three",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	///按照年龄排序
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	print_sarr(s,sz);
	/// 按照名字排序；
	qsort(s, sz, sizeof(s[0]), sort_by_name);
	print_sarr(s, sz);

}

///模仿qsort，实现一个通用的冒泡算法。

void swap( char* base1,  char* base2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char tmp = *base1;
		*base1 = *base2;
		*base2 = tmp;
		base1++;
		base2++;
	}
}
void bulte_sort(const void*base,int sz,int width,
		int(*cmp)(const void* e1, const void* e2)) {
	int i = 0;
	for (i = 0; i < sz - 1;i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			//(char*)base   char指针类型适合运算
			// j 循环加的位数；
			//width 乘上每次循环移位，每位的步长
			if (cmp(((char*)base + j * width),((char*)base + (j + 1) * width))
				> 0) {
				swap(((char*)base + j * width), ((char*)base + (j + 1) * width),width);
			}
		}
	}
}
void test3() {
	int arr[] = { 0,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr2(arr, sz);
	//函数作为指针被其他函数调用 回调函数；
	//void* base, num,size,int(*cmp)(void*,void*);
	bulte_sort(arr, sz, 4, cmp);
	print_arr2(arr, sz);
}
void test4() {
	///qsort排序结构体数据
	struct stu s[] = { {"one",20},{"two",10} ,{"three",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	///按照年龄排序
	bulte_sort(s, sz, sizeof(s[0]), sort_by_age);
	print_sarr(s, sz);
	/// 按照名字排序；
	bulte_sort(s, sz, sizeof(s[0]), sort_by_name);
	print_sarr(s, sz);

}
int main(void) {
	/*
	 //qsort 实现通用排序；
	test1();
	test2();
	*/

	///模仿qsort，实现一个通用的冒泡算法。
	test3();
	test4();
	return 0;
}
