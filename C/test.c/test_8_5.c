#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//自幂数
//
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数
//		//1. 求出i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2. 求出i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp) 
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	//3 5
//	//2 5
//	//6 6
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = 
//	                       { {9801,"zhang",20},
//							 {9802,"wang",19},
//				 	         {9803,"zhao",18} };
//
//	fun(students + 1);
//	return 0;
//}
//


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}




//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//
//	if (money > 0)
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//
//	return 0;
//}

//	
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 3 5 7 9 11 13 15 17 19
//	//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//从前往后找一个偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while ((left < right)  && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//00000000000000000000000011001000-a
//	//00000000000000000000000001100100-b
//	//00000000000000000000000100101100
//	//00000000000000000000000000101100 - c
//	c = a + b;
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//
//
//	printf("%d %d", a + b, c);//300 44
//
//	return 0;
//}
//

//
int main()
{
	//假设凶手是'a'~'d'
	//'a' 'b' 'c' 'd'
	char killer = 0;
	//
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer !='a') + (killer =='c') + (killer=='d') + (killer!='d') == 3)
		{
			printf("killer = %c\n", killer);
		}
	}

	return 0;
}