#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//������
//
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ���������
//		//1. ���i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2. ���i��ÿһλ��n�η�֮��
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



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

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


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

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
//		//��ǰ������һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left < right)  && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
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
	//����������'a'~'d'
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