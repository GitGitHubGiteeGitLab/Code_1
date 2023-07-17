#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//typedef

//typedef unsigned int uint;
//typedef int INT;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2  =0;
//
//	INT num3 = 0;
//	int num4 = 0;
//
//
//	return 0;
//}

//static
//静态的
//在C语言中，static有3中用法
//1. static 修饰局部变量
//2. static 修饰全局变量
//3. static 修饰函数
//



//1. static 修饰局部变量
//这时局部变量就是静态的局部变量
//一个普通的局部变量进入函数创建，出函数销毁
//但是被static修饰之后，进入函数时已经创建好了，出函数的时候也不销毁，多次调用函数时，共享一个变量
//主管的感受：生命周期变长了，但是作用域不变，只能在局部范围内使用
// 
//本质是：普通的局部变量是放在栈区上的，但是被static修饰后，是存放在内存的静态区的，静态区的变量生命周期和全局变量的生命周期一样
//
//void test()
//{
//	static int i = 1;
//	i++;//++i; i = i+1;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int j = 0;
//	while (j < 5)
//	{
//		test();
//		j = j + 1;
//	}
//
//	return 0;
//}
//


//2. static 修饰全局变量

//声明来自外部文件的符号
//下面代码的是告诉编译器：g_val 是来自其他文件的
//extern int g_val;
//
//void test()
//{
//	printf("test():%d\n", g_val);
//}
//
//int main()
//{
//	printf("%d\n", g_val);
//	test();
//	return 0;
//}
//
//


//3. static 修饰函数
//声明来自外部的函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//


//#define 定义的标识符常量
//#define M 100
//#define CH 'w'
//
//int main()
//{
//	printf("%d\n", 100);
//	int a = 100;
//	printf("%d\n", a);
//
//	printf("%c\n", 'w');
//
//	return 0;
//}
//



 
//#define 定义宏
//宏可以有参数
//宏是替换

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//#define ADD(x,y) (x+y)
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = Add(a, b);
//	int c = ADD(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	//& - 取地址操作符
//	int * pa = &a;//0x0012ff48  -内存的编号==地址==指针, pa叫指针变量
//	//* 是在说明pa是指针变量
//	//int 是在说明pa指向的是int类型的变量
//	*pa = 20;//* 解引用操作符 - 通过地址找到地址所指向的对象。*pa就等价于a
//
//	printf("%d\n", a);
//	return 0;
//}


//总结：
//1. 内存会被划分以字节为单位的一个个的内存单元
//2. 每个内存单元都有编号，编号 =地址=指针
//3. C语言中创建的变量，其实是向内存申请一块空间,比如：int a = 10，就是向内存申请4个字节的空间，每个字节都有地址
//4. &a的时候，拿出的是4个字节中地址较小的那个字节的地址(编号)
//5. 这个地址要存储起来，给一个变量，这个变量是用来存放地址（指针）所以叫指针变量:int *pa = &a;
//6. pa中存放的是a的地址，要通过pa中的地址找到a，怎么写？*pa--> 通过pa中的地址找到a *pa = 20;//本质是修改a
//&
//*



//int main()
//{
//	char ch = 'b';
//	char * pc = &ch;
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//}
//

//补充：编号 = 地址 = 指针
//指针变量：存放地址的变量
//口头语中说的指针：一般指的是指针变量

//int main()
//{
//	int* p = 5;
//
//	return 0;
//}


//探讨指针变量的大小

//int main()
//{
//	char* pc;
//	short* ps;
//	int *pi;
//	double* pd;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(ps));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}
//
//

//学生

//学生类型
//int
struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	int num;

	struct Stu s1 = {"张三", 20, 88.0f};
	struct Stu s2 = {"李四", 18, 65.5f};
	struct Stu s3 = {"王五", 19, 99.8f};

	struct Stu * ps1 = &s1;

	printf("%s %d %f\n", ps1->name, ps1->age, ps1->score);

	//printf("%s %d %f\n", s1.name, s1.age, s1.score);
	//printf("%s %d %f\n", s2.name, s2.age, s2.score);
	//printf("%s %d %f\n", s3.name, s3.age, s3.score);

	//结构体变量.结构体成员
	//结构体指针->结构体成员

	return 0;
}










