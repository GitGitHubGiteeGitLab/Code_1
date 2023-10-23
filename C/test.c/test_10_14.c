#include <stdio.h>
#define CAT(v, n) v##n

int main()
{
	int value10 = 100;
	printf("%d\n", CAT(value, 10));
	printf("%d\n", value10);


	return 0;
}
