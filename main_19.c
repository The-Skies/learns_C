#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>
#include <stdio.h>


//int i;  //ȫ�ֱ�������ʼ����Ĭ��Ϊ0��
//int main(void) {
//	i--;  //-1
//	//sizeof()  ���ص����޷������� unsigned int+
//	//i���з�������  ����ת��Ϊ�޷������� �ڱȽ�
//	//-1 ȫ��Ϊ1 ���Ϊ�޷����������ͻ�ʹһ�����������������
//	if (i > sizeof(i)) { //-1>4
//		printf(">\n");
//	}else
//		printf("<\n");
//	return 0;
//}

///��Ŀ
//�������
//��Sn=a+aa+aaa+aaaa+aaaaa ��ǰ����֮�ͣ�����a��һ������
//2+22+222+2222+22222 = 
//int ret=0;
//int SumNum = 0;
//int sum(int num,int count) {
//	if (!count) {
//		return SumNum;
//	}
//	else {
//		count--;
//		ret = ret * 10 + num;
//		SumNum += ret;
//		return sum(num,count); 
//	}
//}
//
//int main(void) {
//	int num=0, count=0;
//	scanf("%d %d", &num,&count);
//	int i = 0;
//	int sum_R = 0;
//	int ret = 0;
//	for (i = 0; i < count; i++) {
//		// 2 + 22 + 222
//		ret = ret * 10 + num;
//		//�ۼ�
//		sum_R = ret + sum_R;
//	}
//
//	//printf("%d ��ǰ %d ��֮��Ϊ %d", num, count, sum_R);
//	//�ݹ�
//	printf("%d ��ǰ %d ��֮��Ϊ %d", num, count, sum(num, count));
//}

///��Ŀ
//дһ����ӡarr�������ݵģ������������±꣬ʹ��ָ��
//arr��һ������һά����
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,4,5,5,6,8,9,5 };
//	int* p = arr;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int* pEnd = arr + length - 1;
//	int i = 0;
//	
//	/*for (i = 0; i < lenth; i++) {
//		printf("%d ", *(p + i));
//	}*/
//	while (p <= pEnd) {
//		printf("%d ", *(p + i));
//		p++;
//	}
//	return 0;
//}

///��Ŀ
//���0-100000 ֮������С�ˮ�ɻ������������
//��ˮ�ɻ����� ��ָһ��nλ��������λ���ֵ�n�η����õȻ����ı���
//153 = 1^3+5^3+3^3 
//#include <math.h>
//int main(void) {
//	int i = 0;
//	for (i = 0; i < 100000; i++) {
//		//�õ���ǰ���ֵ�λ���� ����ˮ�ɻ����Ĵη���
//		int temp = i;
//		int n = 0;
//		while (temp) {
//			n++;
//			temp /= 10;
//		}
//		//��ȡÿλ�ϵ����֣����Ҽ����Ӧ�η������ۼ�������
//		temp = i;
//		int sum = 0;
//		while (temp) {
//			sum+=pow(temp % 10,n);
//			temp /= 10;
//		}
//		//�жϼ��������ֵ��
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

///���ʲô
//int main(void) {
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3; //9 += 3 => 12  ������9��Ԫ�ر�Ϊ12 
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3)); //6 12
//	return 0;
//}

/*
* struct �ǽṹ�����͵Ĺؼ���
 struct student{    //�û�����ṹ������
	 int num��			//�ṹ���Ա
	 char name[20];
	 float score;
 }stu;		//���û�����Ľṹ���������

**/
//struct stu {
//	int id_num;
//	char name[20];
//	int age;
//};
//void fun(struct stu* p) {
//	printf("%s", (*p).name);
//}
//
//int main(void) {
//	struct stu students[3] = {
//		{9801,"zhang",20},
//		{9802,"xiang",22},
//		{9803,"reng",23},
//	};
//	fun(students + 1);
//	return 0;
//}

//����ָ��Ҳ��ָ�룬��������Լ�ָ��ģ���С���Լ�ָ����ͬ��32 4 ��64 8����
//�������÷���4���ֽڣ�

