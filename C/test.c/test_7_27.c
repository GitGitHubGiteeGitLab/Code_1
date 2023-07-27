#include <stdio.h>

#include <stdio.h>
int main()
{                //1      3     
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;

	i = a++ || ++b || d++;
	//  0    3
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	printf("%d\n", i);

	return 0;
}

int main2()
{
	int a = 10;
	//00000000000000000000000000001010
	//00000000000000000000000000010000
	//00000000000000000000000000011010
	//11111111111111111111111111101111
	//1<<4
	a |= (1 << 4);
	printf("%d\n", a);
	a &= (~(1 << 4));
	printf("%d\n", a);

	return 0;
}

int main1()
{
	int a = 3;
	int b = 5;

	int c = 0;//中间变量
	//这个代码存在缺陷，变量的值如果太大就出问题了
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	return 0;
}