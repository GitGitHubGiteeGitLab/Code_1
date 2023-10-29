#include<stdio.h>

//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}
//
//int main()
//{
//	printf("%lld\n", Fib(6));
//
//	return 0;
//}

void func1()
{
	int a = 0;
	printf("%p\n", &a);
}

void func2()
{
	int b = 0;
	printf("%p\n", &b);
}

int main()
{
	func1();
	func2();

	return 0;
}