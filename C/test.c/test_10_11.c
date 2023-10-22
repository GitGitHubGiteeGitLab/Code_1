#include <assert.h>
#include <ctype.h>

enum State
{
	VALID,
	INVALID
}sta = INVALID;//默认设置为非法

int my_atoi(const char* str)
{
	//空指针
	assert(str);
	//空字符串
	if (*str == '\0')
		return 0;

	//跳过空白字符
	while (isspace(*str))
	{
		str++;
	}
	//+-
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long r = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			r = r * 10 + flag*(*str - '0');
			if (r > INT_MAX || r < INT_MIN)
			{
				if (flag == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}
			str++;
		}
		else
		{
			return (int)r;
		}
	}
	sta = VALID;
	return (int)r;
}

int main()
{
	char arr[] = "   1234a0000000000000000000000";

	int ret = my_atoi(arr);
	if(sta ==VALID)
		printf("合法的转换：%d\n", ret);
	else
		printf("非法的转换：%d\n", ret);


	return 0;
}
