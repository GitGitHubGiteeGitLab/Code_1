#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = 0;
//	
//	/*if (a > b)
//		m = a;
//	else
//		m = b;*/
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	b = (a > 5 ? 3 : -3);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	//3+5
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	printf("%d\n", arr[5]);//[] 下标引用操作符
//
//	return 0;
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	printf("hehe\n");//()函数调用操作符
//	int r = Add(3, 5);//()函数调用操作符
//
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	int price;
//};
//
////结构体变量.成员
////结构体指针->成员
//
//void Print(struct Book* pb)
//{
//	printf("%s %d\n", (*pb).name, (*pb).price);
//	printf("%s %d\n", pb->name, pb->price);
//}
//
//int main()
//{
//	struct Book b = {"C语言指南", 55};
//	printf("%s %d\n", b.name, b.price);
//
//	Print(&b);
//
//	return 0;
//}


//int - signed int
//unsigned int 
//char 到底是signed char还是unsigned char是不确定的，C语言标准没有明确指定，是取决于编译器的
//在当前使用的VS上，char == signed char
//
//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110
//	char c = a + b;
//	//00000000000000000000000000000101-a
//	//00000000000000000000000001111110-b
//	//00000000000000000000000010000011
//	//10000011-c
//	//11111111111111111111111110000011
//	//10000000000000000000000001111100
//	//10000000000000000000000001111101
//	//-125
//	printf("%d\n", c);
//
//	return 0;
//}


//实例1
//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}
//
//

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//int main()
//{
//	//
//	//优先级：相邻操作符，优先级高的先计算
//	//
//	//int a = 3 + 5 * 4;
//	//结合性：相邻操作符优先级相同的情况下，结合性才有作用
//	//
//
//	int a = 3 + 5 + 4;
//
//	return 0;
//}



//表达式1
//int main()
//{
//	a * b + c * d + e * f;
//
//	return 0;
//}


//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//


//int main()
//{
//	//int a[][3] = { {0,,2},{},{3,4,5} };
//
//	return 0;
//}
//


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}	
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	//init(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//

//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 6,7,8,9,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//
//	//交换
//	//int c[] = {0};
//
//	//0x0012ff40
//	//这是错误的，因为数组的数组名是首元素的地址，是一个常量
//	//c = a;
//	//a = b;
//	//b = c;
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}
//

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    00001111    4 个 1

//15%2=1
//15/2=7
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//-1
//	int ret = count_num_of_1(num);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//-1
//	int ret = count_num_of_1(num);
//	printf("%d\n", ret);
//
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//01010000010100000101000001010000
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	//00000000000000000000000000001010
//	
//	//奇数位
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int count_diff_bit(int m ,int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0; i<32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m ,n);
//	printf("%d\n", ret);
//	return 0;
//}


int count_diff_bit(int m, int n)
{
	int r = m ^ n;
	//因为异或操作符，对应的二进制位相同为0，相异为1，那m和n的不同的二进制位异或后一定是1
	//那我们数一下r的二进制中1的个数，就是m和n中不同位的个数
	int i = 0;
	int count = 0;
	while (r)
	{
		r = r & (r - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int ret = count_diff_bit(m, n);
	printf("%d\n", ret);
	return 0;
}
