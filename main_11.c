#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>

////���������� + - * / %
//int main(void) {
//	////��������
//	//int a = 3 / 5;
//
//	////С������  5.0��Ĭ��Ϊdouble  ��f �Ϳ���ת��Ϊfloat������
//	//float a2 = 5.0f / 6;
//
//	//printf("%d\n", a);
//	//printf("%d", a2);
//
//	//ȡ%   ֻ��������,С��������
//	int a = 7 % 3;
//	printf("%d", a);
//	return 0;
//}


////λ�Ʋ�����  >>  <<  ���ı�Դ����
//int main(void) {
//	int a = 10;
//	//��a�Ķ����������ƶ�һλ�� int -> 4B ->4B * 8b = 32b
//	//a = 00000000 00000000 00000000 0000 1010
//	//b = << a = 00000000 00000000 00000000 0   0  0  1  0 1 0 0; 
//	//										128 64 32 16 8 4 2 0	
//	// 16+4 = 20
//
//	int b = a << 1;
//
//	//c = << a = 00000000 00000000 00000000 0000 0101; 
//	// 4 + 1
//	int c = a >> 1;
//	 //���ƣ�����λ��ȫ������0������1�����ұ�����
//
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//	return 0;
//}

////��λ������  &����λ�룩 |����λ�� ^����λ��� 2����λ  ������λ���� 
// ����ΪҲ�ῼ��
//int main(void) {
//	int a = 10;
//	int b = 13;
//	// a= 00000000 00000000 00000000 0000 1010;
//	// b= 00000000 00000000 00000000 0000 1101;
//	int c = a & b;
//	// ��λ 0 0 -��0    0 1-��0    1 1-��1
//	// c= 00000000 00000000 00000000 0000 1000;   => 8
//
//	int c2 = a | b;
//	// ��λ 0 0 -��0    0 1-��1    1 1-��1
//	// c= 00000000 00000000 00000000 0000 1111;   => 15
//
//	int c3 = a ^ b;
//	// ��λ 0 0 -��0    0 1-��1    1 1-��0   ��ͬλ0������λ1
//	// c= 00000000 00000000 00000000 0000 0111;   => 7
//
//	printf("c = %d\n", c);
//	printf("c2 = %d\n", c2);
//	printf("c3 = %d\n", c3);
//
//	//����������  
//	int num1 = 3;
//	int num2 = 5;
//	printf("num1=> %d -- num2=> %d\n", num1, num2);
//	//���  ������
//	/*num2 = num2 - num1;
//	num1 = num2 + num1;
//	num2 = num1 - num2;*/
//	printf("num1=> %d ++ num2=> %d\n", num1, num2);
//
//
//	printf("num1=> %d -- num2=> %d\n", num1, num2);
//	//�Ƽ���  0 ^ 3=3  3^3 =0
//	//(3^5)^3 = 3    3^(3^5) = 5     
//	// (3^5���м���    3^�м��� =5   5^�м��� =3
//	num2 = num1 ^ num2;// num2 = 011 ^ 101 => 110    
//	num1 = num1 ^ num2;// num1 = 101 ^ 110 => 011		
//	num2 = num1 ^ num2;// num2 = 011 ^ 110 => 101
//	printf("num1=> %d ++ num2=> %d\n", num1, num2);
//
//	return 0;
//}

//// ��ֵ������ = += -= *= /= <<=  >>= %= &= ^= |=
//int main(void) {
//	int a = 13;
//
//	int x =0,y = 7,c=9;
//	c = x = y + 1;  // c=x=8   �����д��
//	printf("c=%d  --  y=%d", c,x);
//}


