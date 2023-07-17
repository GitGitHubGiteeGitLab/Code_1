#include <stdio.h>

int main1()
{
	char password[20];
	printf("请输入密码:>");
	scanf("%s", password);//scanf函数在读取字符串的时候，遇到空格就不再读取
	int ch = 0;
	while (getchar() != '\n')
	{
		;
	}

	printf("请确认(Y/N):");
	ch = getchar();

	if ('Y' == ch)
		printf("确认成功\n");
	else
		printf("确认失败\n");

	return 0;
}


