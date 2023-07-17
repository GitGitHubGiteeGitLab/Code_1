#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//main - 固定的名字
//主函数 是程序的入口，写的C语言代码都是从main函数的第一行开始执行的
//main函数是必须有的，但是有且仅有一个



//全局变量：在{}外边定义的变量就是全局变量
//局部变量：就是{}内部定义的变量就是局部变量
//当前局部和全局变量在一个地方都可以使用的时候，局部优先
//
//
//int a = 100;//全局变量
//
//int main()
//{
//	int a = 1000;//局部变量
//	{
//		int b = 0;
//		printf("%d\n", b);
//	}
//	printf("%d\n", a);
//
//	return 0;
//}
//

//写一个代码
//完成2个整数的相加，并输出结果
//printf 是输出函数
//scanf 是输入函数

int main()
{
	int a = 0;
	int b = 0;
	int s = 0;

	//输入2个值
	scanf("%d %d", &a, &b);//3 5
	//计算
	s = a + b;
	//输出
	printf("%d\n", s);

	return 0;
}