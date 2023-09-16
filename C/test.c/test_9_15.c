#include<stdio.h>
#include <assert.h>

//
//strcpy函数返回的是目标空间的起始地址
//
char* my_strcpy(char*dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abc";
	/*
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	*/

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}