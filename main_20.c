#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <windows.h>
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

//void test(int** p2) {
//	**p2 = 20;
//}
////二级指针传参
//int main(void) {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(ppa); //传二级指针
//	test(&pa); //传一级指针的地址
//				// 数组名也可
//	printf("%d", **ppa);
//	return 0;
//}

 ///  函数指针
//int  Add(int x, int y){
//
//	return x+y;
//}
//void test(char* str) {
//
//}
//
//int main(void) {
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;  //数组指针  是一个指针，存放数组；
//
//	//函数指针 存放函数的指针；
//	printf("%p\n", &Add);  //形式上的区别，意义一样
//	printf("%p\n", Add);
//
//	//函数指针变量
//	int (*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5);  //*解指针  得到 Add   *在这里没有意义；便于理解
//	int ret2 = (pf)(4, 5);  //没有* 也可
//
//	int ret3 = Add(5, 5);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	//demo
//	void(*pt)(char*) = &test;
//
//} 

///有趣代码  《c陷阱和缺陷》
//int main(void) {
//	//调用0地址处的函数
//	(*(void(*)())0)();
//	//void（*）（） - 函数指针类型
//	//void(*)())0  - 对0进行强制类型转换，被解释为一个函数的地址；
//	//*(void(*)())0)  - 对0地址的解引用
//	//(*(void(*)())0)() - 对0地址处的函数调用
//
//
//	void(*signal(int, void(*)(int)))(int);
//	//signal是函数 第一个参数是int 第二个参数是函数指针
//	//* signal 返回的是一个函数指针；
//	//这个函数指针，指向一个参数为int，返回类型是void的函数；
//
//	//使用typedef 对类型重定义
//	typedef unsigned int uint;  //uint为unsigned int
//	//等价上面的代码；
//	typedef void(*pfun_t)(int); //  void(*)(int)  代替pfun_t
//	pfun_t singnal(int, void(*)(int));
//
//	return 0;
//}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}
void menu() {
	printf("**************************\n");
	printf("****  1:Add  2:Sub  *****\n");
	printf("****  3:Mul  4:Div  *****\n");
	printf("********  0:quit  ********\n");
	printf("**************************\n");
}
///函数指针数组 switch写法
//int main(void) {
//	int (*pAdd)(int, int) = Add;
//	int (*pSub)(int, int) = Sub;
//	int(*pArr[])(int, int) = { Add,Sub };  //pArr 函数指针的数组
//
//
//	//函数指针数组的应用
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("请输入模式、\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case  1:
//			printf("请输入两个操作数、\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("两个操作数结果为L：%d\n",ret);
//			break;
//		case  2:
//			printf("请输入两个操作数、\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("两个操作数结果为L：%d\n", ret);
//			break;
//		case  3:
//			printf("请输入两个操作数、\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("两个操作数结果为L：%d\n", ret);
//			break;
//		case  4:
//			printf("请输入两个操作数、\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("两个操作数结果为L：%d\n", ret);
//			break;
//		case  0:
//			printf("退出程序、\n");
//			break;
//		default:
//			printf("输入错误，请重新输入、\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//函数指针
//int main(void) {
//	int (*pAdd)(int, int) = Add;
//	int (*pSub)(int, int) = Sub;
//	int (*pArr[])(int, int) = { Add,Sub };  //pArr 函数指针的数组
//
//
//	//函数指针数组的应用
//	int input = 0;
//	do {
//		menu();
//		int (*pfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("请输入模式、\n");
//		scanf("%d", &input);
//		if (!input) {
//			break;
//		}
//
//		printf("请输入两个操作数、\n");
//		scanf("%d %d", &x, &y);
//		ret = (pfarr[input])(x, y);
//		printf("两个操作数结果为L：%d\n", ret);
//
//	} while (input);
//	printf("计算结束！");
//	return 0;
//}

/*
	函数指针的数组 - 数组
	取出函数指针数组的地址；

	整形数组
	int arr[5];
	int (*p1)[5] = &arr[5];

	整形指针数组
	int* arr2[5];
	int* (*p2)[5] = &arr2;

	函数指针数组
	int (*pf)(int, int);  // 函数指针
	int (* pf2[4]) (int, int) = &pf;   //函数指针的数组
	int (*(*pf3)[4])(int, int) = &pf2; //【函数指针的数组】的指针

****/
//void  test(const char* str) {
//	printf("%s\n", str);
//}
//int main(void) {
//	//函数指针
//	void (*pf)(const char* str) = test;
//
//	//函数指针的数组
//	void (*pf2[5])(const char* str) = { pf };
//
//	//【函数指针的数组】的指针
//	void (*(*pf3)[5])(const char* str) = pf2;
//
//	char str[] = "holle wolrd！";
//	char* str_p = str;
//	(*pf3)[0](str_p);
//	return 0;
//}