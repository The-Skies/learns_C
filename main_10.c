#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>
 
//冒泡
//int main(void) {
//	void bubble_sort(int arr[],int len);
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	int len = sizeof(arr) / sizeof(arr[0])-1; 
//	//排序 —— 冒泡排序
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
//	//数组传递后，会将数组元素第一个的地址传递出去
//	// arr为第一个元素的地址 =》指针 - 
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
//	//排序 —— 冒泡排序
//	bubble_sort(arr);
//	return 0;
//}
//void bubble_sort(int arr[]) {
//	//数组传递后，会将数组元素第一个的地址传递出去
//	// arr为第一个元素的地址 =》指针 - 
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

//数组名是什么，
	//数组名是数组首个元素的地址；
//单有两个例外；
	//1: sizeof(arr) - 数组名表示整个数组 - 计算的是整个数组的大小 单位B
	//2: &arr        - 数组名表示整个数组 - 取出的是整个数组的地址

//int main(void) {
//	// arr[10]    95421462680 -->+1-->  95421462720	   =40
//	// arr[20]    482606708832 -->+1-->  482606708912	 = 80
//
//	int arr[20] = { 0 };
//	printf("%p\n", &arr);  //数组的地址(整个数组)
//	printf("%p\n", &arr+1); // +40			   		
//
//	printf("%p\n", arr);  // 数组低于个元素 地址
//	printf("%p\n", arr + 1); // +4
//
//	printf("%d", sizeof(arr));   //80     int->4*20=80
//	return 0;
//}



