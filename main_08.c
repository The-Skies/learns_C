#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>

void print_arr(char* arr) {
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
}
////�ݹ飬�����Լ������Լ���
//
////��Ŀ
////�����޷�������ֵ������˳���ӡ���õ�ÿһλ�� ����1234   ��� 1 2 3 4
//
//// 1234 %10 = 4
//// 1234/10 = 123  123%10 = 3
////...

////�ݹ�
////print(1234)
////print(123)+4
////print(12)+3
////print(1)+2

//// �ڴ�
	//ջ
		///*�ֲ����� ������������ʱ���� ��*/
	//��	
		///*��̬�ڴ���� malloc/free\calloc\realloc*/
	//��̬��
		///*ȫ�ֱ��� ��̬����*/

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



////��д���������ַ������ȣ�����ʹ����ʱ������
//int main(void) {
//	int get_len(char* str);
//	char arr[] = "hello";
//
//	printf("%d\n", get_len(arr));
//}
//int get_len(char* str)
//{
//	/*int count = 0;
//	while(*str != '\0')  //�������� 
//	{
//		count++; //���ز���
//		str++;   //ѭ������
//	}*/
//	if (*str == '\0') {
//		return 0;
//	}else{
//		return 1 + get_len(str + 1);
//	}
//}


////��n�Ľ׳ˣ� 
//int main(void) {
//	int fac(int n);
//	int n = 0;
//	printf("n?");
//	scanf("%d", &n);
//	/*int temp = 1;
//	for (int i = 1; i <= n; i++) {
//		temp = temp * i;
//	}
//	printf("n�Ľ׳�Ϊ��%d",temp);*/
//
//	//�ݹ�
//
//	printf("n�Ľ׳�Ϊ��%d", fac(n));
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

////��n��fei bo la qie����
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
//	printf("��n:=%d���Ʋ���qie����:=%d",n, feibo_02(n));
//
//
//	//�ݹ�
//	//printf("��n��%d���Ʋ���qie����:=%d", n, feibo(n));
//	return 0;
//}
//int feibo(int n)
//{
//	if (n < 2) {
//		return 1;
//	}
//	else {
//		////  ������ظ����㣻  Ч�ʵ�   n=40   3�ᱻ������ʮ�����
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

//// . ��ŵ������
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
//	printf("%c --�ƶ���--> %c  ===>��%d���ƶ�\n", x, y, count);
//}
//
//int main(void) {
//	//��ŵ������
//	/**
//	 * ��a��n-1���̽���c�Ƶ�b�ϣ�
//	 * ��a�����µ�һ�����Ƶ�c��   //��������
//	 * ��b��n-1���̽���a�Ƶ�c
//	 * */
//	int num;
//	printf("������Բ������:\n");
//	scanf("%d", &num);
//	hanio(num, 'a', 'b', 'c');
//	return 0;
//}


//// ������̨������  
////һֻ����һ�ο������� 1 ��̨�ף�Ҳ��������2 ���������������һ��n ����̨���ܹ��ж�����������
////f(n)=f(n-1)+f(n-2)  //�ͽ׳�һ��  �����ۼ�
//int main(void) {
//	int fn_jumpCount(int n);
//	int fn_jumpCount_02(int n);
//	printf("n?��");
//	int n = 0;
//	scanf("%d", &n);
//	printf("n=%d��̨����Ծ%d��", n, fn_jumpCount(n));
//	printf("n=%d��̨����Ծ%d��",n, fn_jumpCount_02(n));
//	return 0;
//}
////�����ˣ������ˣ�
//int fn_jumpCount(int n) {
//	if (n <= 2) { 
//		return n;   //nΪ�����ؼ�
//	}
//	else {
//		return fn_jumpCount(n - 2) + fn_jumpCount(n - 1);
//	}
//}
//
////��ͨ
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


//һ��һ��ֵ֮�������������ֶ��ٸ�9
//
//int main(void) {
//	int count = 0;
//	for(int i=0;i<100;i++){
//		// i%10 == 9   �жϸ�λΪ9
//		// /i/10 == 9   �ж�ʮλΪ9
//		if (i % 10 == 9||i/10==9) {
//			count++;
//		}
//	}
//	printf("һ��������%d��9��", count);
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

//ʮ���������ֵ����Сֵ��
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
//		//sum(��)
//		sum += b[i];
//	}
//	return Max;
//}

// ��Ŀ��
// 1 2 3 4 ����ɻ�����ͬ���Ҳ��ظ�������λ����
//int main(void) {
//	int i, j, k, n=0, count = 0;
//	//ѭ���������
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
//				//������ͬ
//				if (i != j && j != k && i != k)
//				{
//					count++;
//					printf("%d%d%d---%d\n", i, j, k, count);
//				}
//			}
//		}
//	}
//}

//����return������������������ԣ�����ȥһ�����飬�޸ģ���Ϊ��������Ԫ����Ҳ�ᱻ�޸�====ָ��ͬ����


//exal((v1,v2),(v3,v4),v5,v6)

// ���ű��ʽ �������Ҽ��㣻 �������ʽ���������һ�����ʽ���  v2   4��������v2��v4��v5��v6��


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
//��Ŀ
//�ַ�������
//int main(void){
//	void reverse_string(char* str);
//	char arr[] = "asdfggghh";
//	printf("%s\n", arr);
//	reverse_string(arr);    //�õ���һԪ�صĵĵ�ַ
//	printf("%s", arr);
//	return 0;
//}
//�Ƶݹ�
//void reverse_string(char* str) {
//	int my_strlen(char* str);
//	int left = 0;
//	int right = my_strlen(str)-1;   //�õ��ַ�������
//	while(left<right){
//		/*char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;*/
//
//		//ָ��
//		int temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//}
//�ݹ�
//
//void reverse_string(char* str) {
//	int my_strlen(char* str);
//	int len = my_strlen(str);  
//	char temp = *str;//ȡ����һλ  �洢
//	*str = *(str + len - 1);   //�����һλ�ŵ���һλ��
//	*(str + len - 1) = '\0';   //ĩβ��ӽ����ַ�   ���㴫���¸������У�������һ���ϸ���ַ���
//	if (my_strlen(str+1)>1) {	// ʣ���ַ����ȴ���1��   С��һû�б�Ҫ����
//		reverse_string(str + 1);   //�ӵڶ����ַ���ʼ����
//	}
//	*(str + len - 1) = temp;	// ��a�鵽f�ó���ʼλ�ã� Ҳ���Ǳ��޸�Ϊ'\0' ��λ��
//}
//int my_strlen(char* str) {  //�ַ����� 
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


////���һ����ÿλ�ϵĺ�  1923  =��1+9+2+3=15
//int main(void) {
//	int DigitSum(int num);
//	unsigned int num = 0;
//	printf("����n\n");
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
//	///�ݹ�
//	if (num < 9) {
//		return num;
//	}
//	else {
//		return DigitSum(num / 10) + num % 10;
//	}
//}

//��дn��k�η����ݹ�ʵ��
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
