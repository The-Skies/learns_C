#include <stdio.h>

//���ϣ�
//���飺һ����ͬ���͵�Ԫ�صļ��ϣ� ��ͳһ��

//�ṹ��
//Ҳ��һЩֵ�ü��ϣ�����ֵ�����Ͳ�ͬ����������
//
//struct Address
//{
//	char name[20];
//	char massage[100];
//	char id[12];
//}A1 = {" "," ����",0};  //�������ͬʱ��ʼ��
//struct Stu
//{
//	struct Address Addres;
//	char name[20];
//	int age;
//	char id[12];
//}s1;  //�������͵�ͬʱ�������s1,s2�� 
//void print(struct Stu t) {  // һ���ṹ���ʼ���ռ�
//	printf("%s\n %s\n %d\n %s\n %d\n %d\n", t.Addres.name, t.Addres.massage, t.Addres.id,
//		t.name, t.age, t.id);
//}
//void print2(struct Stu* t) { //һ����ַ��4���ֽ�
//	printf("%s\n %s\n %d\n %s\n %d\n %d\n", t->Addres.name, t->Addres.massage, t->Addres.id,
//		t->name, t->age, t->id);
//}
//
//int main(void) {
//	struct Stu s_01 = {{"xiaowang","//�ṹ��//Ҳ��һЩֵ�ü��ϣ�����ֵ�����Ͳ�ͬ����������",123465}, 
//						"xiaowang",22,123465};
//
//	print(s_01);
//
//	//printf("%s\n", s_01.Addres.massage);
//	//printf("%d\n",s_01.age);
//
//	struct Stu* ps = &s_01;
//	//ʹ���ڴ��С  4�ֽ�
//	print2(ps);
//
//	//printf("%s\n", (*ps).Addres.massage);
//	//printf("%d\n", (*ps).age);
//
//	////->  ָ��
//	//printf("%s\n", (ps)->Addres.massage);
//	//printf("%d\n", (ps)->age);
//	return 0;
//}
//

//ջ �Ƚ����������ȳ���
// ÿһ���������ã��������ڴ��ջ���Ͽ���һ��ռ䣻
// add��a��b��   ���������ȡֵ��
//  �����ڵ�ջ�������������֮�󣻾ͻ���ʧ��
