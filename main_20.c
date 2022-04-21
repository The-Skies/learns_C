#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>

//一级指针传参 
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p+i));
//	}
//}
//
//void test(int* p) {
//	
//}
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	char ch = "w";
//	char* p = &ch;
//	test(p);
//
//	return 0;
//}

void test(int** p2) {
	**p2 = 20;
}
//二级指针传参
int main(void) {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;

	test(ppa); //传二级指针
	test(&pa); //传以及指针的地址
	printf("%d", **ppa);
	return 0;
}