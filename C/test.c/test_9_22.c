#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//struct S1
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//
//#pragma pack(1)
//struct S2
//{
//	char c1;//1 1 1
//	int i;//4   1 1
//	char c2;//1 1 1
//};
//#pragma pack()
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));//8
//	printf("%d\n", sizeof(struct S2));//12
//	//printf("%d\n", sizeof(struct S3));//
//	//printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}

//结构体内存对齐
//1. 怎么对齐的？
//2. 为什么要对齐？
// 
//offsetof 宏测试了，确实开辟了这么多的空间
//
//
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S t)
//{
//	printf("%d %d %d %d\n", t.data[0], t.data[1], t.data[2], t.num);
//}
//
//void print2(const struct S * ps)
//{
//	printf("%d %d %d %d\n", ps->data[0], ps->data[1], ps->data[2], ps->num);
//}
//
//int main() 
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(s);//传值调用
//	print2(&s);//传址调用
//
//	return 0;
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
//

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//
//
//
//enum Sex
//{
//	//枚举的可能取值
//	MALE=3,//枚举常量
//	FEMALE,
//	SECRET
//};
//
////#define MALE 3
////#define FEMALE 4
////#define SECRET 5
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	//MALE = 5;//ERR
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	enum Sex sex = SECRET;
//
//	printf("%zd\n", sizeof(sex));
//
//	return 0;
//}


//
//联合体的关键字：union
//

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un un;
//	//printf("%d\n", sizeof(un));
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//
//	return 0;
//}

//
//判断当前机器是大端还是小端？
//

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)//int*
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//返回1表示小端，返回0表示大端
//}

//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	return u.c;//返回1表示小端，返回0表示大端
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main() 
//{
//	printf("%zd\n", sizeof(union Un));
//
//	return 0;
//}
//

//
//union Un
//{
//	short c[7];//14
//	int i;//4
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(union Un));
//
//	return 0;
//}
//