#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>
#include <math.h>

//���� -> �ӳ���
//�⺯��ѧϰ  cplusplus.com
//   zh.cppreference.com


//�⺯��
	/*
		IO����  printf putchar scanf getchar
		�ַ����������� strcpy strcmp��һ���������Ѷ�����һ�� stelen
		�ڴ��������  memcpy memcmp memset
		ʱ�䡢���ں��� time
		��ѧ����   sqrt pow
		�����⺯��

	*/
	//strcpy
	//int main(void) {
	//	char arr1[20];
	//	char arr2[] = "hong niu hao he��";
	//	strcpy(arr1, arr2);   //������һ��
	//	printf("%s",arr1);
	//	return 0;
	//}

	//memset()  �ڴ�����
	//int main(void) {
	//	char arr[] = "hello world to the wwww";
	//	//memset(target,char_context,size_num)
	//	memset(arr, 'x', 5);
	//	printf("%s", arr);
	//
	//	return 0;
	//}


	//�Զ��庯��
	/*�����������ֵ*/
	//int main(void) {
	//	//����
	//	int get_max(int a, int b);
	//	void Swap(int* a, int* b);
	//
	//	int a = 10;
	//	int b = 20;
	//	//ʹ��
	//	int max = get_max(a, b);
	//	printf("max=%d\n", max);
	//
	//	//���������Ľ���
	//	printf("a=%d,b=%d\n", a, b);
	//	Swap(&a, &b);
	//	printf("a=%d,b=%d\n", a, b);
	//
	//	return 0;
	//}
	////����
	//int get_max(int a,int b) {
	//	return a > b ? a : b;
	//}
	//
	//void Swap(int* a, int* b) {
	//	int temp = *a;
	//	*a = *b;
	//	*b = temp;
	//}


	//��������
		/*
			��ֵ���βκ�ʵ�ηֱ�ռ�������ڴ�ռ䣻 �޸�����һ��������ı�����һ��

			��ַ���������ڴ��ַ���ݸ����������� �����ڸ�ֵ��������Ҳ��ı䣻
		*/


		/************************************************************************************************************/
		//��ϰ
		//��ӡһ�ٵ�����֮���������1�ͱ�����ľ������������ˣ�

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
		//	//�Ż� sqrt(n)   ȡ������һ��ͺã����˸�
		//	for(int i =2;i<=sqrt(n);i++)
		//	{
		//		if (n % i == 0) {
		//			return 0;
		//		}
		//	}
		//	return 1;
		//}


		//�ж��Ƿ�������(400���󣬣�����һ�󣬰��겻��)
//int main(void) {
//	int is_leap_year(int year);
//	int year;
//	printf("������year��\n");
//	scanf("%d", &year);
//	if (is_leap_year(year)) {
//		printf("%d�����꣡����", year);
//	}
//	else
//		printf("%dbu�����꣡����", year);
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
//	//�Ż�
//	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//}



//ʵ��������������Ķ��ֲ���
//int main(void) {
//	int bin_search(int arr[], int find);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,20 };
//	int find = 20;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	int result = bin_search(arr, find,right);
//
//	printf("%d �� ������ %d", find,result);
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