#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>
int test_03(void) {
	//操作符
		//算数操作符 
		//------  + - * / %
	float a = (9 / 2);
	printf("%f\n", a);     //4.0000   除号左右都是整数  执行整数除法；结果也为整数
	printf("%f\n", (9 / 2));   //0.0000
	printf("%f\n", (9 % 2));   //0.0000

		//移位操作符
		// ------ << >>		移动的是二进制数
	int num = 2;
	//num的二进制位为 int 4B->32bit    00000000 00000000 00000000 00000010  左移移位 00000100
	int b = num << 1;   //4
	printf("%d\n", b);

	// 位操作符 
		//------ & （按位与） |（按位或） ^ （按位异或）

	// 赋值操作符
		//------ = += -=  *= /= %= &= ^= |= <<= >>=

	//单目操作符
		//------- ！   -   +   &   sizeof（是操作符，不也是函数） 
	int arr[10] = { 0 };
	printf(":%d\n", sizeof(arr));  //计算数组的整体大小，单位字节    40
	printf(":%d\n", sizeof(arr[0]));  //计算数组单个元素大小，单位字节    4
	int arrlength = sizeof(arr) / sizeof(arr[0]);   //arr指针 在64位系统中为8B   32位 4B
	printf(":%d\n", arrlength);  //  10

		//------ ~（对一个数的二进制按位取反）  
		//将原来二进制数，原来为1的变为0；为0变为1；

		//一个整数的二进制 表示有3种；   -1  （整数最高位为符号位）
		//源码	10000000 00000000 00000000 00000001
		//反码	11111111 11111111 11111111 11111110    符号位不变其他取反
		//补码	11111111 11111111 11111111 11111111 	反码的基础上 加一  					
		//  正整数  源码反码补码相同  负整数 才有计算价值
	int num_02 = 0;
	printf("%d\n", ~num_02);   //-1
	/*
		~(~0 << 4) 分三步
		1. 取反 ~0 = 11111111 11111111 11111111 11111111    －1在计算机里用二进制表达就是全1
		2. 左移 ~0 << 4 = 11111111 11111111 11111111 11110000
		3.取反 ~(~0 << 4) = 00000000 00000000 00000000 00001111
	*/
		
	
		//------  --   ++   *   (类型)不推荐使用，如果需要；说明设置的有问题
		
		//------ && ||  !

		// 三目运算

	/// <summary>
	/// 逗号表达式  ，
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	int a2 = 0, b2 = 1, c2 = 1;
	int d = (a2 = b2 + 2, c2 = 1 - 4, b2 = c2 + 2);   //从左往右，依次运算  -1
	//整个表达式的结果，是最后一个表达式的结果
	printf(" d =%d\n", d);
	 

	
		

	return 0;
} 

//声明外部全局变量       extern 声明 外部变量的符号
extern int g_val_02;
//声明外部全局函数

extern int add(int x, int y);
typedef unsigned int u_int;    //把unsigned int 类型重新起了名字 u_int
int test_04(void){
	/// <summary>
	///  [] （） .  -> 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	//define  include    预处理
	/// <summary>
	/// 常见关键词   
	/// auto （自动变量）  省略
	///
	/// switch csae default continue break return 
	/// 
	/// char  double  float int long short signed   unsigned  void volatile
	/// 
	/// const static  extern struct（结构体）union（联合体）enum（枚举）  register
	/// 
	///   sizeof typedef （类型重命名）
	/// 
	/// if else goto
	/// 
	/// do while for
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// 
	/// //typedef
	
	
	unsigned int num_04 = 100;
	//等同于
	u_int num_03 = 100;
	
	//static 静态的
	// 1. static  修饰局部变量     
	// 2. static  修饰全局变量
	// 3. static  修饰函数
	void demo();  
	int i = 0;
	while (i < 10) {
		 demo();
		i++;
	}

	//使用全局变量
	printf("%d\n", g_val_02);

	//使用全局函数
	int sum = add(5, 6);
	printf("sum = %d", sum);
	return 0;

}
void demo() {
	//内存分为   栈区（局部变量，函数参数） 堆区（动态内存分配）  静态区（全局变量；static修饰的静态变量）
				//函数结束，销毁										程序结束销毁

	static int a = 1;  // 2 ~ 11    static 取代了auto  ；auto函数结束即销毁； static 不销毁；
	a++;
	printf("%d\n", a);
}

//define 预处理指令
 //1. define  定义常量
//#define MAXS  1000
//int main(void){
//	printf("%d\n", MAXS);
//	return 0;
//}


//2.define 定义宏
//#define ADD(x,y) (x+y)    //这里有括号（4*（2+3））和每括号（4*2+3）注意区分  
//int main(void){
//	printf("%d\n", 4 * ADD(2 , 3));
//	return 0;
//}