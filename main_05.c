#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <windows.h>
#include <string.h>
/*
	����n�ý׳�
*/
//int main(void) {
//	int n = 0;
//	int result = 1;
//	printf("n=?\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n;i++) {
//		result *= i ;
//	}
//	printf("result=%d\n", result);
//	return 0;
//}

/*
	����1��+2��+3��....10��
*/
//int main(void) {
//	int result = 0;
//	for (int i = 1; i <= 3;i++) {
//		int temp = 1;   //ÿ���׳˼���  Ҫ��������
//		for (int j = 1; j <= i;j++) {
//			temp *= j;
//		}
//		result += temp;
//	}
//	printf("result = %d\n", result);
//}

//�Ż�
//int main(void) {
//	int result =0 ,temp= 1;
//	for (int i = 1; i <= 3; i++) {
//		// 3! = 1*3+2!
//		// 2! = 1*2+1!
//		temp *= i;
//		result += temp;
//	}
//	printf("result = %d\n", result);
//}

//���������е������Ƿ�������������±�
//int  main(void) {
//	int bin_search(int arr[], int left, int right, int find);
//	int arr[] = { 1,2,3,4,4,6,6,7,8,45 };  //ֵ������ ð���˵�����
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;   //�������峤�� / ����һ������ -1 => �õ�����Ԫ�ظ���
//	int find = 6;
//	// ���� ��int arr[],int left,int right,int find��
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;   //ÿ��ѭ������Ҫ�м�ֵ
//		if (arr[mid] > find)   //�Ƚ��м��ֵ  �� ���ҵ�ֵ��  ��mid ���м�ֵ-1  mid������left����һ�룻
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < find)// �Ȳ���ֵС��  mid ���м�ֵ+1  ������right�ƶ�
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//			//return  mid;
//		}
//		
//	}
//	// ѭ��������û�У� return -1��
//	
//	//bin_search()��
//	if (left <= right)
//	{
//		printf("finded val:%d in %d", find, mid);
//	}
//	else
//	{
//		printf("connot find!!!");
//	}
//
//}



/*
���
w*******************!
we*****************d!
wel***************rd!
welc*************lrd!
welco***********olrd!
welcom*********wolrd!
welcome******* wolrd!
welcome *****e wolrd!
welcome t***he wolrd!
welcome to*the wolrd!
welcome to the wolrd!
welcome to the wolrd!
*/

//int main(void) {
//	char arr[] = "welcome to the wolrd!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right) {
//		arr2[left] = arr[left];
//		arr2[right] = arr[right];
//		printf("%s\n", arr2);
//		//Sleep(1000);   // ˯��1��
//		//system("cls");    //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0; 
//}


/*
	�����ȷ�ַ��� 123456
*/
//int main(void) {
//	int i = 0;
//	char passworld[20];
//	for (i = 0; i < 3; i++) {
//		printf("���������룺\n");
//		scanf("%s", &passworld);
//		//strcmp��a��b��  a�Ƚ�b�ַ�����ͬ����0��
//
//		//if(passworld == "123456")   //����Ƚϵ��������ַ�������ĸ�ĵ�ַ   ��������
//
//		if (strcmp(passworld, "123456") == 0) {
//			printf("��¼�ɹ���\n");
//			breack;
//		}
//		else {
//			printf("�������\n");
//		}
//	}
//	if (i == 3) {
//		printf("����������Σ����˳�����\n");
//	}
//	return 0;
//}

//��������Ϸ
//�Զ�����һ��һ�ٵ������
//������
//	a�����ˣ�����
//  b������ �����ش��ˣ�����С��
//��Ϸ����һֱ�棬�����˳���Ϸ

//
//#include <stdio.h>
//#include <stdlib.h>  //�����
//#include <time.h>
//
//void menu()
//{
//	printf("***********��������Ϸ**************\n");
//	printf("***********  1.play     **********\n");
//	printf("***********  0.exit     **********\n");
//	printf("**********************************\n");
//}
//void game() {
//	/*
//		���������  rand������� 1-32767
//		��
//		�Ա�
//	*/
//	
//
//	// rand()  ÿ���������һ��
//	int radom = rand()%100+1;  //rand()%100 ���λ0-99  +1
//	//printf("%d\n", radom);
//	int gress= 0 ;
//	while (1) {
//		printf("�������\n");
//		scanf("%d", &gress);
//		if (gress>radom) {
//			printf("�´���\n");
//		}
//		else if(gress < radom) {
//			printf("��С��\n");
//
//		}
//		else {
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main(void) {
//		int input = 0;
//		//srand  ���ú������ֵ���
//		srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}