#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//int main(void) {
//	int a, b, c;
//	a = 5;
//	c=++a;  //c=6 a=6
//	b = ++c, c++, ++a, a++; //c = 7 ++  a = 7 ++ b=7
//
//	/// 算数运算符 优先级高于 赋值运算符
//	b += a++ + c; // a++  b= b+a++ +c => 7 + 8++ +8 => 23 赋值 b=23    ；
//	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
//
//	return 0;
//}

//int cut = 0;
//int fib(int n) {
//	cut++;
//	if (n == 0) {
//		return 1;
//	}else if(n==1) {
//		return 2;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//		// 8    - 
//		// 7   6    
//		// 6 5 	5 4	  -7
//		// 5 4	4 3  4 3 3 2	 -8 
//		// 43 32  32 21 32 21 21 10 	 - 8	
//		//	....
//		// 
//	}
//}
//void main(viod) {
//	fib(8);
//	printf("%d", cut);  // 
//	return 0;
//}

//void main(void) {
//	///
//	/*int i = 1;
//	int j;
//	j = i++;
//
//	printf("%d %d", i, j);*/
//
//	///
//	//int i = 10;
//	//int j = 20;
//	//int k = 3;
//	//k *= i + j;  //算数运算符 优先级高于 
//	////k *= (i + j);  //推荐写法
//	//printf("%d", k);
//
//
//	//C语言是没有输入输出语句的；  C语言（各种语法的规则）   库函数不属于c语言（提高开发效率，）
//
//	//test.c    ->  test.exe
//	//预编译（删除注释）  编译（）   汇编  链接
//
//	///
//	//int x = 0;
//	//int y = 0;
//	////运行几次？？
//	//for (x = 0, y = 0; (y = 123) && (x < 4); x++);
//	//printf("%d", x);
//
//
//	///
//	// 11 | 10 的结果
//	// 11 -》 00000000 00000000 00000000  00001011
//	// 10 -》 00000000 00000000 00000000  00001010
//	//		  00000000 00000000 00000000  00001011   =》11	
//
//
//	/// 
//	/*
//		char a; int b;float c;double d;
//		a+b+c+d    等于的数值为 double类型；
//	
//	*/
//	return 0;
//}

///题目
//求A、B的最小公倍数；
//int main(void) {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	///(m % a == 0) && (m % b == 0)  
//	/*int m = a > b ? a : b;
//	while (1) {
//		if ((m % a == 0) && (m % b == 0)) {
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}*/
//
//	/// a * i % b == 0  最小公倍数
//	int i = 1;
//	for (i = 1;; i++) {
//		if (a * i % b == 0) {
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//	return 0;
//}

///题目
//i like beijing。
//beijing。 like i
//void reverse(char* left,char* right) {
//	while (left < right) {
//		char temp = 0;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//
//		left++;
//		right--;
//	}
//}
//#include <string.h>
//
//int main(void) {
//	char arr[100] = { 0 };
//	// 使用scanf收集字符遇到空格默认结束；
//	//gets可以收集空格字符
//	//gets（char* arr）
//	gets(arr);
//	
//	//三步翻转法；
//	//	1.字符串整翻转 .gnijieb ekil i\0
//	int len = strlen(arr);
//	reverse(arr, arr+len-1);
//	////  2.每个单词逆序 beijing.  like i\0
//	char* strat = arr;
//	while (*strat)   //*strat == '\0'  循环结束
//	{
//		char* end = strat;
//		while (*end != ' '&& *end != '\0') //
//		{
//			end++;
//		}
//		reverse(strat, end-1);  //end指向空格所以减一
//		if (*end == ' ')
//			strat = end + 1;
//		else
//			strat = end;   // 为'\0'的情况
//	}
//	printf("%s\n", arr);
//	return 0;
//}

///题目
//统计二进制数中补码的1的个数
//写一个函数返回参数二进制中1的个数；
// 15  0000 1111  4个1
//int NumberOf1(int num) {
//	/*取个位
//	 123
//	 123%10=3
//	 123/10=12
//	 12%10=2
//	 12/10=1
//	 1%10=1
//	 1/10=0
//		二进制
//	15  0000 1111
//	15%2=1    7....1    
//	15/2=7				0000 0111
//	7%2=1     3....1    
//	7/2=3				0000 0011
//	3%2=1     1.....1    
//	3/2=1				0000 0001
//	1%2=1	  1.....1   0000 0001
//	1/2=0				0000 0000
//
//
//	14 -- 0000 1110
//	7  -- 0000 0111
//	*/
//	//正数还行；负数不灵！
//	int count=0;
//	/*if (num % 2 == 1) {
//		count++;
//	}
//	num /= 2;*/
//	///第一种
//	//int i = 0;
//	//for (i = 0; i < 32; i++) {   //int 32b
//	//	if (((num >> i) & 1) == 1) {  // &  都为1 结果为1
//	//		count++;
//	//	} 
//	//}
//
//	//第二种
//	/*
//		n=n&（n-1）
//		// 1111   n    
//		// 1110   n-1  
//		// 1110   n    
//		// 1101   n-1  
//		// 1100   n
//		// 1011   n-1  
//		// 1000   n
//		// 0111   n-1
//		// 0000   n
//	***/
//	while (num) {
//		num = num & (num - 1);
//		count++;
//	}
//
//	return count;
//}
//int main(void) {
//	int n = -1;
//	//负数 -1    补码为全1；
//	int ret = NumberOf1(n);
//	printf("%d", ret);
//	return 0;
//}

///题目
//写代码判断一个数字是不是2的n次方；
// 8 ->
// 0000 1000   n
// 0000	0111   n-1
// n & n-1 =>  0
//2的n次方的数只有一个 1  即为 n
//int main(void) {
//	int num = 4;
//	if ((num & (num - 1)) == 0) {
//		printf("n=%d:是2的n次方；",num);
//	}
//	else
//		printf("n=%d:不是2的n次方；", num);
//
//	return 0;
//}


///题目
//求两个数二进制中不同位的个数；
//22 33    =>  5
//int main(void) {
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	/*for (i = 0; i < 32; i++) {
//		if (((m >> i) & 1) != ((n >> i) & 1)) {
//			count++;
//		}
//	}*/
//
//	//异或
//	int ret = n ^ m;  //相同位0；相异为1；
//
//	//在统计 二进制里面有多少个 1；
//	///  第一种
//	// n & n-1  = 0 退出
//	//          = 1 count++ 
//	while (ret) {
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	///第二种
//	//ret>>1)&1 = 1  count ++
//	//			= 0  exit
//	/*for (i = 0; i < 32; i++) {
//		if (((ret >> i) & 1) == 1)
//			count++;
//	}*/
//
//
//	printf("%d\n", count);
//	return 0;
//}


///题目
//打印整数二进制的奇数位和偶数位；
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的2进制中的奇数位和偶数位；
//	//00000000 00000000 00000000 00001010
//	int i = 0;
//	for (i = 31; i >= 1; i-=2) {
//		printf("%d", (n >> i) & 1);  // n >> i 能拿到移动为的二进制数
//	}
//	printf("\n");
//	for (i = 32; i >= 1; i-=2) {
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}

///题目
//交换两个变量，不使用临时变量
//int main(void) {
//	int a = 10;
//	int b = 20;
//	printf("a=%d  ;  b=%d", a, b);
//
//	//w = a^b;   w 为中间值  a = a ^ w    b = b ^ w;
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//
//	a = b - a;
//	b = b - a;
//	a = a + b;
//	printf("a=%d  ;  b=%d", a, b);
//	return 0;
//}