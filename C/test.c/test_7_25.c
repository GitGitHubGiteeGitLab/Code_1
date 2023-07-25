#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void reverse_string(char s[])
{
	size_t len = strlen(s);
	char tmp = s[0];
	s[0] = s[len - 1];
	s[len - 1] = '\0';//神来一笔，先结束，14行再交换
	if (strlen(s + 1) >= 2)//长度为1或长度为的0就不换
		reverse_string(s + 1);
	s[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);//fedcba

	return 0;
}


