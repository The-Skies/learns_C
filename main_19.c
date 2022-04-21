#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>
#include <stdio.h>


//int i;  //全局变量不初始化，默认为0；
//int main(void) {
//	i--;  //-1
//	//sizeof()  返回的是无符号整形 unsigned int+
//	//i是有符号整形  会先转换为无符号整型 在比较
//	//-1 全部为1 解读为无符号整数，就会使一个超级大的正整数；
//	if (i > sizeof(i)) { //-1>4
//		printf(">\n");
//	}else
//		printf("<\n");
//	return 0;
//}

///题目
//计算求和
//求Sn=a+aa+aaa+aaaa+aaaaa 的前五项之和，其中a是一个数字
//2+22+222+2222+22222 = 
//int ret=0;
//int SumNum = 0;
//int sum(int num,int count) {
//	if (!count) {
//		return SumNum;
//	}
//	else {
//		count--;
//		ret = ret * 10 + num;
//		SumNum += ret;
//		return sum(num,count); 
//	}
//}
//
//int main(void) {
//	int num=0, count=0;
//	scanf("%d %d", &num,&count);
//	int i = 0;
//	int sum_R = 0;
//	int ret = 0;
//	for (i = 0; i < count; i++) {
//		// 2 + 22 + 222
//		ret = ret * 10 + num;
//		//累加
//		sum_R = ret + sum_R;
//	}
//
//	//printf("%d 的前 %d 项之和为 %d", num, count, sum_R);
//	//递归
//	printf("%d 的前 %d 项之和为 %d", num, count, sum(num, count));
//}

///题目
//写一个打印arr数组内容的，不是用数组下标，使用指针
//arr是一个整形一维数组
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,4,5,5,6,8,9,5 };
//	int* p = arr;
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int* pEnd = arr + length - 1;
//	int i = 0;
//	
//	/*for (i = 0; i < lenth; i++) {
//		printf("%d ", *(p + i));
//	}*/
//	while (p <= pEnd) {
//		printf("%d ", *(p + i));
//		p++;
//	}
//	return 0;
//}

///题目
//求出0-100000 之间的所有“水仙花数”并输出；
//“水仙花数” 是指一个n位数；各个位数字的n次方正好等会数的本身；
//153 = 1^3+5^3+3^3 
//#include <math.h>
//int main(void) {
//	int i = 0;
//	for (i = 0; i < 100000; i++) {
//		//拿到当前数字的位数； 用作水仙花数的次方数
//		int temp = i;
//		int n = 0;
//		while (temp) {
//			n++;
//			temp /= 10;
//		}
//		//获取每位上的数字；并且计算对应次方数，累加起来；
//		temp = i;
//		int sum = 0;
//		while (temp) {
//			sum+=pow(temp % 10,n);
//			temp /= 10;
//		}
//		//判断计算出来的值；
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

///输出什么
//int main(void) {
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3; //9 += 3 => 12  数组中9的元素变为12 
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3)); //6 12
//	return 0;
//}

/*
* struct 是结构体类型的关键字
 struct student{    //用户定义结构体类型
	 int num；			//结构体成员
	 char name[20];
	 float score;
 }stu;		//是用户定义的结构体变量名；

**/
//struct stu {
//	int id_num;
//	char name[20];
//	int age;
//};
//void fun(struct stu* p) {
//	printf("%s", (*p).name);
//}
//
//int main(void) {
//	struct stu students[3] = {
//		{9801,"zhang",20},
//		{9802,"xiang",22},
//		{9803,"reng",23},
//	};
//	fun(students + 1);
//	return 0;
//}

//二级指针也是指针，用来存放以及指针的；大小和以及指针相同（32 4 ；64 8）；
//整形引用访问4个字节；

//struct S {
//	int a;
//	int	b;
//};
//
//int main(void) {
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	return 0;
//
//	/**
//	A:a.a  ok
//	B:*p.a  no   .的优先级高；
//	C:p->a
//	D:(*p).a
//	**/
//}

