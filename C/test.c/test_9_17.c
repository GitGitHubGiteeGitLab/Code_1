#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strcat函数，返回的是目标空间的起始地址
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1. 找到目标空间的末尾
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 数据追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	strcat(arr1, arr1);//strncat
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

#include <string.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abc";
//	if (my_strcmp(arr1, arr2) > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdefghi";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "abc";
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc\0xxxxxxxxxxxxxx";
//	char arr2[] = "defghi";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//


//int main()
//{
//	char arr1[] = "abczef";
//	char arr2[] = "abcqw";
//	
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdefghiabcdeqghi";
//	char arr2[] = "deq";
//	char * ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//
//const char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp;//记录开始匹配的位置
//	const char* s1;//遍历str1指向的字符串
//	const char* s2;//遍历str2指向的字符串
//
//	assert(str1 && str2);
//	if (*str2 == '\0')
//		return str1;
//
//	cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	const char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//
//
//


//int main()
//{
//	char arr[] = "zpengwei@yeah.net";
//
//	char buf[200] = {0};//"zpengwei@yeah.net"
//	strcpy(buf, arr);
//
//	char* p = "@.";
//	char* s = strtok(buf, p);
//	printf("%s\n", s);
//
//	s = strtok(NULL, p);
//	printf("%s\n", s);
//
//	s = strtok(NULL, p);
//	printf("%s\n", s);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "zpengwei@yeah.net@hehe.haha";
//	char arr2[] = "192.168.23.101";
//
//	char buf1[200] = { 0 };//"zpengwei\0yeah.net"
//	strcpy(buf1, arr);
//
//	char buf2[200] = { 0 };//"192.168.23.101"
//	strcpy(buf2, arr2);
//
//	char* p = "@.";
//	char* s = NULL;
//	for (s = strtok(buf1, p); s != NULL; s=strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//
//	char* p2 = ".";
//	for (s = strtok(buf2, p2); s != NULL; s = strtok(NULL, p2))
//	{
//		printf("%s\n", s);
//	}
//
//	return 0;
//}

//static


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));
//	}
//
//	return 0;
//}

//打开文件的例子
//fopen 以读的形式打开文件
// 如果文件存在，打开成功
// 如果文件不存在，打开失败
//
//int main()
//{
//	FILE* pf = fopen("add.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败，原因是：%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功\n");
//		//...
//	}
//	return 0;
//}

//
//perror
//直接打印错误码，所对应的错误信息
//perror == printf + strerror
//


int main()
{
	FILE* pf = fopen("add.txt", "r");
	if (pf == NULL)
	{
		perror("打开文件失败"); 
		return 1;
	}
	else
	{
		printf("打开文件成功\n");
		//...
	}
	return 0;
}