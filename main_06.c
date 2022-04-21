#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>
#include <math.h>

//函数 -> 子程序
//库函数学习  cplusplus.com
//   zh.cppreference.com


//库函数
	/*
		IO函数  printf putchar scanf getchar
		字符串操作函数 strcpy strcmp（一，二）（把二给到一） stelen
		内存操作函数  memcpy memcmp memset
		时间、日期函数 time
		数学函数   sqrt pow
		其他库函数

	*/
	//strcpy
	//int main(void) {
	//	char arr1[20];
	//	char arr2[] = "hong niu hao he！";
	//	strcpy(arr1, arr2);   //二复制一上
	//	printf("%s",arr1);
	//	return 0;
	//}

	//memset()  内存设置
	//int main(void) {
	//	char arr[] = "hello world to the wwww";
	//	//memset(target,char_context,size_num)
	//	memset(arr, 'x', 5);
	//	printf("%s", arr);
	//
	//	return 0;
	//}


	//自定义函数
	/*两个数的最大值*/
	//int main(void) {
	//	//声明
	//	int get_max(int a, int b);
	//	void Swap(int* a, int* b);
	//
	//	int a = 10;
	//	int b = 20;
	//	//使用
	//	int max = get_max(a, b);
	//	printf("max=%d\n", max);
	//
	//	//；两个数的交换
	//	printf("a=%d,b=%d\n", a, b);
	//	Swap(&a, &b);
	//	printf("a=%d,b=%d\n", a, b);
	//
	//	return 0;
	//}
	////定义
	//int get_max(int a,int b) {
	//	return a > b ? a : b;
	//}
	//
	//void Swap(int* a, int* b) {
	//	int temp = *a;
	//	*a = *b;
	//	*b = temp;
	//}


	//函数调用
		/*
			传值：形参和实参分别占有两个内存空间； 修改其中一个，不会改变另外一个

			传址：将变量内存地址传递给函数参数； 函数内改值，函数外也会改变；
		*/


		/************************************************************************************************************/
		//练习
		//打印一百到两百之间的素数（1和本身出的净；其他除不了）

		//int main(void) {
		//	int is_prime(int n);
		//
		//	int count = 0;
		//	for (int i = 100; i <= 200; i++) {
		//		if (is_prime(i)) {
		//			count++;
		//			printf("%d\n", i);
		//		}
		//	}
		//	printf("count:%d", count);
		//	return 0;
		//}
		//
		//int is_prime(int n)
		//{
		//	//for(int i = 2;i<n;i++)
		//	//优化 sqrt(n)   取除数；一半就好；开了根
		//	for(int i =2;i<=sqrt(n);i++)
		//	{
		//		if (n % i == 0) {
		//			return 0;
		//		}
		//	}
		//	return 1;
		//}


		//判断是否是闰年(400年润，（四年一润，百年不润）)
//int main(void) {
//	int is_leap_year(int year);
//	int year;
//	printf("请输入year：\n");
//	scanf("%d", &year);
//	if (is_leap_year(year)) {
//		printf("%d是闰年！！！", year);
//	}
//	else
//		printf("%dbu是闰年！！！", year);
//
//
//	return 0;
//}
//
//int is_leap_year(int year) {
//	/*if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//		return 1;
//	}
//	else
//		return 0;*/
//	//优化
//	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//}



//实现整形有限数组的二分查找
//int main(void) {
//	int bin_search(int arr[], int find);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,20 };
//	int find = 20;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	int result = bin_search(arr, find,right);
//
//	printf("%d 的 索引是 %d", find,result);
//	return 0;
//}
//
//int bin_search(int arr[], int find,int right) { 
//	int left = 0;
//	int mid = 0;
//	while (left <= right) 
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > find) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < find)
//		{	
//			left = mid + 1;
//		}
//		else
//			return mid;  
//	}
//	return -1;
//}