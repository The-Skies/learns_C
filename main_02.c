#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>

//变量创建，可以在括号外面
//执行语句不能挂在外面

#define MAX 100000;  //标识符常量  没有等于


enum Age
{
	//枚举类型的未来可取值
	MALE = 3, // 初值为 3   下面会依次顺序赋值   默认0
	MAN,      // 4								1
	WOMAN     // 5								2
};

//全局作用域；  哪里都可以用（整个工程)
int g_val = 2022;

int test_02(void)
{
	//----变量的作用域
	//作用愈   哪里能用，哪里就叫作用域；
	{
		//局部作用域  就是这个函数块内
		int a = 9;
		printf("a=%d---有用", a);

	}
	//printf("a=%d---没用", a);


	//跨文件 的全局变量需要先声明再使用

	//add.c   int f_file = 555;

	//main.c   extern int f_file;   printf("%d",f_file);


	//----变量的生命周期
	//局部变量；  进入局部范围生命开始   出局部范围生命结束
	//全局变量；  程序的生命周期；


	//----常量
	//1，字面常量
	3.14;
	10;
	'a';
	"string";
	//2，const 修饰的常变量   本质是变量  但有常量的特性
	
	//const int num = 10; //常属性变量不可以修改  
	int num = 10; //可以修改
	num = 20;
	printf("%d", num);

	//3，define 定义的标识符常量
	//#define MAX = 100000；  里面定义也可以
	int num_02 = MAX;
	printf("%d\n", num_02);

	//4，枚举常量  可以一一列举的常量
	/*
		enum age
		{
			//枚举类型的未来可取值
			10,20,30;
		}

		enum age = people_age;  
		//people_age 只能取 10  20  30
	*/

	enum Age  people_age  = MAN;  //使用enum枚举类型创建变量 people_age ，它的值为 MAN

	printf("%d\n", MALE);  // 0 
	printf("%d\n", MAN );  // 1
	printf("%d\n", WOMAN); // 2

	//---- 字符串     结束标志  \0 
	//一串字符    使用双引号扩起来
	char arr[] = "hello\0"; //使用 f10 调试  f11  下一步     调试-窗口-监视

	//hello\0  有结束符号  荏苒会加上 \0

	//都在内存占了相应的位置；
	//  str    ////////abc＼0(//////////)    有结束符，我该停了
	// str_02  ////////abc(//////////)		没有结束符，不知道后面是什么；瞎搞了
	char str[] = "abc";   //会有结束符  \0   系统知道到了结束符就停止
	char str_02[] = { 'a','b','c' };  //  没有结束符  系统不知道后面内存还剩下的是什么；就开始乱码了

	//结束符号对于字符串至关重要；； 
	printf("%s\n", str);
	printf("%s\n", str_02);
	printf("str：%d\n", strlen(str));  //  3
	printf("str_02：%d\n", strlen(str_02));  //随机值


	//strlen("str");   求得字符长度
	//需要添加头文件  #include <string.h>
	int strlength = strlen("string");
	printf("Z字符长度：%d\n", strlength);


	//转移字符
	/*
		\?  书写多个问好时防止他们被解析成三个字符    ？？）  ->  ]  单好像没有了
		\'  表示字符常量 '
		\"  表示字符串内部的双引号 "
		\\  表示一个反斜杠；   防止其被解析为转义字符
		\a  警告字符
		\b  退格符 
		\f  进制符
		\n  换行
		\r	回车
		\t  制表符  水平
		\v  制表符   垂直

		\ddd   三个八进制
 		\xdd   十六进制
		
	*/

	//三个字符
	printf("(are you ok ??)");

	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("\a\a\a");   //会响

	printf("%c\n", '\130');    // 输出八进制130对应的十进制字符    1 （1*8二次方）3 （1*8^1）0 (0*8^0)  64+24+0   88
	printf("%c\n", '\101');    // 输出八进制101对应的十进制字符		65  -> 处于8  ->   1  0  1


	printf("%c\n", '\x30');   // 输出十六进制x30对应的十进制字符   3（3*16^1) 0 (0*16^0)   48 + 0 =  48


	//test
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen(str_02));  //33

	char strs[] = { 'a','b','c','x' };  //  没有结束符  系统不知道后面内存还剩下的是什么；就开始乱码了

	printf("%d\n", strlen(strs));  //长度多少   34

	printf("%d", strlen("c:\test\328\test.c")); 
	return 0;
}