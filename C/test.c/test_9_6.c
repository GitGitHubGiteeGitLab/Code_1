#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//字符指针

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;//pc就是一个字符指针变量
//
//	const char * ps = "abcdef";
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
////&函数名 - 拿到的就是函数的地址
////函数名 - 也是函数的地址
//int main()
//{
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//int (* pf)(int, int) = &Add;//pf就是一个函数指针变量的
//	int (* pf)(int, int) = Add;
//	int ret = pf(3, 5);
//	int ret2 = Add(3, 5);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//
//
//	//int arr[10];
//	//int (*pa)[10] = &arr;//pa就是数组指针变量
//
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = &Add;
//	int (*pf2)(int, int) = &Sub;
//	//数组中存放类型相同的多个元素
//	int (* pfArr[4])(int, int) = {&Add, &Sub};//pfArr 是函数指针数组 - 存放函数指针的数组
//
//	return 0;
//}

//
//void menu()
//{
//	printf("****************************\n");
//	printf("***  1. add      2. sub  ***\n");
//	printf("***  3. mul      4. div  ***\n");
//	printf("***  0. exit             ***\n");
//	printf("****************************\n");
//}
////+ - * / && || & | >> <<
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误, 重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//
//void menu()
//{
//	printf("****************************\n");
//	printf("***  1. add      2. sub  ***\n");
//	printf("***  3. mul      4. div  ***\n");
//	printf("***  0. exit             ***\n");
//	printf("****************************\n");
//}
////+ - * / && || & | >> <<
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		//函数指针数组 - 转移表
//		int (*pfArr[])(int, int) = {NULL, Add, Sub, Mul, Div};
//		//                          0     1     2   3    4
//		if (0 == input)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误，重新选择!\n");
//		}
//	} while (input);
//
//	return 0;
//}
//



//
//void menu()
//{
//	printf("****************************\n");
//	printf("***  1. add      2. sub  ***\n");
//	printf("***  3. mul      4. div  ***\n");
//	printf("***  0. exit             ***\n");
//	printf("****************************\n");
//}
////+ - * / && || & | >> <<
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误, 重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//冒泡排序算法
//给一组整型数据，然后使用冒泡排序算法，对数据进行升序排序


//
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//数据
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);//冒泡排序
//	print_arr(arr, sz);
//	return 0;
//}
//

//A
//void qsort(void* base, //待排序数组的第一个元素的地址
//	       size_t num, //待排序数组的元素个数
//	       size_t size,//待排序数组中一个元素的大小
//	       int (* cmp)(const void* e1, const void* e2)//函数指针-cmp指向了一个函数，这个函数是用来比较两个元素的
//         //e1和e2中存放的是需要比较的两个元素的地址
//          );
//1. 排序整型数组, 两个整型可以直接使用>比较
//2. 排序结构体数组，两个结构体的数据可能不能直接使用>比较
// 也就是不同类型的数据，比较出大小，方法是有差异的
//

#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//测试qsort排序整型数据
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//测试qsort排序结构体数据
struct Stu
{
	char name[20];
	int age;
};
//结构体数据怎么比较呢？
//1. 按照年龄比较
//2. 按照名字比较

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

//2. 按照名字比较

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu arr[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//数据
	//test1();
	//test2();
	test3();
	return 0;
}


//void* 类型的指针 - 不能进行解引用操作符，也不能进行+-整数的操作
//void* 类型的指针是用来存放任意类型数据的地址
//void* 无具体类型的指针
//
//int* char* 指针类型
//


//int main()
//{
//	char c = 'w';
//
//	char* pc = &c;
//
//	int a = 100;
//	//int* p = &c;
//	//       char*
//	void* pv = &c;//char*
//	pv = &a;//int*
//
//	return 0;
//}