///题目
//字符串逆序
//#include <assert.h>
//#include <string.h>
//void reverce(char* pa, int sz) {
//	assert(pa);  //断言   是空的；
//
//	char* left = pa;
//	//char* right = ((pa + sz) - 2);  // -1 是‘/0’  所以没有
//	int len = strlen(pa);
//	char* right = pa+len - 1;
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main(void) {
//	char arr[] = "hellowolrd!";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverce(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}

///题目
//用*打印菱形
//int main(void) {
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++) {
//	int j = 0;
//		for (j = 0; j<line-1-i;j++) //需要理清楚，打印的上限；范围；规律
//		{
//			printf(" ");
//		}
//		//"*"
//		for (j = 0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line-1; i++) {
//		int j = 0;
//		for (j = 0; j <= i; j++) //需要理清楚，打印的上限；范围；规律
//		{
//			printf(" ");
//		}
//		//"*"
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	
//	}
//
//	return 0;
//}

///题目
//喝汽水： 1瓶汽水1元；2个空瓶可以换一瓶汽水，给二十元；可以喝多少汽水；
//20元			 20瓶	
//	  20空瓶  =》 10瓶   
//	  10空瓶  =》 5瓶		
//	  5空瓶   =》 2瓶    多一个空瓶  %2
//	  3空瓶   =》 1瓶
//    1空瓶
//	 空=空/2+空%2 喝的= 空/2     

//int main(void) {
//	int money = 0;
//	scanf("%d", &money);
//	// 20元 20瓶汽水
//	int think = money;
//	int empty = money;
//	while (empty >= 2) {
//		think += empty/2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d瓶", think);
//
//	//方法二  2*n-1
//	if (money >0) {
//		think = 2*money-1;
//	}
//	printf("%d瓶", think);
//
//	return 0;
//}

//F5  开始调试不执行；
//F10 逐过程调试，遇到函数不进入函数
//F11 是逐语句调式 可以观察每个细节
//F9  设置断点，和取消断点

//Debug版本
//调试版本，程序太松hi找bug的版本
// 包含调试信息；不做优化
//Release版本
//发布版本，测试员测试就是Release版本
// 不可以调试，会有优化；


//p值不可以修改，p指向的变量值可以修改  char* const p

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
//栈  高地址  -》  低地址 
//数组 随着下标的增长    地址是由低到高变化的
//因此下标再增长的过程中就有可能越界访问到i = 0 ；造成死循环

/*
	i     i<=12   arr[i] = 0;    1=0了；就重新跑；一直死循环；就不抱错和终止；
	/		vs 空2int
	/		vc6 空0int   gcc 空1int
	9    高（下标）
	8
	7
	6
	5
	4
	3
	2
	1	 低
*/

///题目
// 调整奇数偶数的顺序
//调整数组，使得奇数全部都位于偶数前面；
//void todo(int* arr,int len) {
//	int* left = arr;
//	int* right = arr + len - 1;
//	while (left < right) {
//		//前向后 找偶数
//		while((left < right) && (*left % 2 == 1)) {
//			left++;
//		}
//		//后向前 找奇数
//		while((left < right) && (*right % 2 == 0)) {
//			right--;
//		}
//		if (left < right) {
//			int temp = *left;
//			*left = *right;
//			*right = temp;
//		}
//
//	}
//
//}
//void print(int* arr,int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", *arr++);
//	}
//}
//
//int main(void) {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	todo(arr,len); 
//	print(arr,len);
//	return 0;
//}


///数据存储作业

//int main(void) {
//	unsigned char a = 200;  //char 8b
//	//1100 1000
//	unsigned char b = 100;
//	//0110 0100
//	unsigned char c = 0;
//	c = a + b;   //相加先整型提升
//	//0000000000000000000000001100 1000
//	//0000000000000000000000000110 0100
//	//0000000000000000000000010010 1100   
//  //=》0010 1100   
//	printf("%d   %d", a + b, c); //%d 打印有符号十进制数
//	//					300	 44	
//	return 0;
//}


//int main(void) {
//	unsigned int a = 0x1234;   
//	//大端 （低） 00 00 12 34 （高）
//	//小端 （低） 34 12 00 00 （高）
//	unsigned char b = *(unsigned char*)&a;
//	//unsigned int =》 unsigned char = 00
//	//unsigned int =》 unsigned char = 34
//
//	return 0;
//}

//#include <string.h>
//int main(void) {
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10000; i++) {
//		//char最高位255  int i范围大；
//		a[i] = -1 - i;
//	}
//
//	printf("%d", strlen(a));  //255
//	return 0;
//}

//大小端字节序指的是数据在电脑上存储的字节为单位的顺序
//高字节序（在前：低）   大端
//低字节序（在前：低）   小端

///题目
/*  杨辉三角
					1
				   1 1	
				  1 2 1
				 1 3 3 1
				1 4 6 4 1
			   1 5 10 10 5 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
**/
//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (i == j) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >=1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		int x = 0;
//		for (x = 10; x > i;x--) {
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++) {
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


///题目
//猜凶手
/**
 A：不是我
 B：是c；
 c：是D
 D：c胡说；
 已知3人说了真话，一人说假话；
***/
//int main(void) {
//	//将每一个犯人带入，假设为犯人；来查看每个条件的真假；
//	//假设凶手为 A B C D
///*  A：不是我    0 1 1 1  
//	B：是c；		0 0	1 0 
//	c：是D		0 0 0 1
//	D：c胡说；	1 1	1 0
//	已知3人说了真话，一人说假话；
//
//	再转换为代码：
//*/
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++) {
//		if ((killer != 'A') + 
//			(killer == 'C') + 
//			(killer == 'D') + 
//			(killer != 'D') == 3) {
//			printf("killer=%c", killer);
//		}
//	}
//	return 0;
//}


//思维能力：
//智力题；发散的题目；
/*
	有一根香，材质不均匀 一根一小时
	两根请确认一个十五分钟的时间段；
*/

//答：第一根两端点燃，的同时间也低然第二根；第一根完了刚好半小时；
// 与此同时将第二根的另一端页点燃；第二根剩余部分刚还十五分钟

/*
	一个人住三十楼

	下雨天或者电梯有人的时候坐电梯回家；
	其他时间到十五楼，走楼梯回家；

·	为什么：？？？
	

	答：侏儒


	36匹马 6个跑道 没有计时器；多少会赛马才能分清一二三名：

	牛客网app有题目做！；
*/

/// 题目
/*
 猜名次：

 A：B第二，我第三；
 B：我第二,E第四；
 C：我第一，D第二；
 D：C最后，我第三；
 E：我第四，A第一；
 比赛结束后。每位选手都说对了一半；


*/
