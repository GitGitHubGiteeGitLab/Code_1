#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void reverse_string(char s[])
{
	size_t len = strlen(s);
	char tmp = s[0];
	s[0] = s[len - 1];
	s[len - 1] = '\0';//����һ�ʣ��Ƚ�����14���ٽ���
	if (strlen(s + 1) >= 2)//����Ϊ1�򳤶�Ϊ��0�Ͳ���
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


