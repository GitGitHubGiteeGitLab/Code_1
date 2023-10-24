#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;
//	int b = a + 1;//b=11, a=10
//	int b = ++a;//b=11 a=11 - 表达式有副作用
//
//
//	return 0;
//}
#include <stdio.h>

//#define MAX(x,y) ((x)>(y)?(x):(y))

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//        3    >  5    
//	//        a=4     b=6     no      6
//	//  6                             b=7
//	printf("%d\n", m);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m = MAX(a, b);
//	//int m = ((a) > (b) ? (a) : (b));
//	printf("%d\n", m);
//
//	return 0;
//}




//1
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
////2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m1 = MAX(a, b);
//	printf("%d\n", m1);
//
//	int m2 = Max(a, b);
//	printf("%d\n", m2);
//
//	return 0;
//}
//

//#define MALLOC(num, type)   (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int*p = (int*)malloc(10 * sizeof(int));
//	//malloc(10, int);
//	//malloc(5, double);
//	int*p = MALLOC(10, int);
//	if (p == NULL)
//	{
//		//...
//	}
//
//	return 0;
//}


//1
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
////2        13
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m1 = MAX(a++, b);
//	printf("%d\n", m1);
//
//	int m2 = Max(a++, b);
//	printf("%d\n", m2);
//
//	return 0;
//}

//#define	M 100
//
//int main()
//{
//	int m = M;
//	printf("m = %d\n", m);
//
//#undef M
//
//#define M 1000
//	int n = M;
//	printf("n = %d\n", n);
//
//	return 0;
//}


//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#endif
//	return 0;
//}
//


//#include "test.h"
//
//int main()
//{
//	return 0;
//}
//




//
//#define N 4
//
//#define Y(n) ((N+2)*n) /*这种定义在编程规范中是严格禁止的*/
//
//
//int main()
//{
//	printf("%d\n", 2 * (N + Y(5 + 1)));
//	return 0;
//}
//
//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);
//  return 0;
//}


#include <stddef.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(type, mem)    (size_t)&(((type*)0)->mem)
//
//int main()
//{
//	struct S s;
//	printf("%zd\n", OFFSETOF(struct S, c1));
//	printf("%zd\n", OFFSETOF(struct S, a));
//	printf("%zd\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}
//#define SWAP_BIT(n)      (n = ((n&0x55555555)<<1) + ((n&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int a = 11;
//	//00001010
//	//00000101--5
//	SWAP_BIT(a);
//	printf("%d\n", a);
//
//	SWAP_BIT(a);
//	printf("%d\n", a);
//	return 0;
//}

#include "test.h"
int main()
{
	return 0;
}
