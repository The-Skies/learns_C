#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>

void print_arr(char* arr) {
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
}
////递归，函数自己调用自己；
//
////题目
////接受无符号整形值；按照顺序打印她得到每一位； 输入1234   输出 1 2 3 4
//
//// 1234 %10 = 4
//// 1234/10 = 123  123%10 = 3
////...

////递归
////print(1234)
////print(123)+4
////print(12)+3
////print(1)+2

//// 内存
	//栈
		///*局部变量 函数参数（临时参数 ）*/
	//堆	
		///*动态内存分配 malloc/free\calloc\realloc*/
	//静态区
		///*全局变量 静态变量*/

//int main(void){
//	void print(int n);
//	unsigned int num = 0;
//	printf("input num>\n");
//	scanf("%d", &num);
//	print(num);
//	return  0;
//}
//
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}



////编写函数，求字符串长度；不许使用临时变量；
//int main(void) {
//	int get_len(char* str);
//	char arr[] = "hello";
//
//	printf("%d\n", get_len(arr));
//}
//int get_len(char* str)
//{
//	/*int count = 0;
//	while(*str != '\0')  //结束条件 
//	{
//		count++; //返回操作
//		str++;   //循环操作
//	}*/
//	if (*str == '\0') {
//		return 0;
//	}else{
//		return 1 + get_len(str + 1);
//	}
//}


////求n的阶乘： 
//int main(void) {
//	int fac(int n);
//	int n = 0;
//	printf("n?");
//	scanf("%d", &n);
//	/*int temp = 1;
//	for (int i = 1; i <= n; i++) {
//		temp = temp * i;
//	}
//	printf("n的阶乘为：%d",temp);*/
//
//	//递归
//
//	printf("n的阶乘为：%d", fac(n));
//return 0;
// 
//}
//
//int fac(n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * fac(n - 1);
//	}
//}

////求n的fei bo la qie数列
//int main(void) {
//	int feibo(int n);
//	int feibo_02(int n);
//	int n = 0;
//	printf("n?");
//	scanf("%d", &n);
//	/*
//	int result[n] = { 1,1 };
//	for (int i = 0; i < n; i++) {
//		result[i + 2] = result[i] + result[i + 1];
//	}
//	print_arr(result);
//	*/
//	//while 
//	
//	printf("第n:=%d个菲波拉qie数列:=%d",n, feibo_02(n));
//
//
//	//递归
//	//printf("第n：%d个菲波拉qie数列:=%d", n, feibo(n));
//	return 0;
//}
//int feibo(int n)
//{
//	if (n < 2) {
//		return 1;
//	}
//	else {
//		////  会大量重复运算；  效率低   n=40   3会被计算三十几万次
//		return feibo(n - 1) + feibo(n - 2);
//	} 
//
//}
//
//int feibo_02(int n) {
//	int a = 1, b = 1, c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return  c;
//}

//// . 汉诺塔问题
//void hanio(int n, char one, char two, char three)
//{
//	void moveto(char x, char y);
//	if (n == 1)
//	{
//		moveto(one, three);
//	}
//	else
//	{
//		hanio(n - 1, one, three, two);
//		moveto(one, three);
//		hanio(n - 1, two, one, three);
//	}
//}
//int count = 0;
//void moveto(char x, char y)
//{
//	count++;
//	printf("%c --移动到--> %c  ===>第%d次移动\n", x, y, count);
//}
//
//int main(void) {
//	//汉诺塔计算
//	/**
//	 * 将a上n-1个盘借助c移到b上；
//	 * 把a上身下的一个盘移到c上   //结束条件
//	 * 将b上n-1个盘借助a移到c
//	 * */
//	int num;
//	printf("请输入圆盘数量:\n");
//	scanf("%d", &num);
//	hanio(num, 'a', 'b', 'c');
//	return 0;
//}


//// 青蛙跳台阶问题  
////一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法。
////f(n)=f(n-1)+f(n-2)  //和阶乘一样  但是累加
//int main(void) {
//	int fn_jumpCount(int n);
//	int fn_jumpCount_02(int n);
//	printf("n?阶");
//	int n = 0;
//	scanf("%d", &n);
//	printf("n=%d的台阶跳跃%d次", n, fn_jumpCount(n));
//	printf("n=%d的台阶跳跃%d次",n, fn_jumpCount_02(n));
//	return 0;
//}
////量大了，就慢了；
//int fn_jumpCount(int n) {
//	if (n <= 2) { 
//		return n;   //n为几返回几
//	}
//	else {
//		return fn_jumpCount(n - 2) + fn_jumpCount(n - 1);
//	}
//}
//
////普通
//int fn_jumpCount_02(int n) {
//	int a = 1, b = 1, c = a;
//	while (n>=2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}


//一到一百值之间所有整数出现多少个9
//
//int main(void) {
//	int count = 0;
//	for(int i=0;i<100;i++){
//		// i%10 == 9   判断个位为9
//		// /i/10 == 9   判断十位为9
//		if (i % 10 == 9||i/10==9) {
//			count++;
//		}
//	}
//	printf("一百以内有%d个9；", count);
//}

