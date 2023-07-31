#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//} s3, s4;
//s3，s4是结构体类型的变量
//s3，s4是全局的


//typedef struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//}Stu;//Stu 是重命名产生的新的类型

//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	Stu s5;
//
//	//s1，s2是结构体类型的变量， 是局部变量
//
//	return 0;
//}
//
//struct B
//{
//	char c;
//	int i;
//};
//
//struct S
//{
//	char c;
//	int num;
//	int arr[10];
//	double* pd;
//	struct B sb;
//	struct B* pb;
//}s1;//s1是全局变量
//
//struct S s2;//s2是全局变量
//
//int main()
//{
//	double d = 3.14;
//	//按照顺序初始化
//	struct S s3 = { 'q', 100, {1,2,3}, &d, {'a', 99}, NULL };//局部变量
//	//指定成员来初始化
//	struct S s4 = { .num = 1000, .arr = {1,2,3,4,5} };//局部变量
//
//
//
//	return 0;
//}

#include <string.h>

struct S
{
	char name[20];
	int age;
};

//void set_s(struct S t)
//{
//	t.age = 18;
//	//t.name = "zhangsan";//err, 因为name是数组名，数组名是常量的地址
//	strcpy(t.name, "zhangsan");//字符串拷贝
//}

//void set_s(struct S* ps)
//{
//	(*ps).age = 18;
//	//t.name = "zhangsan";//err, 因为name是数组名，数组名是常量的地址
//	strcpy((*ps).name, "zhangsan");//字符串拷贝
//}

//
//void set_s(struct S* ps)
//{
//	ps->age = 18;
//	//t.name = "zhangsan";//err, 因为name是数组名，数组名是常量的地址
//	strcpy(ps->name, "zhangsan");//字符串拷贝
//}
//
//void print_s(struct S* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct S s = {0};
//	//写一个函数给s中存放数据
//	set_s(&s);
//
//	//写一个函数打印s中的数据
//	print_s(&s);
//
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//void test2()
//{
//	printf("test2\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);//3
//	//1!+2!+3! = 1 + 2+ 6= 9
//
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	
//	return 0;
//}
//

//前提：
//VS 上，X86，debug模式下验证和讲解的
//

#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	/*for (i = 0; i <=12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}*/
	printf("%p\n", &i);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[9]);

	return 0;
}

