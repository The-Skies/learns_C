#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//指针
//int main(void) {
//	int a = 10;   //a在内存会被分配四个字节
//	//打开监视  和 内存观看
//
//	// &a   那得是a变量在内存中4个字节 的第一个字节的地址 
//	//%p  专门打印地址得
//	printf("%p\n", &a);
//
//	int* p_a = &a;   //指针变量
//	// * 说明是个指针变量
//	// int 说明 p_a执行的对象是int类型
//
//	printf("%d\n", *p_a);  //* 解地址 
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n",sizeof(double *));
//
//	//z指针在64为系统里面 是八个字节  32位是四个字节
//	// 
//	
//	
//
//	return 0;
//}
//结构体：  可以让c语言创建新的类型出来
	//创建一个学生
struct Stu
{
	char name[20];
	int age;
	double score;
};
//创建一个书籍
struct Book
{
	char name[20];
	float proce;
	char id[30];
};
//int main(void){
//	struct Stu s = {"小陈",20,80.50};   //结构体创建 、初始化
//	printf("1:%s,%d,%lf\n", s.name, s.age, s.score);
//
//	struct Stu * pstu = &s;   // 类型    *  变量名字
//	printf("2:%s,%d,%lf\n", (*pstu).name, (*pstu).age, (*pstu).score);
//
//	printf("3:%s,%d,%lf\n", pstu->name, pstu->age, pstu->score);
//
//	// 结构体指针  -> 成员变量
//
//
//}

//在输入环境中，一些其他的变量；使用getchar来处li
//getchar();  
//int main(void) {
//	//int ch = 0;
//
//	////getchar（）  会把后面的回车也拿到
//	//while ((ch = getchar()) != EOF) {   //EOF:-1  crtl +z
//	//	//putchar(ch);  //输出一个字符
//	//	printf("ASCLL=%d\n", ch);
//	//}
//
//	char psd[20]={0};
//	printf("mima:\n");
//	scanf("%s", psd);
//	//int ch = getchar();   // 默认会全部拿   缓冲区中有 回车；  所以一下子就出来了  i且NNNNNN
//	int temp = 0;
//	while ((temp = getchar()) != '\n') {   //为\n  就执行退出 ；否这九一直取；
//		;
//	}
//	printf("Y/N\n");
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("YYYYYYYYY\n");
//	}
//	else {
//		printf("NNNNNNNNN\n");
//	}
//
//	return 0;
//}


//goto
//for (...)
//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//…
//error :
//if (disaster)
//		// 处理错误情况

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：'我是猪'，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;     //也可使用whlie（1） 替换
//	}
//	return 0;
//}


//include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
