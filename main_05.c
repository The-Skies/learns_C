#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <windows.h>
#include <string.h>
/*
	计算n得阶乘
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
	计算1！+2！+3！....10！
*/
//int main(void) {
//	int result = 0;
//	for (int i = 1; i <= 3;i++) {
//		int temp = 1;   //每个阶乘计算  要重新清零
//		for (int j = 1; j <= i;j++) {
//			temp *= j;
//		}
//		result += temp;
//	}
//	printf("result = %d\n", result);
//}

//优化
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

//查找数组中的数字是否包含，返回其下标
//int  main(void) {
//	int bin_search(int arr[], int left, int right, int find);
//	int arr[] = { 1,2,3,4,4,6,6,7,8,45 };  //值适用于 冒泡了的数组
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;   //数组整体长度 / 其中一个长度 -1 => 得到数组元素个数
//	int find = 6;
//	// 函数 （int arr[],int left,int right,int find）
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;   //每次循环都需要中间值
//		if (arr[mid] > find)   //比较中间的值  比 查找的值大  ；mid 有中间值-1  mid索引向left减少一半；
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < find)// 比查找值小；  mid 有中间值+1  索引向right移动
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
//	// 循环结束还没有； return -1；
//	
//	//bin_search()；
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
输出
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
//		//Sleep(1000);   // 睡眠1秒
//		//system("cls");    //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0; 
//}


/*
	输出正确字符串 123456
*/
//int main(void) {
//	int i = 0;
//	char passworld[20];
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码：\n");
//		scanf("%s", &passworld);
//		//strcmp（a，b）  a比较b字符；相同返回0；
//
//		//if(passworld == "123456")   //这个比较的是两个字符串首字母的地址   并非内容
//
//		if (strcmp(passworld, "123456") == 0) {
//			printf("登录成功！\n");
//			breack;
//		}
//		else {
//			printf("密码错误！\n");
//		}
//	}
//	if (i == 3) {
//		printf("密码错误三次！请退出！！\n");
//	}
//	return 0;
//}

//猜数字游戏
//自动生成一道一百的随机数
//猜数组
//	a。对了，结束
//  b。不对 ，返回大了，还是小了
//游戏可以一直玩，除非退出游戏

//
//#include <stdio.h>
//#include <stdlib.h>  //随机数
//#include <time.h>
//
//void menu()
//{
//	printf("***********猜数字游戏**************\n");
//	printf("***********  1.play     **********\n");
//	printf("***********  0.exit     **********\n");
//	printf("**********************************\n");
//}
//void game() {
//	/*
//		生成随机数  rand随机返回 1-32767
//		猜
//		对比
//	*/
//	
//
//	// rand()  每次随机数子一样
//	int radom = rand()%100+1;  //rand()%100 结果位0-99  +1
//	//printf("%d\n", radom);
//	int gress= 0 ;
//	while (1) {
//		printf("请猜数子\n");
//		scanf("%d", &gress);
//		if (gress>radom) {
//			printf("猜大了\n");
//		}
//		else if(gress < radom) {
//			printf("猜小了\n");
//
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main(void) {
//		int input = 0;
//		//srand  设置函数随机值起点
//		srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default:
//			printf("请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}