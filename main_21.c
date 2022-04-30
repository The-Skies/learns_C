#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

//ð������
void bubble_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz - 1;i++) {
		int j = 0; 
		//��һ�αȶ�9��
		//�ڶ��αȶ�8��
		//�����αȶ�7��
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
//	bubble_sort(arr, sz); //qsort ����������������
//	print_arr2(arr, sz);
//	return 0;
//}
//�ص�����
//ͨ��ָ����õĺ�����
//�Ѻ�����ָ����Ϊ���������ݸ�����һ����������ָ��������������ָ��ĺ���ʱ����Ϊ
//�ص���������ʵ�ַ����ã������ض��¼�����������ʱ��������һ�����ã����ڶ��¼�������Ӧ��

//qsort �����������٣�  
//֧�ֶ������ �����Σ��ַ������ṹ��
//void qsort(void* base,     �����������е�һ������ĵ�ַ
//		size_t num,			Ԫ�أ�������
//		size_t size,		һ��Ԫ�ش�С������)
//		int (*compar)(const void*, const void*));  �Ƚϴ����������е�2��Ԫ�صĺ�����

int cmp(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
void test1() {
	///qsort������������
	int arr[] = { 0,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr2(arr, sz);
	//������Ϊָ�뱻������������ �ص�������
	//void* base, num,size,int(*cmp)(void*,void*);
	qsort(arr, sz, 4, cmp);
	print_arr2(arr, sz);
}
struct stu {
	char name[20];
	int age;
};
int sort_by_age(const void* e1, const void* e2) {
	//С����
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
	//��С
	//return ((struct stu*)e2)->age - ((struct stu*)e1)->age;

}
int sort_by_name(const void* e1, const void* e2) {
	//strcmp(a,b)   a��b�ַ�����һ���ָ����бȽϣ��Դ����Ƶ�������
	//a<b ���� <0    ��ƥ���ַ�a�е�ֵ�������ƱȽϣ�С��b   
	//a=b ���� 0
	//a>b ���� >0
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}
void print_sarr(struct stu* s, int sz) {
	int i = 0;
	for (i = 0; i < sz;i++) {
		printf("%s %d\n", (s+i)->name, (s + i)->age);
	}
}
void test2() {
	///qsort����ṹ������
	struct stu s[] = { {"one",20},{"two",10} ,{"three",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	///������������
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	print_sarr(s,sz);
	/// ������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);
	print_sarr(s, sz);

}

///ģ��qsort��ʵ��һ��ͨ�õ�ð���㷨��

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
			//(char*)base   charָ�������ʺ�����
			// j ѭ���ӵ�λ����
			//width ����ÿ��ѭ����λ��ÿλ�Ĳ���
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
	//������Ϊָ�뱻������������ �ص�������
	//void* base, num,size,int(*cmp)(void*,void*);
	bulte_sort(arr, sz, 4, cmp);
	print_arr2(arr, sz);
}
void test4() {
	///qsort����ṹ������
	struct stu s[] = { {"one",20},{"two",10} ,{"three",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	///������������
	bulte_sort(s, sz, sizeof(s[0]), sort_by_age);
	print_sarr(s, sz);
	/// ������������
	bulte_sort(s, sz, sizeof(s[0]), sort_by_name);
	print_sarr(s, sz);

}
int main(void) {
	/*
	 //qsort ʵ��ͨ������
	test1();
	test2();
	*/

	///ģ��qsort��ʵ��һ��ͨ�õ�ð���㷨��
	test3();
	test4();
	return 0;
}
