#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>

//  传地址：你想修改元数据；相互绑定 
//	传值：你想形参和实参互不影响
//int main(void) {
//	void Add(int* p);
//
//	int count = 0;
//	for (int i = 0; i < 3; i++) {
//		Add(&count);
//	}
//	printf("Add函数被引用了 %d 次;\n", count);
//	return 0;
//}
//
//void Add(int* p) {
//	(*p)++;
//}

//函数可以嵌套调用，但不能嵌套定义；

//int main(void) {
//	//链式访问    将一个函数的返回值，作为另外一个函数的参数 
//	printf("%d", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "string!!!";
//	//strcpy(arr1, arr2)   返回char *  
//	//char * strcpy ( char * destination, const char * source );
//	printf("%s", strcpy(arr1, arr2));
//
//
//	//int printf("%d",43);   返回打印在屏幕上面的字符个数
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	//43 2 1
//}



//使用vs 打包。.lib ；给别人调用；

///写好原函数与头文件； 项目名称右击->属性->常规->配置类型->.lib(静态库) ctrl+f7编译（f5）
//dbug 文件下；.lib(二进制文件。加码的)
// 
//头文件+.lib（静态库）  =》加密得到代码；


//源文件右击添加现有文件；  
//头文件右击添加现有文件；  
