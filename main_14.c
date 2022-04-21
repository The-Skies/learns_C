#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>


//debug 排错；

/*
	发现程序错误的存在
	以隔离、消除等方式对错误进行定位
	确定错误产生的原因			（野指针？写错了？逻辑错误？）
	提出纠正错误的解决办法
	对程序错误予以改正，重新测试
*/

//debug 开发版本 （包含调试信息，并且不作任何优化，便于程序员调试程序）
//release 发布版本 （是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用）
// f5 运行到断点     F9  断点  f10  下一步（逐过程：函数调用这个过程）  
// f11下一步（逐语句：一条语句一条语句走，进入函数内部）


//调用堆栈
/*
	函数的调用逻辑； 谁调用谁的  -》堆栈

*/

//条件断点
//断点右击 ；
/*int main(void) {
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < len; i++) {
		arr[i] = i;
	}


	return 0;
}*/


//1！+2！+3！+...+n！
//int main(void) {
//	int i = 0, j = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	// 1! + 2! + 3！
//	// 1    2    6   9
//	for (i = 1; i <= n; i++){
//		int ret = 1;  //计算阶乘，每一次计算都需要从一开始；
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//		 
//	return 0;
//}
//
////越界
////会造成 函数进入死循环；（越界，访问到了i的地址；使得i=0；一直循环）
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
/*  c陷阱和缺陷  -》有说到　　　ｃ和指针；ｃ语言深度解刨

	i和arr 是局部变量
	局部变量存放栈区；

	栈区内存使用的是习惯是：
	先使用高地址；在使用低地址

	数组随着下标的变化，地址是由低到高变化； 
	
	i     i<=12   arr[i] = 0;    1=0了；就重新跑；一直死循环；就不抱错和终止；
	/		vs 空2int
	/		vc6 空0int   gcc 空1int
	9    高
	8
	7
	6
	5
	4
	3
	2
	1	 低	
*/

//easy 版
//void my_copy(char* dest, char* src) {
//	//while(*dest++=*src++){; }   //*dest++=*src++  到'\0';返回0；等于false
//	while(*src!='\0'){
//		*dest=*src;
//		dest++;
//		src++;
//	}
//	*dest = *src;  //拿后面一个的'\0';
//}
//
/////字符串拷贝
//int main(void) {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	// 把arr2拷到arr1
//	//strcpy(arr1, arr2);
//	my_copy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//plus版
#include <assert.h>
//char* my_copy_02(char* dest,const char* src) {
//	//传一个空指针的时候； 上面的就会报错；越界
//	assert(src != NULL);//断言    报错；将错误信息爆出来
//	assert(dest != NULL);//断言    报错；将错误信息爆出来
//
//	char* ret = dest;
//
//	//while(*src++=*dest++){; }   //当值写反了；赋值直接报错且还写的进去；虽然越界了
//	//解决办法；在src加上const  这样使得即使写反了；也不能赋值
//	while(*dest++=*src++){; } 
//
//	return ret;
//}
//
////模拟实现my_strlen(char *str)函数；
////size_t  = unsigned int
//size_t  my_strlen(const char* str) {   //不希望被修改
//	//assert(str != NULL); 等同于 assert(str);   str == NULL 返回 0；
//	assert(str);
//	
//	//int count = 0;
//	//// *str == '\0'  => 0   false
//	//while (*str++) {
//	//	count++;
//	//}
//	//return count;
//
//
//	//指针
//	char* strdemo = str;
//	while (*strdemo++);
//	return (strdemo - str-1);//strdemo - str = 6; 多一个'\0'
//}
//
////模拟实现strcpy函数；.
//int main(void) {
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	// 把arr2拷到arr1
//	//strcpy(arr1, arr2);   //目标空间的起始地址。源空间的起始地址
//
//	//my_copy_02(arr1, arr2);
//
//	//my_copy_02(arr1, NULL);   //传一个空指针的时候；
//
//	printf("%s\n", my_copy_02(arr1, arr2));  //链式访问，函数的结果作为printf函数的参数
//
//
//	//my_strlen
//	printf("%d\n", my_strlen(arr2));  //链式访问，函数的结果作为printf函数的参数
//
//
//
//
//
//
//
//
//	/*
//		p是指针变量
//		*p 是指针指向的内容；
//	***/
//	//const 修饰变量；变量=》常量；不能被修改；但是吧本质还是变量
//	const int num = 10;
//	//num =20 //err
//
//	///1 const在左边
//	/////const修饰指针的时候；
//	/////const 如果是在*的左边；修饰的是*p，表示指针为常量；通过指针取地址修改值不可修改
//	/////		但是 指针变量本身（p） 是可以修改的
//	//const int* p = &num;
//	////*p = 20;  //err
//
//	/////通过p本身来修改；
//	//int n = 100;
//	//p = &n;  ///将地址更改；
//
//	///-2 const在右边
//	/////const修饰指针变量的时候；
//	/////const 如果是在*的右边；修饰的是p，表示指针变量为常量，通过指针变量修改地址不可修改
//	/////		但是 指针（*p） 是可以修改的
//	// int* const p = &num;
//	//*p = 20;  //指针地址可以修改
//
//	/////通过p本身来修改；
//	//int n = 100;
//	////p = &n;  //err  指针变量不可修改
//
//	///-3 const在两边
//	///const修饰指针变量的时候；
//	///const 如果是在*的量边；修饰的是p，表示指针变量为常量，指针（*p）为常量
//	///		 通过两个都不可以修改任何值；
//	///		
//	const int* const p = &num;
//	//*p = 20;  //err 指针地址不可以修改
//
//	///通过p本身来修改；
//	int n = 100;
//	//p = &n;  //err  指针变量不可修改
//
//	//二级指针也一样
//	//const int** ppa = &p;
//	//**ppa = 20;//err
//
//	printf("num=%d\n", *p);
//
//	return 0;
//}

