#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>
int test_03(void) {
	//������
		//���������� 
		//------  + - * / %
	float a = (9 / 2);
	printf("%f\n", a);     //4.0000   �������Ҷ�������  ִ���������������ҲΪ����
	printf("%f\n", (9 / 2));   //0.0000
	printf("%f\n", (9 % 2));   //0.0000

		//��λ������
		// ------ << >>		�ƶ����Ƕ�������
	int num = 2;
	//num�Ķ�����λΪ int 4B->32bit    00000000 00000000 00000000 00000010  ������λ 00000100
	int b = num << 1;   //4
	printf("%d\n", b);

	// λ������ 
		//------ & ����λ�룩 |����λ�� ^ ����λ���

	// ��ֵ������
		//------ = += -=  *= /= %= &= ^= |= <<= >>=

	//��Ŀ������
		//------- ��   -   +   &   sizeof���ǲ���������Ҳ�Ǻ����� 
	int arr[10] = { 0 };
	printf(":%d\n", sizeof(arr));  //��������������С����λ�ֽ�    40
	printf(":%d\n", sizeof(arr[0]));  //�������鵥��Ԫ�ش�С����λ�ֽ�    4
	int arrlength = sizeof(arr) / sizeof(arr[0]);   //arrָ�� ��64λϵͳ��Ϊ8B   32λ 4B
	printf(":%d\n", arrlength);  //  10

		//------ ~����һ�����Ķ����ư�λȡ����  
		//��ԭ������������ԭ��Ϊ1�ı�Ϊ0��Ϊ0��Ϊ1��

		//һ�������Ķ����� ��ʾ��3�֣�   -1  ���������λΪ����λ��
		//Դ��	10000000 00000000 00000000 00000001
		//����	11111111 11111111 11111111 11111110    ����λ��������ȡ��
		//����	11111111 11111111 11111111 11111111 	����Ļ����� ��һ  					
		//  ������  Դ�뷴�벹����ͬ  ������ ���м����ֵ
	int num_02 = 0;
	printf("%d\n", ~num_02);   //-1
	/*
		~(~0 << 4) ������
		1. ȡ�� ~0 = 11111111 11111111 11111111 11111111    ��1�ڼ�������ö����Ʊ�����ȫ1
		2. ���� ~0 << 4 = 11111111 11111111 11111111 11110000
		3.ȡ�� ~(~0 << 4) = 00000000 00000000 00000000 00001111
	*/
		
	
		//------  --   ++   *   (����)���Ƽ�ʹ�ã������Ҫ��˵�����õ�������
		
		//------ && ||  !

		// ��Ŀ����

	/// <summary>
	/// ���ű��ʽ  ��
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	int a2 = 0, b2 = 1, c2 = 1;
	int d = (a2 = b2 + 2, c2 = 1 - 4, b2 = c2 + 2);   //�������ң���������  -1
	//�������ʽ�Ľ���������һ�����ʽ�Ľ��
	printf(" d =%d\n", d);
	 

	
		

	return 0;
} 

//�����ⲿȫ�ֱ���       extern ���� �ⲿ�����ķ���
extern int g_val_02;
//�����ⲿȫ�ֺ���

extern int add(int x, int y);
typedef unsigned int u_int;    //��unsigned int ���������������� u_int
int test_04(void){
	/// <summary>
	///  [] ���� .  -> 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	//define  include    Ԥ����
	/// <summary>
	/// �����ؼ���   
	/// auto ���Զ�������  ʡ��
	///
	/// switch csae default continue break return 
	/// 
	/// char  double  float int long short signed   unsigned  void volatile
	/// 
	/// const static  extern struct���ṹ�壩union�������壩enum��ö�٣�  register
	/// 
	///   sizeof typedef ��������������
	/// 
	/// if else goto
	/// 
	/// do while for
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// 
	/// //typedef
	
	
	unsigned int num_04 = 100;
	//��ͬ��
	u_int num_03 = 100;
	
	//static ��̬��
	// 1. static  ���ξֲ�����     
	// 2. static  ����ȫ�ֱ���
	// 3. static  ���κ���
	void demo();  
	int i = 0;
	while (i < 10) {
		 demo();
		i++;
	}

	//ʹ��ȫ�ֱ���
	printf("%d\n", g_val_02);

	//ʹ��ȫ�ֺ���
	int sum = add(5, 6);
	printf("sum = %d", sum);
	return 0;

}
void demo() {
	//�ڴ��Ϊ   ջ�����ֲ����������������� ��������̬�ڴ���䣩  ��̬����ȫ�ֱ�����static���εľ�̬������
				//��������������										�����������

	static int a = 1;  // 2 ~ 11    static ȡ����auto  ��auto�������������٣� static �����٣�
	a++;
	printf("%d\n", a);
}

//define Ԥ����ָ��
 //1. define  ���峣��
//#define MAXS  1000
//int main(void){
//	printf("%d\n", MAXS);
//	return 0;
//}


//2.define �����
//#define ADD(x,y) (x+y)    //���������ţ�4*��2+3������ÿ���ţ�4*2+3��ע������  
//int main(void){
//	printf("%d\n", 4 * ADD(2 , 3));
//	return 0;
//}