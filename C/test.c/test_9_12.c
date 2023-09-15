#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

//qsort 底层使用的快速排序
//void qsort( void* base, //待排序数据的起始地址
//	        size_t num,   //待排序数据的元素个数
//	        size_t size,  //待排序数据的一个元素的大小，单位是字节
//	        int (*compar)(const void*, const void*)//函数指针 - 指向了一个比较函数，这个函数是用来比较2个元素的
//          );
//

//
//目标：使用【冒泡排序】是的算法，模拟实现一个排序函数，可以排序任意类型的数据
//bubble_sort();


//void bubble_sort(int arr[], int sz)
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
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
//#include <string.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////int (*cmp)(const void* e1, const void* e2)
////e1是一个指针，存放了一个要比较的元素的地址
////e2是一个指针，存放了一个要比较的元素的地址
////e1指向的元素>e2指向的元素，返回>0的数字
////e1指向的元素==e2指向的元素，返回0
////e1指向的元素<e2指向的元素，返回<0的数字
////
//
//void swap(char* buf1, char* buf2, size_t size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
////泛型编程
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void*e2))
//{
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//if (arr[j] > arr[j + 1])
//			if(cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)
//			{
//				//交换
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//升序
//	//排序为降序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}	
//
//struct Stu
//{
//	char name[20];//20
//	int age;//4
//};
//
//int cmp_stu_by_age(const void* e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 15}};
//	int sz = sizeof(arr) / sizeof(arr[0]);//3
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//整型数据/字符数据/结构体数据...
//	//可以使用qsort函数对数据进行排序
//	//测试bubble_sort，排序整型数据
//	test1();
//
//	//测试bubble_sort，排序结构体的数据
//	//test2();
//	return 0;
//}
//
//

//数组名的理解
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，&数组名取出的是数组的地址
//

//
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };//4个元素，每个元素使int类型(4个字节)
//
//	printf("%d\n", sizeof(a));//16,数组名a单独放在sizeof内部，数组名表示整个数组，计算的是整个数组的大小单位是字节，是16字节
//	printf("%d\n", sizeof(a + 0));//a并非单独放在sizeof内部，也没有&，所以数组名a是数组首元素的地址，a+0还是首元素的地址
//	//是地址大小就是4/8 Byte
//
//	printf("%d\n", sizeof(*a));//a并非单独放在sizeof内部，也没有&,所以数组名a是数组首元素的地址
//	//*a 就是 首元素，大小就是4Byte  //*a == *(a+0) == a[0]
//
//	printf("%d\n", sizeof(a + 1));//a并非单独放在sizeof内部，也没有&，所以数组名a是数组首元素的地址,a+1就是第二个元素的地址
//	//a+1 == &a[1]  是第2个元素的地址，是地址就是4/8个字节
//
//	printf("%d\n", sizeof(a[1]));//a[1]就是数组的第二个元素，这里计算的就是第二个元素的大小，单位是字节 - 4
//
//	printf("%d\n", sizeof(&a));//&a - 是取出数组的地址，但是数组的地址也是地址，是地址就是4/8个Byte
//	//数组的地址 和 数组首元素的地址 的本质区别是类型的区别，并非大小的区别
//	//a  -- int*             int * p = a;
//	//&a -- int (*)[4]       int (*p)[4] = &a;
//	
//	printf("%d\n", sizeof(*&a));//16   对数组指针解引用访问一个数组的大小，单位是字节
//	//sizeof(*&a) --- sizeof(a) //16
//
//	printf("%d\n", sizeof(&a + 1));//&a数组的地址，&a+1还是地址，是地址就是4/8个字节
//
//
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址， 计算的是地址的大小 4/8 个字节
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]是首元素的地址，&a[0]+1就是第二个元素的地址，大小4/8个字节
//	//&a[1]
//	//&a[0]+1
//	//a+1
//
//	return 0;
//}

//strlen 求字符串长度
//统计的是在字符串中\0之前出现的字符的个数
//
#include <string.h>
//
//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };//6
//
//	printf("%d\n", strlen(arr));//随机值，arr是首元素的地址
//	printf("%d\n", strlen(arr + 0));//随机值，arr是首元素的地址, arr+0还是首元素的地址
//	//printf("%d\n", strlen(*arr));//err，arr是首元素的地址, *arr就是首元素 - 'a' - 97
//	//站在strlen的角度，认为传参进去的'a'-97就是地址，97作为地址，直接进行访问，就是非法访问
//	//printf("%d\n", strlen(arr[1]));//err, 'b' - 98
//	printf("%d\n", strlen(&arr));//随机值
//	//&arr -- char (*)[6]
//	//const char*
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//
//	//printf("%d\n", sizeof(arr));//6 数组名arr单独放在sizeof内部，计算的是整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr + 0));//arr是首元素的地址==&arr[0]，是地址就是4/8个字节
//	////char* 
//	////指针变量的大小和类型无关，不管什么类型的指针变量，大小都是4/8个字节
//	////指针变量是用来存放地址的，地址存放需要多大空间，指针变量的大小就是几个字节
//	////32位环境下，地址是32个二进制位，需要4个字节，所以指针变量的大小就是4个字节
//	////64位环境下，地址是64个二进制位，需要8个字节，所以指针变量的大小就是8个字节
//	////门缝里看指针，把指针给看扁了
//	////
//	//printf("%d\n", sizeof(*arr));//arr是首元素的地址，*arr就是首元素，大小就是1Byte
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//&arr是数组的地址，sizeof(&arr)就是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));//&arr+1 是跳过数组后的地址，是地址就是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，是地址就是4/8Byte
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	//a b c d e f \0
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}


int main()
{
	char* p = "abcdef";

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));


	//printf("%d\n", sizeof(p));//4/8 计算的是指针变量的大小
	//printf("%d\n", sizeof(p + 1));//p+1还是地址，大小是4/8个字节
	//printf("%d\n", sizeof(*p));//1个字节, *p == 'a'
	//printf("%d\n", sizeof(p[0]));//1个字节, p[0]--> *(p+0) --> *p == 'a';

 //	printf("%d\n", sizeof(&p));//4/8个字节，&p 是地址
	//printf("%d\n", sizeof(&p + 1));//&p是地址，&p+1还是地址，是地址就是4/8个字节

	//printf("%d\n", sizeof(&p[0] + 1));



	return 0;
}