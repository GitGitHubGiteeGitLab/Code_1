#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//枚举常量
//枚举 - 一一列举
//三原色：红色 绿色 蓝色
//性别：男、女、保密
//星期：1 2 3 4 5 6 7
//

//自定义的类型
//enum Color
//{
//	//枚举常量
//	RED,   //0
//	GREEN, //1
//	BLUE   //2
//};
//
//int main()
//{
//	enum Color c = RED;
//
//	return 0;
//}

//enum是枚举的关键字

//enum Sex
//{
//	MALE=7,
//	FEMALE,
//	SECRET
//};


//int main()
//{
//	printf("abc\ndef");
//	return 0;
//}
//%d - 十进制的形式打印整型
//%s - 打印字符串
//

//int main()
//{
//	printf("c:\\code\\test111\\tets.c");
//
//	return 0;
//}

//int main()
//{
//	printf("(are you ok??)");//(are you ok]
//	printf("(are you ok\?\?)");
//	//??) -- ]
//	//??( -- [
//	//三字母词
//	return 0;
//}

//%d
//%s
//%c - 打印字符
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 'b');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("abc\bdef\n"); 
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\130');
//	printf("%c\n", '\151');
//	printf("%c\n", '\x61');
//
//	return 0;
//}
//#include <string.h>
//
//int main()
//{
//	//printf("%d\n", strlen("abc"));//
//	printf("%d\n", strlen("c:\test\111\test.c"));//13
//	printf("%d\n", strlen("c:\test\181\test.c"));
//	return 0;
//}
//


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你打算好好学习吗？(1/0):");
//	scanf("%d", &input);//1 / 0 
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}
//


int main()
{
	int line = 0;

	while (line<30000)
	{
		if (line == 1000)
		{
			printf("热恋了\n");
			break;
		}
		printf("敲代码:%d\n", line);
		line++;
	}
	//
	if(line == 30000)
		printf("好offer\n");

	return 0;
}


//函数声明
int Add(int x, int y);
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}