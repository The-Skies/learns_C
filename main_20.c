#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <windows.h>
#include <string.h>

//һ��ָ�봫�� 
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
////����ָ�봫��
//int main(void) {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(ppa); //������ָ��
//	test(&pa); //��һ��ָ��ĵ�ַ
//				// ������Ҳ��
//	printf("%d", **ppa);
//	return 0;
//}

 ///  ����ָ��
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
//	int(*pa)[10] = &arr;  //����ָ��  ��һ��ָ�룬������飻
//
//	//����ָ�� ��ź�����ָ�룻
//	printf("%p\n", &Add);  //��ʽ�ϵ���������һ��
//	printf("%p\n", Add);
//
//	//����ָ�����
//	int (*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 5);  //*��ָ��  �õ� Add   *������û�����壻�������
//	int ret2 = (pf)(4, 5);  //û��* Ҳ��
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

///��Ȥ����  ��c�����ȱ�ݡ�
//int main(void) {
//	//����0��ַ���ĺ���
//	(*(void(*)())0)();
//	//void��*������ - ����ָ������
//	//void(*)())0  - ��0����ǿ������ת����������Ϊһ�������ĵ�ַ��
//	//*(void(*)())0)  - ��0��ַ�Ľ�����
//	//(*(void(*)())0)() - ��0��ַ���ĺ�������
//
//
//	void(*signal(int, void(*)(int)))(int);
//	//signal�Ǻ��� ��һ��������int �ڶ��������Ǻ���ָ��
//	//* signal ���ص���һ������ָ�룻
//	//�������ָ�룬ָ��һ������Ϊint������������void�ĺ�����
//
//	//ʹ��typedef �������ض���
//	typedef unsigned int uint;  //uintΪunsigned int
//	//�ȼ�����Ĵ��룻
//	typedef void(*pfun_t)(int); //  void(*)(int)  ����pfun_t
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
///����ָ������ switchд��
//int main(void) {
//	int (*pAdd)(int, int) = Add;
//	int (*pSub)(int, int) = Sub;
//	int(*pArr[])(int, int) = { Add,Sub };  //pArr ����ָ�������
//
//
//	//����ָ�������Ӧ��
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("������ģʽ��\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case  1:
//			printf("������������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("�������������ΪL��%d\n",ret);
//			break;
//		case  2:
//			printf("������������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("�������������ΪL��%d\n", ret);
//			break;
//		case  3:
//			printf("������������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("�������������ΪL��%d\n", ret);
//			break;
//		case  4:
//			printf("������������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("�������������ΪL��%d\n", ret);
//			break;
//		case  0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("����������������롢\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//����ָ��
//int main(void) {
//	int (*pAdd)(int, int) = Add;
//	int (*pSub)(int, int) = Sub;
//	int (*pArr[])(int, int) = { Add,Sub };  //pArr ����ָ�������
//
//
//	//����ָ�������Ӧ��
//	int input = 0;
//	do {
//		menu();
//		int (*pfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int ret = 0;
//		int x = 0;
//		int y = 0;
//		printf("������ģʽ��\n");
//		scanf("%d", &input);
//		if (!input) {
//			break;
//		}
//
//		printf("������������������\n");
//		scanf("%d %d", &x, &y);
//		ret = (pfarr[input])(x, y);
//		printf("�������������ΪL��%d\n", ret);
//
//	} while (input);
//	printf("���������");
//	return 0;
//}

/*
	����ָ������� - ����
	ȡ������ָ������ĵ�ַ��

	��������
	int arr[5];
	int (*p1)[5] = &arr[5];

	����ָ������
	int* arr2[5];
	int* (*p2)[5] = &arr2;

	����ָ������
	int (*pf)(int, int);  // ����ָ��
	int (* pf2[4]) (int, int) = &pf;   //����ָ�������
	int (*(*pf3)[4])(int, int) = &pf2; //������ָ������顿��ָ��

****/
//void  test(const char* str) {
//	printf("%s\n", str);
//}
//int main(void) {
//	//����ָ��
//	void (*pf)(const char* str) = test;
//
//	//����ָ�������
//	void (*pf2[5])(const char* str) = { pf };
//
//	//������ָ������顿��ָ��
//	void (*(*pf3)[5])(const char* str) = pf2;
//
//	char str[] = "holle wolrd��";
//	char* str_p = str;
//	(*pf3)[0](str_p);
//	return 0;
//}