//1/1+1/2-1/3 .... +1/99-1/100;
//int main(void) {
//	double sum = 0.0;
//	int toggle = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += toggle * (1.0 / i);
//		toggle = -toggle;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//十个数，最大值，最小值；
//int main(void)
//{
//	double  average(double b[], int len);
//	double grade[] = { 66.0, 77.5, 88.5, 99.0, 70.0, 80.0, 90.0, 78.0, 79.0, 89.0 };
//	int len = sizeof(grade) / sizeof(grade[0]) - 1;
//	printf("max=%5.2lf", average(grade,len));
//}
//
//double average(double b[],int len)
//{
//	double sum=0.0;
//	double Max, Min;
//	Max = b[0], Min = b[0];
//	for (int i = 0; i < len; i++)
//	{
//		//max
//		if (Max < b[i])
//			Max = b[i];
//		//min
//		if (Min > b[i])
//			Min = b[i];
//		//sum(和)
//		sum += b[i];
//	}
//	return Max;
//}

// 题目：
// 1 2 3 4 ；组成互不相同，且不重复；的三位数；
//int main(void) {
//	int i, j, k, n=0, count = 0;
//	//循环遍历输出
//	while (n<3) {
//		printf("n?");
//		scanf("%d", &n);
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			for (k = 1; k <= n; k++)
//			{
//				//互不相同
//				if (i != j && j != k && i != k)
//				{
//					count++;
//					printf("%d%d%d---%d\n", i, j, k, count);
//				}
//			}
//		}
//	}
//}

//函数return不了两个数；数组可以（传过去一个数组，修改；因为是索引，元数据也会被修改====指针同理）；


//exal((v1,v2),(v3,v4),v5,v6)

// 逗号表达式 从左向右计算； 整个表达式结果是最后的一个表达式结果  v2   4个参数（v2，v4，v5，v6）


//int F(int n) {
//	if (n ==  5) {
//		return 2;
//	}
//	else {
//		return 2 * F(n + 1);
//	}
//}
//
//int main() {
//	printf("%d", F(2));
//	return 0;
//}

#include <string.h>
//题目
//字符串逆序
//int main(void){
//	void reverse_string(char* str);
//	char arr[] = "asdfggghh";
//	printf("%s\n", arr);
//	reverse_string(arr);    //拿到第一元素的的地址
//	printf("%s", arr);
//	return 0;
//}
//菲递归
//void reverse_string(char* str) {
//	int my_strlen(char* str);
//	int left = 0;
//	int right = my_strlen(str)-1;   //拿到字符串长度
//	while(left<right){
//		/*char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;*/
//
//		//指针
//		int temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//}
//递归
//
//void reverse_string(char* str) {
//	int my_strlen(char* str);
//	int len = my_strlen(str);  
//	char temp = *str;//取出第一位  存储
//	*str = *(str + len - 1);   //将最后一位放到第一位上
//	*(str + len - 1) = '\0';   //末尾添加结束字符   方便传入下个函数中；参数是一个合格的字符串
//	if (my_strlen(str+1)>1) {	// 剩下字符长度大于1；   小于一没有必要交换
//		reverse_string(str + 1);   //从第二个字符开始传入
//	}
//	*(str + len - 1) = temp;	// 将a归到f得出初始位置； 也就是被修改为'\0' 的位置
//}
//int my_strlen(char* str) {  //字符长度 
//	/*if (*str == '\0') {
//		return 0;
//	}else{
//		return 1 + my_strlen(str + 1);
//	}*/
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
 //}


////算出一个数每位上的和  1923  =》1+9+2+3=15
//int main(void) {
//	int DigitSum(int num);
//	unsigned int num = 0;
//	printf("输入n\n");
//	scanf("%d", &num);
//	int result = DigitSum(num);
//	printf("%d => %d", num, result);
//	return 0;
//}
//int DigitSum(int num) {
//	//int one, two, three, four,result;
//	//one = num % 10;  //1923  -> 3
//	//two = num /10 % 10;  //1923 -> 192 -> 2
//	//three = num / 100%10; //1923 -> 19 -> 9
//	//four = num / 1000; //1923 -> 1
//	//result = one + two + three + four;
//
//	///递归
//	if (num < 9) {
//		return num;
//	}
//	else {
//		return DigitSum(num / 10) + num % 10;
//	}
//}

//编写n得k次方；递归实现
//int main(void) {
//	double pow(int n, int y);
//	int n = 0, k = 0;
//	printf("nk??");
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//double pow(int n, int k) {
//	if (k == 0) {
//		return 1.0;
//	}
//	else if(k>0)
//	{
//		return n * pow(n, k - 1);
//	}
//	else {  // n^-k
//		return 1.0 / pow(n, -k);
//	}
//}
