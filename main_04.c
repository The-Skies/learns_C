#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//ָ��
//int main(void) {
//	int a = 10;   //a���ڴ�ᱻ�����ĸ��ֽ�
//	//�򿪼���  �� �ڴ�ۿ�
//
//	// &a   �ǵ���a�������ڴ���4���ֽ� �ĵ�һ���ֽڵĵ�ַ 
//	//%p  ר�Ŵ�ӡ��ַ��
//	printf("%p\n", &a);
//
//	int* p_a = &a;   //ָ�����
//	// * ˵���Ǹ�ָ�����
//	// int ˵�� p_aִ�еĶ�����int����
//
//	printf("%d\n", *p_a);  //* ���ַ 
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n",sizeof(double *));
//
//	//zָ����64Ϊϵͳ���� �ǰ˸��ֽ�  32λ���ĸ��ֽ�
//	// 
//	
//	
//
//	return 0;
//}
//�ṹ�壺  ������c���Դ����µ����ͳ���
	//����һ��ѧ��
struct Stu
{
	char name[20];
	int age;
	double score;
};
//����һ���鼮
struct Book
{
	char name[20];
	float proce;
	char id[30];
};
//int main(void){
//	struct Stu s = {"С��",20,80.50};   //�ṹ�崴�� ����ʼ��
//	printf("1:%s,%d,%lf\n", s.name, s.age, s.score);
//
//	struct Stu * pstu = &s;   // ����    *  ��������
//	printf("2:%s,%d,%lf\n", (*pstu).name, (*pstu).age, (*pstu).score);
//
//	printf("3:%s,%d,%lf\n", pstu->name, pstu->age, pstu->score);
//
//	// �ṹ��ָ��  -> ��Ա����
//
//
//}

//�����뻷���У�һЩ�����ı�����ʹ��getchar����li
//getchar();  
//int main(void) {
//	//int ch = 0;
//
//	////getchar����  ��Ѻ���Ļس�Ҳ�õ�
//	//while ((ch = getchar()) != EOF) {   //EOF:-1  crtl +z
//	//	//putchar(ch);  //���һ���ַ�
//	//	printf("ASCLL=%d\n", ch);
//	//}
//
//	char psd[20]={0};
//	printf("mima:\n");
//	scanf("%s", psd);
//	//int ch = getchar();   // Ĭ�ϻ�ȫ����   ���������� �س���  ����һ���Ӿͳ�����  i��NNNNNN
//	int temp = 0;
//	while ((temp = getchar()) != '\n') {   //Ϊ\n  ��ִ���˳� �������һֱȡ��
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
//��
//error :
//if (disaster)
//		// ����������

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ���������룺'������'����ȡ���ػ�!\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;     //Ҳ��ʹ��whlie��1�� �滻
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
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
