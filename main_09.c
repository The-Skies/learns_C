#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>


//  一维数组
//int main(void) {
//	// 数组 同类型的数据组成的序列，是有序集合；
//	//类型说明符 数组名 [常量表达式]
//	// int a [10]
//	// 整型a数组有十个元素;
//
//	//一维数组引用;
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
//	// //数组初始化赋值：
//	// int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	// //只是第一个设置为0；后面的默认为0； 
//	// int arr1[10] = {0};
//	// //其他没有赋值的为0
//	// int arr12[10] = {0, 2, 3, 4, 5};
//	 // //自动根据元素设置length
//	// int arr3[] = {1,
//	//               2,
//	//               3,
//	//               4,
//	//               5}; // 5
//
//	// //一维数组初始化与未初始化
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
//		// 没赋予值；-858993460
//	}
//
//	char ch1[5] = "bit";  //b i t \0 0('\0'的ascll码也为0)；
//	char ch2[] = "bit";   //b i t \0  四个元素；
//	char ch3[3] = {'b', 'i', 't'};  // b i t  乱码。。。。
//	//没有制定分配多少内存；会分配固定一部分（没有\0结束；存完数据后，后面剩余的内存会亿乱码存储）
//	//strlen()   返回会是一个随机值
//
//	//动态赋值   输入什么,存储什么
//	  //题目
//	  //用户输入十个数；显示最大的数；
//	  // int max,a[10];
//	  // printf("请输入十个数\n");
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



////二维数组
//int main(void) {
//    //定义二维数组;
//   // 类型说明符 数组名 [表达式][表达式]
//   // int a[3][4]  三行四列;
//   // int a[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
//   // int a2[3][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
//   // int a3[3][4] = {{1},
//   //                 {2},
//   //                 {3}}; //其他自动补零
//    //行可以省略不写
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
//                   12 }; //自动补为 3
//
//    // int a[3][4][5]   三维数组
//
//    //宏编译,在预处理
//#if (0)
//    printf("这一行带码不会被执行；")
//#endif
//
//
//	return 0;
//}


//题目
//定义int a[2][3]={1,2,3,4,5,6};赋值为4的数组元素是；   a[1][0]
#include <string.h>

//int main(void) {
//	char acx[] = "abcdefg";   //多个 '\0'    8个
//	char acy[] = { 'a','b','c','d','e','f','g' };  //  7个
//	
//	//数组长度
//	printf("acx=%d\n", sizeof(acx)); // 8 
//	printf("acy=%d\n", sizeof(acy)); // 7											   
//												   
//	//元素个数
//	printf("acx=%d\n", strlen(acx)); // 7  
//	printf("acy=%d\n", strlen(acy)); // 42   随机数字 //没有'\0' 会使的给的内存里面存一些其他的数据
//	return 0;
//
//}


//实现函数init（） 初始化数组全0
//实现print（） 打印数组的每一个元素
//实现reverse（）  函数完成数组的元素逆序
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

//题目 交换两个数组中的数值（长度一样） 
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

//三子棋
