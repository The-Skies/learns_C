#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//int main(void) {
//	int a, b, c;
//	a = 5;
//	c=++a;  //c=6 a=6
//	b = ++c, c++, ++a, a++; //c = 7 ++  a = 7 ++ b=7
//
//	/// ��������� ���ȼ����� ��ֵ�����
//	b += a++ + c; // a++  b= b+a++ +c => 7 + 8++ +8 => 23 ��ֵ b=23    ��
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
//	//k *= i + j;  //��������� ���ȼ����� 
//	////k *= (i + j);  //�Ƽ�д��
//	//printf("%d", k);
//
//
//	//C������û������������ģ�  C���ԣ������﷨�Ĺ���   �⺯��������c���ԣ���߿���Ч�ʣ���
//
//	//test.c    ->  test.exe
//	//Ԥ���루ɾ��ע�ͣ�  ���루��   ���  ����
//
//	///
//	//int x = 0;
//	//int y = 0;
//	////���м��Σ���
//	//for (x = 0, y = 0; (y = 123) && (x < 4); x++);
//	//printf("%d", x);
//
//
//	///
//	// 11 | 10 �Ľ��
//	// 11 -�� 00000000 00000000 00000000  00001011
//	// 10 -�� 00000000 00000000 00000000  00001010
//	//		  00000000 00000000 00000000  00001011   =��11	
//
//
//	/// 
//	/*
//		char a; int b;float c;double d;
//		a+b+c+d    ���ڵ���ֵΪ double���ͣ�
//	
//	*/
//	return 0;
//}

///��Ŀ
//��A��B����С��������
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
//	/// a * i % b == 0  ��С������
//	int i = 1;
//	for (i = 1;; i++) {
//		if (a * i % b == 0) {
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//	return 0;
//}

///��Ŀ
//i like beijing��
//beijing�� like i
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
//	// ʹ��scanf�ռ��ַ������ո�Ĭ�Ͻ�����
//	//gets�����ռ��ո��ַ�
//	//gets��char* arr��
//	gets(arr);
//	
//	//������ת����
//	//	1.�ַ�������ת .gnijieb ekil i\0
//	int len = strlen(arr);
//	reverse(arr, arr+len-1);
//	////  2.ÿ���������� beijing.  like i\0
//	char* strat = arr;
//	while (*strat)   //*strat == '\0'  ѭ������
//	{
//		char* end = strat;
//		while (*end != ' '&& *end != '\0') //
//		{
//			end++;
//		}
//		reverse(strat, end-1);  //endָ��ո����Լ�һ
//		if (*end == ' ')
//			strat = end + 1;
//		else
//			strat = end;   // Ϊ'\0'�����
//	}
//	printf("%s\n", arr);
//	return 0;
//}

///��Ŀ
//ͳ�ƶ��������в����1�ĸ���
//дһ���������ز�����������1�ĸ�����
// 15  0000 1111  4��1
//int NumberOf1(int num) {
//	/*ȡ��λ
//	 123
//	 123%10=3
//	 123/10=12
//	 12%10=2
//	 12/10=1
//	 1%10=1
//	 1/10=0
//		������
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
//	//�������У��������飡
//	int count=0;
//	/*if (num % 2 == 1) {
//		count++;
//	}
//	num /= 2;*/
//	///��һ��
//	//int i = 0;
//	//for (i = 0; i < 32; i++) {   //int 32b
//	//	if (((num >> i) & 1) == 1) {  // &  ��Ϊ1 ���Ϊ1
//	//		count++;
//	//	} 
//	//}
//
//	//�ڶ���
//	/*
//		n=n&��n-1��
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
//	//���� -1    ����Ϊȫ1��
//	int ret = NumberOf1(n);
//	printf("%d", ret);
//	return 0;
//}

///��Ŀ
//д�����ж�һ�������ǲ���2��n�η���
// 8 ->
// 0000 1000   n
// 0000	0111   n-1
// n & n-1 =>  0
//2��n�η�����ֻ��һ�� 1  ��Ϊ n
//int main(void) {
//	int num = 4;
//	if ((num & (num - 1)) == 0) {
//		printf("n=%d:��2��n�η���",num);
//	}
//	else
//		printf("n=%d:����2��n�η���", num);
//
//	return 0;
//}


///��Ŀ
//���������������в�ͬλ�ĸ�����
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
//	//���
//	int ret = n ^ m;  //��ͬλ0������Ϊ1��
//
//	//��ͳ�� �����������ж��ٸ� 1��
//	///  ��һ��
//	// n & n-1  = 0 �˳�
//	//          = 1 count++ 
//	while (ret) {
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	///�ڶ���
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


///��Ŀ
//��ӡ���������Ƶ�����λ��ż��λ��
//int main(void) {
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn��2�����е�����λ��ż��λ��
//	//00000000 00000000 00000000 00001010
//	int i = 0;
//	for (i = 31; i >= 1; i-=2) {
//		printf("%d", (n >> i) & 1);  // n >> i ���õ��ƶ�Ϊ�Ķ�������
//	}
//	printf("\n");
//	for (i = 32; i >= 1; i-=2) {
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}

///��Ŀ
//����������������ʹ����ʱ����
//int main(void) {
//	int a = 10;
//	int b = 20;
//	printf("a=%d  ;  b=%d", a, b);
//
//	//w = a^b;   w Ϊ�м�ֵ  a = a ^ w    b = b ^ w;
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