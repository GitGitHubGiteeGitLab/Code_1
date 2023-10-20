#define _CRT_SECURE_NO_WARNINGS 1
//
//方向选择:
//1. C / C++研发
//2. Java研发
//3. 测试开发
//
#include <stdio.h>

//文件路径：
//相对路径
//. 表示当前路径
//.. 表示上一级路径
// 
//绝度路径

//int main()
//{
//	//打开文件
//	//FILE* pf = fopen(".\..\\..\\data.txt", "r");//相对路径
//	//FILE* pf = fopen("D:\\code\\2023\\class111\\data.txt", "r");//绝对路径
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//...
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		if (ch % 5 == 0)
//			fputc('\n', pf);
//		fputc(ch, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		if (ch % 5 == 0)
//			fputc('\n', stdout);
//		fputc(ch, stdout);
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//int ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	//ch = fgetc(pf);
//	//printf("%c ", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputs("hello", pf);
//	char arr[] = "hello";
//	fputs(arr, pf);
//	fputs("world", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	char arr[100] = {0};
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	float f;
//	char c;
//	int n;
//};
//
//int main()
//{
//	struct S s = { 3.14f, 'w', 100 };
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%f-%c-%d", s.f, s.c, s.n);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//struct S
//{
//	float f;
//	char c;
//	int n;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%f-%c-%d", &(s.f), &(s.c), &(s.n));
//	printf("%f-%c-%d\n", s.f, s.c, s.n);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


////二进制的方式写进文件
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写文件
//	FILE*pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的写文件
//	fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制的方式读取文件
//int main()
//{
//	int arr[10] = {0};
//	//写文件
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的读文件
//	fread(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), pf);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	float f;
//	char c;
//	int n;
//};
//
//int main()
//{
//	struct S s = { 3.14f, 'c', 100 };
//	char arr[100] = { 0 };
//	sprintf(arr, "%f-%c-%d", s.f, s.c, s.n);
//	printf("%s\n", arr);
//
//	struct S tmp = { 0 };
//	sscanf(arr, "%f-%c-%d", &(tmp.f), &(tmp.c), &(tmp.n));
//	printf("%f\n", tmp.f);
//	printf("%c\n", tmp.c);
//	printf("%d\n", tmp.n);
//
//	return 0;
//}
//

//
int main()
{
	FILE*pf = fopen("data.txt", "r");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//读文件
	int ch = fgetc(pf);
	printf("%c\n", ch);//a

	ch = fgetc(pf);
	printf("%c\n", ch);//b

	ch = fgetc(pf);
	printf("%c\n", ch);//c
	
	ch = fgetc(pf);
	printf("%c\n", ch);//d

	int pos = ftell(pf);
	printf("pos = %d\n", pos);

	//ch = fgetc(pf);
	//printf("%c\n", ch);//e
	//fseek(pf, -4,SEEK_CUR);
	//fseek(pf, 0, SEEK_SET);
	//fseek(pf, -9, SEEK_END);
	//ch = fgetc(pf);
	//printf("%c\n", ch);//a

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);//a

	fclose(pf);
	pf = NULL;
	return 0;
}


