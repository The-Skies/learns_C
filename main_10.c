#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>
 
//ð��
//int main(void) {
//	void bubble_sort(int arr[],int len);
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int len = sizeof(arr) / sizeof(arr[0])-1; 
//	//���� ���� ð������
//	bubble_sort(arr,len);
//	int i = 0;
//	int* ar=arr;
//	while (i < len) {
//		printf("%d ", (*ar)++);
//		i++;
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int len) {
//	//���鴫�ݺ󣬻Ὣ����Ԫ�ص�һ���ĵ�ַ���ݳ�ȥ
//	// arrΪ��һ��Ԫ�صĵ�ַ =��ָ�� - 
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//		
// }


//int main(void) {
//	void bubble_sort(int arr[]);
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
// 
//	//���� ���� ð������
//	bubble_sort(arr);
//	return 0;
//}
//void bubble_sort(int arr[]) {
//	//���鴫�ݺ󣬻Ὣ����Ԫ�ص�һ���ĵ�ַ���ݳ�ȥ
//	// arrΪ��һ��Ԫ�صĵ�ַ =��ָ�� - 
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//		
// }

//��������ʲô��
	//�������������׸�Ԫ�صĵ�ַ��
//�����������⣻
	//1: sizeof(arr) - ��������ʾ�������� - ���������������Ĵ�С ��λB
	//2: &arr        - ��������ʾ�������� - ȡ��������������ĵ�ַ

//int main(void) {
//	// arr[10]    95421462680 -->+1-->  95421462720	   =40
//	// arr[20]    482606708832 -->+1-->  482606708912	 = 80
//
//	int arr[20] = { 0 };
//	printf("%p\n", &arr);  //����ĵ�ַ(��������)
//	printf("%p\n", &arr+1); // +40			   		
//
//	printf("%p\n", arr);  // ������ڸ�Ԫ�� ��ַ
//	printf("%p\n", arr + 1); // +4
//
//	printf("%d", sizeof(arr));   //80     int->4*20=80
//	return 0;
//}



