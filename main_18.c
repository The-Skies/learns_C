#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>

///指针就是变量；用来存放地址
/// 指针（32位系统 4个字节）（64位系统 8个字节）
///指针类型决定他的步长（int 一步 4个字节）

///字符指针
//int main(void) {
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//char* ps = "hello wrold!";
//	//printf("%c\n", *ps);   //ps存放的是什么
//	//printf("%s\n", ps);   //ps存放的是什么
//
//	//char arr[] = "hello world!!";
//	//printf("%c\n", arr);   //输出什么
//	//printf("%s\n", arr);   //输出什么
//
//	///笔试题
//	//下面打印出什么
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";  //常量字符串指针 （*str3 修改数据）  str3修改地址     
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

///指针数组
//int main(void) {
//	///数组 - 数组中存放的是指针（地址）
//	int* arr[3] = { 0 };
//	
//	return 0;
//}

///数组指针  是一种指针
//int main(void) {
//	int arr[] = { 1,2,3,4 };
//
//	// (*parr)[10]   ()>[]>*
//	// 当没有括号 会先结合[] 变为 parr[] 存放 int*
//	// 右括号     会先结合 *parr 指针 指向int []   （（同理）->） int *p   指针*p 指向int类型数据
//
//	int(*parr)[10] = &arr; //数组指针  就是一种指针变量
//	// &arr 数组的地址
//	// arr   是arr[0]的地址
//
//	double* d[5];  //指针数组  里面放指针
//
//	double* (*pd) = &d;  // &d->*pa   d是数组  ->(*pa)[5] double*类型 double* (*pa)[5]
//
//
//
//	///&数组名 和 数组名  的区别 
//
//	//地址名相同  但是  意义不同
//	int* pa1 = arr;
//	int(* pa2)[10] = &arr; 
//	printf("arr=%p *pa=%p\n", arr,pa1);   
//	printf("arr=%p\n", pa1 +1);  //地址加一  加一个整形
//
//	printf("&arr=%p (*pa)[10] = %p\n", &arr,pa2);
//	printf("&arr=%p\n",pa2+1);   //地址加一   加一个数组
//
//	///数组名是数组首元素的地址
//	///但是有两个例外
//	/// 1.sizeof(数组名) -- 数组名表示整个数组，计算的使整个数组大小；单位是字节
//	/// 2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址；
//	return 0;
//}

///数组指针应用  - 二维数组以上  -函数形参
//int main(void) {
//	int arr[] = { 1,2,3,4,56,7,8,9 };
//	int(*pa)[] = &arr;
//	int i = 0;
//	for (i = 0; i < 8; i++) {
//		//(*pa) => arr => 首元素地址
//		printf("%d %p\n", *((*pa) + i), (*pa) + i);
//	}
//
//	return 0; 
//}


//void print1(int (* p)[5], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", *(*(p+i)+j));
//			//*（p + i）    拿数组 {1,2,3,4,5}；一步一个数组
//			//【p】+j         
//		}
//		printf("\n");
//	}
//}
//
//void printf() {
//
//}
//int main(void) {
//	int arr[3][5] = { {1,2,3,4,5},{3,4,5,6,7} ,{4,5,6,7,8} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5); //arr  {1,2,3,4,5} 
//	return 0;
//}
 
///数组指针 、 指针数组
/*  数据类型		什么指向容器		存数据的容器
	int								arr[5]        //整形数组 
	int*							parr[5]       //整形指针的数组  
	int         (*parr2)			[5]			  //数组指针 
				指针指向长度为5的数组，数组每个元素类型为int

	int         (*parr3[10])		[5]       
				指针数组；  
				数组内的元素存放指针   该指针指向元素长度为5；数据类型为int的数组

	数组指针 - (*parr2) [5]  -》   就是一个指针，专门指向数组
	指针数组 -  *parr3  [10] -》   是一个数组；里面全是指针；
**/



///数组参数 、 指针参数；  下面的参数那个可行？
//一维
//void test(int arr[]) {}
//void test(int arr[10]) {}   //可以不用写10  
//							//因为他也不会去创建十个元素的数组；仅仅是首位地址
//void test(int *arr) {}
//void test2(int *arr[20]) {}
//void test2(int **arr){}    //这里放首元素刚好
//int main(void) {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr); 
//	test2(arr2);
//	return 0;
//
// }

//二维
//void test(int arr[3][5])//ok？
//{}
////void test(int arr[][])//
////{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//
//{}
//void test(int* arr[5])//
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
