#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);//ok
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);//ok
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("haha\n");
//	printf("%d\n", *p);
//
//	return 0;
//}


//int test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int d = test();
//
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	char c;
//	int i;
//	int arr[0];//未知大小的数组 - 柔性数组成员
//};
//
//struct S
//{
//	char c;//1
//	//3
//	int i;//4
//	int arr[];//未知大小的数组 - 柔性数组成员
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 20);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->c = 'w';
//	ps->i = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//打印
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//空间不够了
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+40);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//增容成功后，继续使用
//	
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//


struct S
{
	char c;
	int i;
	int* data;
};


int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("malloc1");
		return 1;
	}
	ps->c = 'w';
	ps->i = 100;
	ps->data = (int*)malloc(20);
	if (ps->data == NULL)
	{
		perror("malloc2");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->data[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->data[i]);
	}
	//空间不够了，增容
	int*ptr = (int*)realloc(ps->data, 40);
	if (ptr == NULL)
	{
		perror("realloc");
		return 1;
	}
	else
	{
		ps->data = ptr;
	}
	//增容成功就使用
	//...
	//释放
	free(ps->data);
	ps->data = NULL;
	free(ps);
	ps = NULL;

	return 0;
}

