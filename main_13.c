#include <stdio.h>

//集合：
//数组：一组相同类型的元素的集合； （统一）

//结构体
//也是一些值得集合，但是值的类型不同；（多样）
//
//struct Address
//{
//	char name[20];
//	char massage[100];
//	char id[12];
//}A1 = {" "," 地球",0};  //定义变量同时初始化
//struct Stu
//{
//	struct Address Addres;
//	char name[20];
//	int age;
//	char id[12];
//}s1;  //声明类型的同时定义变量s1,s2； 
//void print(struct Stu t) {  // 一个结构体初始化空间
//	printf("%s\n %s\n %d\n %s\n %d\n %d\n", t.Addres.name, t.Addres.massage, t.Addres.id,
//		t.name, t.age, t.id);
//}
//void print2(struct Stu* t) { //一个地址；4个字节
//	printf("%s\n %s\n %d\n %s\n %d\n %d\n", t->Addres.name, t->Addres.massage, t->Addres.id,
//		t->name, t->age, t->id);
//}
//
//int main(void) {
//	struct Stu s_01 = {{"xiaowang","//结构体//也是一些值得集合，但是值的类型不同；（多样）",123465}, 
//						"xiaowang",22,123465};
//
//	print(s_01);
//
//	//printf("%s\n", s_01.Addres.massage);
//	//printf("%d\n",s_01.age);
//
//	struct Stu* ps = &s_01;
//	//使用内存更小  4字节
//	print2(ps);
//
//	//printf("%s\n", (*ps).Addres.massage);
//	//printf("%d\n", (*ps).age);
//
//	////->  指向
//	//printf("%s\n", (ps)->Addres.massage);
//	//printf("%d\n", (ps)->age);
//	return 0;
//}
//

//栈 先进后出，后进先出；
// 每一个函数调用，都会在内存的栈区上开辟一块空间；
// add（a，b）   从右向左读取值；
//  函数内的栈区；在其调用完之后；就会消失；
