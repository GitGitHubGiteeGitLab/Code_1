#define _CRT_SECURE_NO_WARNINGS 1

//10000
#include <stdio.h>

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写一个代码完成文件的拷贝
//data1.txt ---> data2.txt
//读             写
//int main()
//{
//	FILE* pfread = fopen("data1.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//
//	FILE* pfwrite = fopen("data2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		perror("fopen");
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//拷贝数据
//	int ch = 0;
//
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}
//


#include <stdio.h>
#include <windows.h>
//VS2022 WIN11环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//
//	Sleep(10000);
//
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}


//作业讲解代码
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) && 
//							((b==2) + (e==4) == 1) && 
//							((c==1) + (d==2) == 1) && 
//							((c==5) + (d==3) == 1) && 
//							((e==4) + (a==1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//1 0 0 0 
//1 1 0 0
//1 2 1 0
//1 3 3 1
//

//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void left_move(char *arr, int k)
//{
//	int i = 0;
//	size_t len = strlen(arr);
//	k = k % len;
//	for (i = 0; i < k; i++)
//	{
//		//左旋转1个字符
//		char tmp = *arr;
//		size_t j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];//*(arr+j) = *(arr+j+1);
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";
//	left_move(arr, 14);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//void reverse(char*left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	size_t len = strlen(arr);
//	k %= len;
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr +len-1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";
//	left_move(arr, 14);
//	printf("%s\n", arr);
//
//	return 0;
//}
//



//
//int is_left_move(char* str1, char*str2)
//{
//	//左旋转1个字符
//	int len = (int)strlen(str1);
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;
//		size_t j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//	//abcdef
//	char arr2[] = "cdefab";
//
//	int ret = is_left_move(arr1, arr2);//判断arr2是否是arr1旋转所得
//
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}


//
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";//abcdefabcdef
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//	//abcdef
//	char arr2[] = "cdef";
//
//	int ret = is_left_move(arr1, arr2);//判断arr2是否是arr1旋转所得
//
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
//

int main()
{
	int arr[2][2][2];
	return 0;
}
