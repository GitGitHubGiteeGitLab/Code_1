#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <ctype.h>
//
//int main()
//{
//	char ch = 'w';
//	if (islower(ch))
//	{
//		printf("小写\n");
//	}
//	else
//	{
//		printf("非小写\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ret = isxdigit('q');
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int ret = toupper('a');
//	printf("%c\n", ret);//A
//	ret = tolower(ret);
//	printf("%c\n", ret);//'a'
//
//	return 0;
//}

//Test String.\n

//int main()
//{
//	char arr[] = "Test String.\n";
//	char* p = arr;
//	while (*p)
//	{
//		if (isupper(*p))
//		{
//			*p = tolower(*p);
//		}
//		p++;
//	}
//	printf("%s", arr);
//	return 0;
//}
#include <string.h>
#include <assert.h>


//void* my_memcpy(void* dest, const void* src, size_t sz)
//{
//	assert(dest && src);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		(char*)dest++;//可能会存在无法编译的问题
//		(char*)src++;//可能会存在无法编译的问题
//	}
//}

//
//void* my_memcpy(void* dest, const void* src, size_t sz)
//{
//	assert(dest && src);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest +1;
//		src = (char*)src + 1;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5 };
//	//把arr2中的前5个整数的数据，拷贝放在arr1中
//	my_memcpy(arr1, arr2, 20);
//
//	return 0;
//}


//
//void* my_memcpy(void* dest, const void* src, size_t sz)
//{
//  void* ret = dest;
//	assert(dest && src);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//  return ret;
// 
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	            //1 2 1 2 3 4 5 8 9 10
//	//my_memcpy(arr+2, arr, 20);
//	//memmove(arr+2, arr, 20);
//	memcpy(arr + 2, arr, 20);
//
//
//	return 0;
//}

//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00 08 00 00 00 09 00 00 00 0a 00 00 00

//memmove是如何实现的呢？
//void* my_memmove(void* dest, const void* src, size_t sz)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (sz--)
//		{
//			*((char*)dest+sz) = *((char*)src + sz);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//memset 是设置内存的
//是以字节为单位设置内存的
//int main()
//{
//	/*char arr[] = "hello world";
//	memset(arr+6, 'x', 3);
//	printf("%s\n", arr);*/
//
//	int arr[10] = { 0 };
//	memset(arr, 0, 40);
//
//	return 0;
//}
//
//


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00
//	//
//	int arr2[] = { 1,2,3,0x11223304 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 33 22 11
//	int ret = memcmp(arr1, arr2, 13);
//	printf("%d\n", ret);
//
//	return 0;
//}


struct Student
{
	char name[20];
	int age;
	char sex[5];
	float score;
} s1, s2, s3;//s1, s2, s3 是三个结构体变量 - 全局变量

//struct Book
//{
//	char name[20];
//	char author[12];
//	float price;
//}b1;


//struct 
//{
//	char name[20];
//	char author[12];
//	float price;
//}b1, b2;
//
//struct
//{
//	char name[20];
//	char author[12];
//	float price;
//}b;
//
//struct
//{
//	char name[20];
//	char author[12];
//	float price;
//}* p;
//
//int main()
//{
//	p = &b;//不建议这样写
//	//struct Student s4, s5, s6;//s4, s5, s6 是三个结构体变量 - 局部变量
//	
//	return 0;
//}
//

//err
//struct Node
//{
//	int data;//数据
//	struct Node n;//下一个节点
//};

//
//typedef struct Node
//{
//	int data;//存放数据-数据域
//	struct Node* n;//存放下一个节点的地址-指针域
//}Node;
//
//int main()
//{
//	printf("%zd\n", sizeof(Node));
//
//	return 0;
//}
//
//
//
//struct Point
//{
//	int x;
//	int y;
//}p1 = {1,2};
//
//struct Point p3 = {4,5};
//
//struct Stu
//{
//	char name[15];//名字
//	int age;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	struct Point p2 = {a, b};
//
//	struct Stu s = { "zhangsan", 20 };
//	struct Stu s2 = { .age=18, .name="如花"};
//
//	printf("%s %d\n", s.name, s.age);
//	printf("%s %d\n", s2.name, s2.age);
//
//	struct Node n = { 100, {20, 21}, NULL };
//	printf("%d x=%d y=%d\n", n.data, n.p.x, n.p.y);
//
//	return 0;
//}
//
//

#include <stddef.h>
struct S1
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int i;
};

int main()
{
	printf("%d\n", offsetof(struct S2, c1));
	printf("%d\n", offsetof(struct S2, c2));
	printf("%d\n", offsetof(struct S2, i));

	//printf("%d\n", sizeof(struct S1));
	//printf("%d\n", sizeof(struct S2));

	return 0;
}