//struct S {
//	int a;
//	int	b;
//};
//
//int main(void) {
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	return 0;
//
//	/**
//	A:a.a  ok
//	B:*p.a  no   .�����ȼ��ߣ�
//	C:p->a
//	D:(*p).a
//	**/
//}

///��Ŀ
//�ַ�������
//#include <assert.h>
//#include <string.h>
//void reverce(char* pa, int sz) {
//	assert(pa);  //����   �ǿյģ�
//
//	char* left = pa;
//	//char* right = ((pa + sz) - 2);  // -1 �ǡ�/0��  ����û��
//	int len = strlen(pa);
//	char* right = pa+len - 1;
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main(void) {
//	char arr[] = "hellowolrd!";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverce(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}

///��Ŀ
//��*��ӡ����
//int main(void) {
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//��
//	for (i = 0; i < line; i++) {
//	int j = 0;
//		for (j = 0; j<line-1-i;j++) //��Ҫ���������ӡ�����ޣ���Χ������
//		{
//			printf(" ");
//		}
//		//"*"
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line-1; i++) {
//		int j = 0;
//		for (j = 0; j <= i; j++) //��Ҫ���������ӡ�����ޣ���Χ������
//		{
//			printf(" ");
//		}
//		//"*"
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	
//	}
//
//	return 0;
//}

///��Ŀ
//����ˮ�� 1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ������ʮԪ�����Ժȶ�����ˮ��
//20Ԫ			 20ƿ	
//	  20��ƿ  =�� 10ƿ   
//	  10��ƿ  =�� 5ƿ		
//	  5��ƿ   =�� 2ƿ    ��һ����ƿ  %2
//	  3��ƿ   =�� 1ƿ
//    1��ƿ
//	 ��=��/2+��%2 �ȵ�= ��/2     

//int main(void) {
//	int money = 0;
//	scanf("%d", &money);
//	// 20Ԫ 20ƿ��ˮ
//	int think = money;
//	int empty = money;
//	while (empty >= 2) {
//		think += empty/2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%dƿ", think);
//
//	//������  2*n-1
//	if (money >0) {
//		think = 2*money-1;
//	}
//	printf("%dƿ", think);
//
//	return 0;
//}

//F5  ��ʼ���Բ�ִ�У�
//F10 ����̵��ԣ��������������뺯��
//F11 ��������ʽ ���Թ۲�ÿ��ϸ��
//F9  ���öϵ㣬��ȡ���ϵ�

//Debug�汾
//���԰汾������̫��hi��bug�İ汾
// ����������Ϣ�������Ż�
//Release�汾
//�����汾������Ա���Ծ���Release�汾
// �����Ե��ԣ������Ż���


//pֵ�������޸ģ�pָ��ı���ֵ�����޸�  char* const p

////Խ��
////����� ����������ѭ������Խ�磬���ʵ���i�ĵ�ַ��ʹ��i=0��һֱѭ����
//int main(void) {
//	int i = 0, j = 0;
//	int arr[10] = { 2,1,4,5,6,7,89,9,2,3 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf(":h3322\n");
//	}
//
//	return 0;
//}
//ջ  �ߵ�ַ  -��  �͵�ַ 
//���� �����±������    ��ַ���ɵ͵��߱仯��
//����±��������Ĺ����о��п���Խ����ʵ�i = 0 �������ѭ��

/*
	i     i<=12   arr[i] = 0;    1=0�ˣ��������ܣ�һֱ��ѭ�����Ͳ��������ֹ��
	/		vs ��2int
	/		vc6 ��0int   gcc ��1int
	9    �ߣ��±꣩
	8
	7
	6
	5
	4
	3
	2
	1	 ��
*/

///��Ŀ
// ��������ż����˳��
//�������飬ʹ������ȫ����λ��ż��ǰ�棻
//void todo(int* arr,int len) {
//	int* left = arr;
//	int* right = arr + len - 1;
//	while (left < right) {
//		//ǰ��� ��ż��
//		while((left < right) && (*left % 2 == 1)) {
//			left++;
//		}
//		//����ǰ ������
//		while((left < right) && (*right % 2 == 0)) {
//			right--;
//		}
//		if (left < right) {
//			int temp = *left;
//			*left = *right;
//			*right = temp;
//		}
//
//	}
//
//}
//void print(int* arr,int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", *arr++);
//	}
//}
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	todo(arr,len); 
//	print(arr,len);
//	return 0;
//}


///���ݴ洢��ҵ

//int main(void) {
//	unsigned char a = 200;  //char 8b
//	//1100 1000
//	unsigned char b = 100;
//	//0110 0100
//	unsigned char c = 0;
//	c = a + b;   //�������������
//	//0000000000000000000000001100 1000
//	//0000000000000000000000000110 0100
//	//0000000000000000000000010010 1100   
//  //=��0010 1100   
//	printf("%d   %d", a + b, c); //%d ��ӡ�з���ʮ������
//	//					300	 44	
//	return 0;
//}


//int main(void) {
//	unsigned int a = 0x1234;   
//	//��� ���ͣ� 00 00 12 34 ���ߣ�
//	//С�� ���ͣ� 34 12 00 00 ���ߣ�
//	unsigned char b = *(unsigned char*)&a;
//	//unsigned int =�� unsigned char = 00
//	//unsigned int =�� unsigned char = 34
//
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10000; i++) {
//		//char���λ255  int i��Χ��
//		a[i] = -1 - i;
//	}
//
//	printf("%d", strlen(a));  //255
//	return 0;
//}

//��С���ֽ���ָ���������ڵ����ϴ洢���ֽ�Ϊ��λ��˳��
//���ֽ�����ǰ���ͣ�   ���
//���ֽ�����ǰ���ͣ�   С��

///��Ŀ
/*  �������
					1
				   1 1	
				  1 2 1
				 1 3 3 1
				1 4 6 4 1
			   1 5 10 10 5 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
**/
//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (i == j) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >=1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		int x = 0;
//		for (x = 10; x > i;x--) {
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++) {
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


///��Ŀ
//������
/**
 A��������
 B����c��
 c����D
 D��c��˵��
 ��֪3��˵���滰��һ��˵�ٻ���
***/
//int main(void) {
//	//��ÿһ�����˴��룬����Ϊ���ˣ����鿴ÿ����������٣�
//	//��������Ϊ A B C D
///*  A��������    0 1 1 1  
//	B����c��		0 0	1 0 
//	c����D		0 0 0 1
//	D��c��˵��	1 1	1 0
//	��֪3��˵���滰��һ��˵�ٻ���
//
//	��ת��Ϊ���룺
//*/
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++) {
//		if ((killer != 'A') + 
//			(killer == 'C') + 
//			(killer == 'D') + 
//			(killer != 'D') == 3) {
//			printf("killer=%c", killer);
//		}
//	}
//	return 0;
//}


//˼ά������
//�����⣻��ɢ����Ŀ��
/*
	��һ���㣬���ʲ����� һ��һСʱ
	������ȷ��һ��ʮ����ӵ�ʱ��Σ�
*/

//�𣺵�һ�����˵�ȼ����ͬʱ��Ҳ��Ȼ�ڶ�������һ�����˸պð�Сʱ��
// ���ͬʱ���ڶ�������һ��ҳ��ȼ���ڶ���ʣ�ಿ�ָջ�ʮ�����

/*
	һ����ס��ʮ¥

	��������ߵ������˵�ʱ�������ݻؼң�
	����ʱ�䵽ʮ��¥����¥�ݻؼң�

��	Ϊʲô��������
	

	��٪��


	36ƥ�� 6���ܵ� û�м�ʱ�������ٻ�������ܷ���һ��������

	ţ����app����Ŀ������
*/

/// ��Ŀ
/*
 �����Σ�

 A��B�ڶ����ҵ�����
 B���ҵڶ�,E���ģ�
 C���ҵ�һ��D�ڶ���
 D��C����ҵ�����
 E���ҵ��ģ�A��һ��
 ����������ÿλѡ�ֶ�˵����һ�룻


*/
