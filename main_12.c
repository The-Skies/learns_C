#include <stdio.h>

//内存单元编号 ==  内存单元地址 == 指针
//指针是什么  通过它 可以找到以它为地址的内存单元
//int main(void) {
//	int a = 10; ///四个字节
//	int* pa = &a;  /// 拿到四个字节中首字节的地址
//	*pa = 20;
//
//	//存放地址的变量    指针变量
//
//	//小的 内存单元多大？     一个字节
//
//	//指针   32位系统中  4个字节   
//	//		 64位系统中  8个字节  	
//
//
//	//指针类型得意义：
//	//1.指针类型决定了，指针引用的权限有多大
//	int a = 0x11223344;   //int类型  有权限访问四个字节
//	char* pc = &a;   //char  有权限访问 一个字节； 
//	*pc = 0;
//
//	//2.指针类型决定了，指针走一步；能走多远（步长）
//	int  arr[10] = { 0 };
//	int* p = arr;    //都会存储地址  数组元素的第一个地址
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);   //按  int 四个字节  一动
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);  //按 char  一个字节 一动
//	return 0;
//}



//野指针
////指针指向的位置是随机的，且不可知 的
//int main(void) {
//	//1.初始化
//	//int* p =NULL；
//
//	int* p;      //p是一个局部变量的指针；局部变量补初始化，默认随机值
//	// *p =20;   //这时候给随机值放东西；   叫做非法访问内存
//
//
//	//2.越界访问
//	// 栈内存中  先使用地址高		   在用低
//	//			数组对这下标的增长   地址由低到高变化；
//	//int arr[10] = { 0 };
//	//int i = 0; 
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	//会运行十一次；  十一次的时候就会越界
//	//	*p = i;
//	//	p++;
//	//}
//	return 0;
//}
////3.指向空间被释放；
////p指针 包喊得地址指向的内存变量；
//// 如果还给系统了；那么他就不可以访问；
////否则.
//int* test() {
//	int a = 10;
//	return &a;
//}
//
//int main(void) {
//	int* p = test();  //把返回的a的地址赋予指针变量p
//	*p = 20;  //  当p去赋值的时候； 这时候函数变量a已经销毁，回收；  出现找不到了
//
//
//	//一个指针指向空间被释放了，即使的置NULL
//	//指针 不知道指向哪里；置为NULL；
//	//不知道哪里会使用 在前面进行判断 if（pointer = NULL）；确保不会越权文件写入；
//	return 0;
//}


//指针的运算 （两个指针指向同一块空间）
//#define N_VAL  5
//int main(void) {
//	// 地址由低到高变化
//	float vals[N_VAL];
//	float* vp;
//	//走完前面五个；不包含第六的一个
//	//for (vp = &vals[0]; vp < &vals[N_VAL];) {  //指针比较大小   称为 关系运算
//	//	*vp++ = 0;  
//	//}
//
//	//规定不允许这么来写
//	//for (vp = &vals[N_VAL-1]; vp > &vals[0];vp--) {  //指针比较大小   称为 关系运算
//	//	*vp = 0;  
//	//}
//}

//指针++
//int main(void) {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ap = arr;
//	int* apend = arr + 9;//第一个加9，指向最后一位
//
//	while (ap <= apend) {
//		printf("%d\n", *ap);
//		ap++;
//	}
//	return 0;
//}

//指针-- （两个指针指向同一块空间）
//int main(void) {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[9] - &arr[0]);   //指针减去指针，得到的是两个指针元素的一个个数
//	
//	return 0;
//}



//int my_strlen_01(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//}
//int my_strlen_02(char* str) {
//	char *start =str;
//	while (*str != '\0') {
//		str++;
//	}
//	return str - start;
//}
//int my_strlen_recurren(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen_recurren(++str);
//	}
//}
//
////指针运用  
//int main(void) {
//	int len = my_strlen_02("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

////指针和数组
//int main(void) {
//	//数组名代表数组首元素地址
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr[0]);
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//指针加减，为指针步长的地址移动；
//		//p+i = arr[i]
//		printf("5p < = > %p\n", arr[i], p + i);
//		*(p + i) = i+1;
//	}
//
//	// arr[2] --》 *（arr+2） --》*（2+arr） == *（p+2）
//	// 会变为指针的形式，进行处理‘2[arr]与2[arr]’进行了类似加法交换律！
//	printf("%d\n",2[arr]);  //*（2+arr）
//	printf("%d\n", arr[2]); //*（arr+2）
//	printf("%d\n", p[2]);   //  *（p+2）
//	printf("%d\n",*(p+2));  //  *（p+2）
//	return 0;
//}

//二级指针；
//int main(void) {
//	int a = 10;
//	int* pa = &a; //指针 = a的地址
//
//	int** ppa = &pa;//二级指针（int* 指针类型 *ppa指针变量） =  指针地址
//	//ppa  = &pa
//	//**ppa = 10
//	//*pa = 10
//	// a = 10
//	return 0;
//}

//指针数组；
//int main(void) {
//	int a[5]={0};//整形素组
//	int* arr[5];  // 整型指针数组
//
//	return 0;
//}