//// ��Ŀ������ �� - + &(ȡ��ַ) *�����ַ�� sizeof ~����λȡ���� ++ -- �����ͣ�
//int main(void) {
//	int flag = 5;
//	//flag = !flag;
//	if (flag) {
//		printf("true:%d\n", flag); //5
//	}
//	else {
//		printf("true:%d\n", flag);   //0
//
//	}
//
//
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2)); //sizeof�����еı���ʽ���������㣻
//	printf("%d\n", s);
//
//
//	//test
//	int as = 13;
//	as = as | (1 << 4);
//	/***
//	* 1 => 00000000 00000000 00000000 00000001
//	* 1<<4  =		00000000 00000000 00000000 00010000  ��λ
//	*
//	* 13=>			00000000 00000000 00000000 00001101
//	* 13 | (1<<4)	00000000 00000000 00000000 00011101 29
//	**/
//	printf("as | (1 << 4) = %d\n", as);
//
//	as = as & ~(1 << 4);
//	/**
//	* 1<<4  =		00000000 00000000 00000000 00010000
//	* ~(1<<4) =		11111111 11111111 11111111 11101111
//	*
//	*
//	* 13=>			00000000 00000000 00000000 00001101
//	* 13 & ~(1 << 4)00000000 00000000 00000000 00001101   13
//	**/
//	printf(" as & ~(1 << 4) = %d\n", as);
//
//
//
//	//��ֵĴ���
//	int num1 = 1;
//	int num2 = (++num1) + (++num1) + (++num1);
//	printf("%d\n", num2);
//
//
//	//& ȡ��ַ  *��ֵ
//	int demo = 10;
//	printf("%p\n", &demo);
//	int* pDemo = &demo;
//	*pDemo = 20;  // * - ȡ��ַ
//	printf("%d\n", demo);
//
//	//(����)  ǿת��
//	int nums = (int)3.14;
//	printf("%d\n", nums);
//	
//	return 0;
//}

//������Ϊ�������뺯���У� ������������һ��Ԫ�صĵ�ַ��ָ�룩  32λ 4B  64λ 8B

//// ==  �����ַ�����ʹ������ж���ȣ� 
//// &&  ��
//// ||  �� 
//
//int main(void){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;// aΪ�ٺ���ͻ�����
//	i = a++ || ++b || d++;   //Ϊ���ˣ�����Ͳ�����
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

////��Ŀ����  ���ű���ʽ�������������μ��㣬��������ʽ�������һ������ʽ�Ľ����
//int main(void) {
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	//			5      8         4           10  =>d=10
//	printf("d=%d", d);
//
//
//	//Ӧ��
//	a = get_val();
//	count_val(a);
//	while(a > 0)
//	{
//		//ҵ����
//		a = get_val();
//		count_val(a);
//	}
//
//	//�Ż�  ��ͬ������Ĵ���
//	while (a = get_val(),count_val(a),a > 0)
//	{
//		//ҵ����
//	}
//
//	return 0;
//}


//[] �±�  () �������ò�����

//int main(void) {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	prtinf("%d\n", arr[4]);
//	return 0; 
//}

//�ṹ��   ���������Լ�����һ������
	/**
	* �飬��������ţ�������
	* �ˣ����֣����䣬�Ա�
	*
	**/
	//�ṹ���Ա���ʲ�����
	//.
	//->
//�Զ�������
//struct Book   //struct  �ṹ����{  ���Զ��� }
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main(void) {
//	int num = 10;
//	//��ʼ�� 
//	//struct Book b = {val}
//	struct Book b = { "Fuck","c12345649687",55 };
//
//	printf("����=%s\n���=%s\n�۸�=%d\n", b.name,b.id,b.price);
//
//	struct Book * pb= &b;
//	printf("����=%s\n���=%s\n�۸�=%d\n", (*pb).name, (*pb).id, (*pb).price);
//
//	// ->ָ��   pbָ��ṹ���name
//	printf("����=%s\n���=%s\n�۸�=%d\n", pb->name, pb->id, pb->price);
//	return 0; 
//}


////��ʽת����   ΪʲôҪ���������أ�    cpu���������Ĳ������ֽڳ���Ϊint�ֽڳ��ȣ�
//int main(void) {
//	//1.������������ת��Ϊ�����Ʋ��룻
//	//2.��������  Ϊ0���޷��ţ�=>0  Ϊ1=>1    
//	//3.���㣻֮��ضϣ�  ()
//		//�����
//	// 4.  =>2
//	// 5��ӡ  => Դ��
//
//
//	char a, b, c;
//	b = 'b';
//	// 01100010
//	//����
//	// 00000000 00000000 00000000 01100010
//	c = 'c';
//	// 01100011
//	//����
//	// 00000000 00000000 00000000 01100011
//	
//	//��ִ��ת��Ϊint ���ټ��㣻 ������ضϣ��洢��a�У�
//	a = b + c;   
//	// 00000000 00000000 00000000    01100010
//	// 00000000 00000000 00000000    01100011
//	// => 00000000 00000000 00000000 11000101
//	// �ض� 11000101
//		
//	printf("a=%d\n", a);  //-59
//	// 11111111 11111111 11111111 11000101 ������
//	// 11111111 11111111 11111111 11000100
//	// 10000000 00000000 00000000 00111011  ��Դ��    -59
//
//	//Ϊ��������������һ����
//	//������Ҫ������
//	char num1 = 3;
//	//000000011
//	//���������� ���밴�շ���Ϊ�� Ϊ0���޷��ţ�����0
//	//00000000 00000000 00000000 00000011
//	char num2 = 127;
//	//01111111
//	// ���������� ���밴�շ���Ϊ�� Ϊ1����1
//	//00000000 00000000 00000000 01111111
//	char num3 = num1 + num2;
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//=> 00000000 00000000 00000000 10000010
//	//�ض� 100000010  ��������
//	printf("num3=%d\n", num3);  //
//	// ��ӡ���λint������ٴ���������
//	// 11111111 11111111 11111111 100000010 ������
//	// 11111111 11111111 11111111 100000001 ��������ȡ������λ���䣩
//	// 10000000 00000000 00000000 011111110	 (Դ��   -126
//
//	//����
//	char s1 = 0xb6;
//	short s2 = 0xb600;
//	int s3 = 0xb6000000;
//	if (s1 == 0xb6) {
//		printf("a\n");
//	}
//	if (s2 == 0xb600) {
//		printf("b\n");
//	}
//	if (s3 == 0xb6000000) {
//		printf("c\n");
//	}
//
//	char val = 1;
//	printf("%u\n", sizeof(val)); // 1   sizeof����  ����Ǽ�����ֵ
//	printf("%u\n", sizeof(+val)); // 4
//	printf("%u\n", sizeof(-val)); // 4
//	printf("%u\n", sizeof(!val)); // 4  gccΪ׼
//
//	return 0;
//}

//����ת��   ת����ѭ����ת��  �ȳ��ȣ���ͬ���ȱȾ���
/**
*  long double
*  double
*  float  �����ȸ�����int��
*  unsigned long int 
*  long
*  unsigned int 
*  int      
 **/


//������������
//���ӱ���ʽ��ֵ������Ӱ������ء�
/**
* 1.���������ȼ�  (����ȡ0���ڲ���)   
*	(����ʽ)  �������ã���  �����±�����[]  ���ʽṹ��Ա.  ���ʽ��ָ��ĳ�Ա ->
*    val++   val--  �����߼�����  ~����λȡ����  + -   ++val  --val
*    *�����ַ��   &��ȡ��ַ��    sizeof()  �����ͣ�   
*    *���ˣ�   /  %  +   -   <<  >>   >  >=  >  <= == !=  
*    &(λ�� 11Ϊ1)  ^��λ��� ��ͬΪ0 ����Ϊ1��  |��λ�� ��1Ϊ1��
*	 && || ?:(��������Ŀ������)  =  +=  -=  *=  /=  %= <<=  >>=  &=  ^=  |= 
*    ,
* 
* 2.�������Ľ����
* 3.�Ƿ������ֵ˳��
* 
*  �������ڵĲ�������ִ���ĸ���
*		ȡ�������ǵ����ȼ���
*�����ȼ���ͬ��ȡ�������ǵĽ����
**/
//int fun()
//{
//	//�����󣬲��ᱻ����
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	//��֪���ĸ��������ȱ�����
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//������٣�
//	return 0;
//}

//תΪ���  ���� �һ�-ת��ࣻ
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret); //12
//	printf("%d\n", i);//4
//
//	return 0;
//}

