#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>


//  һά����
//int main(void) {
//	// ���� ͬ���͵�������ɵ����У������򼯺ϣ�
//	//����˵���� ������ [�������ʽ]
//	// int a [10]
//	// ����a������ʮ��Ԫ��;
//
//	//һά��������;
//	// int i, a[10];
//	// for (i = 0; i <= 9; i++)
//	// {
//	//     a[i] = i;
//	// }
//	// for (i = 9; i >= 0; i--)
//	// {
//	//     printf("a[%d]=%d\n", i, a[i]);
//	// }
//
//	// //�����ʼ����ֵ��
//	// int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	// //ֻ�ǵ�һ������Ϊ0�������Ĭ��Ϊ0�� 
//	// int arr1[10] = {0};
//	// //����û�и�ֵ��Ϊ0
//	// int arr12[10] = {0, 2, 3, 4, 5};
//	 // //�Զ�����Ԫ������length
//	// int arr3[] = {1,
//	//               2,
//	//               3,
//	//               4,
//	//               5}; // 5
//
//	// //һά�����ʼ����δ��ʼ��
//	int ar1[5] = { 2, 3, 4 }, ar2[5];
//	printf("arr ar1 is:\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%6d\n", ar1[i]);
//		//  2
//		// 3
//		// 4
//		// 0
//		// 0
//	}
//	printf("arr ar2 is:\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%6d\n", ar2[i]);
//		//arr ar2 is:
//		// û����ֵ��-858993460
//	}
//
//	char ch1[5] = "bit";  //b i t \0 0('\0'��ascll��ҲΪ0)��
//	char ch2[] = "bit";   //b i t \0  �ĸ�Ԫ�أ�
//	char ch3[3] = {'b', 'i', 't'};  // b i t  ���롣������
//	//û���ƶ���������ڴ棻�����̶�һ���֣�û��\0�������������ݺ󣬺���ʣ����ڴ��������洢��
//	//strlen()   ���ػ���һ�����ֵ
//
//	//��̬��ֵ   ����ʲô,�洢ʲô
//	  //��Ŀ
//	  //�û�����ʮ��������ʾ��������
//	  // int max,a[10];
//	  // printf("������ʮ����\n");
//	  // for(int i= 0;i<10;i++){
//	  //     scanf("%d",&a[i]);
//	  // }
//	  // max =a[0];
//	  // for(int i=0;i<10;i++)
//	  // {
//	  //     if(a[i]>max){
//	  //         max=a[i];
//	  //     }
//	  // }
//	  // printf("max=%d",max);
//
//}



////��ά����
//int main(void) {
//    //�����ά����;
//   // ����˵���� ������ [���ʽ][���ʽ]
//   // int a[3][4]  ��������;
//   // int a[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
//   // int a2[3][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
//   // int a3[3][4] = {{1},
//   //                 {2},
//   //                 {3}}; //�����Զ�����
//    //�п���ʡ�Բ�д
//    int a4[][4] = { 1,
//                   2,
//                   3,
//                   4,
//                   5,
//                   6,
//                   7,
//                   8,
//                   9,
//                   10,
//                   11,
//                   12 }; //�Զ���Ϊ 3
//
//    // int a[3][4][5]   ��ά����
//
//    //�����,��Ԥ����
//#if (0)
//    printf("��һ�д��벻�ᱻִ�У�")
//#endif
//
//
//	return 0;
//}


//��Ŀ
//����int a[2][3]={1,2,3,4,5,6};��ֵΪ4������Ԫ���ǣ�   a[1][0]
#include <string.h>

//int main(void) {
//	char acx[] = "abcdefg";   //��� '\0'    8��
//	char acy[] = { 'a','b','c','d','e','f','g' };  //  7��
//	
//	//���鳤��
//	printf("acx=%d\n", sizeof(acx)); // 8 
//	printf("acy=%d\n", sizeof(acy)); // 7											   
//												   
//	//Ԫ�ظ���
//	printf("acx=%d\n", strlen(acx)); // 7  
//	printf("acy=%d\n", strlen(acy)); // 42   ������� //û��'\0' ��ʹ�ĸ����ڴ������һЩ����������
//	return 0;
//
//}


//ʵ�ֺ���init���� ��ʼ������ȫ0
//ʵ��print���� ��ӡ�����ÿһ��Ԫ��
//ʵ��reverse����  ������������Ԫ������
//void init(int arr[],int len) {
//	int i = 0;
//	for (; i < len; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int len) {
//	int i = 0;
//	for (; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void reverse(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left<right) {
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main(void) {
//	int arr[10] = { 11,22,33,44,55,66,99,88,77,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,len);
//	//print(arr, len);
//	reverse(arr, len);
//	print(arr, len);
//
//	return 0;
//}

//��Ŀ �������������е���ֵ������һ���� 
//int main(void) {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,2 };
//
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//
//	int arr3[5] = { 0 },i=0;
//	for (; i < len; i++) {
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//
//	return 0;
//}

//������
