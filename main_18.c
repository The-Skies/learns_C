#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>

///ָ����Ǳ�����������ŵ�ַ
/// ָ�루32λϵͳ 4���ֽڣ���64λϵͳ 8���ֽڣ�
///ָ�����;������Ĳ�����int һ�� 4���ֽڣ�

///�ַ�ָ��
//int main(void) {
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//char* ps = "hello wrold!";
//	//printf("%c\n", *ps);   //ps��ŵ���ʲô
//	//printf("%s\n", ps);   //ps��ŵ���ʲô
//
//	//char arr[] = "hello world!!";
//	//printf("%c\n", arr);   //���ʲô
//	//printf("%s\n", arr);   //���ʲô
//
//	///������
//	//�����ӡ��ʲô
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";  //�����ַ���ָ�� ��*str3 �޸����ݣ�  str3�޸ĵ�ַ     
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

///ָ������
//int main(void) {
//	///���� - �����д�ŵ���ָ�루��ַ��
//	int* arr[3] = { 0 };
//	
//	return 0;
//}

///����ָ��  ��һ��ָ��
//int main(void) {
//	int arr[] = { 1,2,3,4 };
//
//	// (*parr)[10]   ()>[]>*
//	// ��û������ ���Ƚ��[] ��Ϊ parr[] ��� int*
//	// ������     ���Ƚ�� *parr ָ�� ָ��int []   ����ͬ��->�� int *p   ָ��*p ָ��int��������
//
//	int(*parr)[10] = &arr; //����ָ��  ����һ��ָ�����
//	// &arr ����ĵ�ַ
//	// arr   ��arr[0]�ĵ�ַ
//
//	double* d[5];  //ָ������  �����ָ��
//
//	double* (*pd) = &d;  // &d->*pa   d������  ->(*pa)[5] double*���� double* (*pa)[5]
//
//
//
//	///&������ �� ������  ������ 
//
//	//��ַ����ͬ  ����  ���岻ͬ
//	int* pa1 = arr;
//	int(* pa2)[10] = &arr; 
//	printf("arr=%p *pa=%p\n", arr,pa1);   
//	printf("arr=%p\n", pa1 +1);  //��ַ��һ  ��һ������
//
//	printf("&arr=%p (*pa)[10] = %p\n", &arr,pa2);
//	printf("&arr=%p\n",pa2+1);   //��ַ��һ   ��һ������
//
//	///��������������Ԫ�صĵ�ַ
//	///��������������
//	/// 1.sizeof(������) -- ��������ʾ�������飬�����ʹ���������С����λ���ֽ�
//	/// 2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ��
//	return 0;
//}

///����ָ��Ӧ��  - ��ά��������  -�����β�
//int main(void) {
//	int arr[] = { 1,2,3,4,56,7,8,9 };
//	int(*pa)[] = &arr;
//	int i = 0;
//	for (i = 0; i < 8; i++) {
//		//(*pa) => arr => ��Ԫ�ص�ַ
//		printf("%d %p\n", *((*pa) + i), (*pa) + i);
//	}
//
//	return 0; 
//}


//void print1(int (* p)[5], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", *(*(p+i)+j));
//			//*��p + i��    ������ {1,2,3,4,5}��һ��һ������
//			//��p��+j         
//		}
//		printf("\n");
//	}
//}
//
//void printf() {
//
//}
//int main(void) {
//	int arr[3][5] = { {1,2,3,4,5},{3,4,5,6,7} ,{4,5,6,7,8} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5); //arr  {1,2,3,4,5} 
//	return 0;
//}
 
///����ָ�� �� ָ������
/*  ��������		ʲôָ������		�����ݵ�����
	int								arr[5]        //�������� 
	int*							parr[5]       //����ָ�������  
	int         (*parr2)			[5]			  //����ָ�� 
				ָ��ָ�򳤶�Ϊ5�����飬����ÿ��Ԫ������Ϊint

	int         (*parr3[10])		[5]       
				ָ�����飻  
				�����ڵ�Ԫ�ش��ָ��   ��ָ��ָ��Ԫ�س���Ϊ5����������Ϊint������

	����ָ�� - (*parr2) [5]  -��   ����һ��ָ�룬ר��ָ������
	ָ������ -  *parr3  [10] -��   ��һ�����飻����ȫ��ָ�룻
**/



///������� �� ָ�������  ����Ĳ����Ǹ����У�
//һά
//void test(int arr[]) {}
//void test(int arr[10]) {}   //���Բ���д10  
//							//��Ϊ��Ҳ����ȥ����ʮ��Ԫ�ص����飻��������λ��ַ
//void test(int *arr) {}
//void test2(int *arr[20]) {}
//void test2(int **arr){}    //�������Ԫ�ظպ�
//int main(void) {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr); 
//	test2(arr2);
//	return 0;
//
// }

//��ά
//void test(int arr[3][5])//ok��
//{}
////void test(int arr[][])//
////{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//
//{}
//void test(int* arr[5])//
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
