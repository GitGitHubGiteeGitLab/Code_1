#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;//�����ڴ��е�ջ���ռ�����4���ֽڵĿռ䣬��4���ֽ��������10�����ֵ
//	int * pa = &a;
//	
//	pa = 0x00112233;
//
//	return 0;
//}
#include <stdio.h>

//int main() 
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	//4 / 8
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*) & a;//int*
//	*p = 0;
//
//	//int* p =  &a;//int*
//	//*p = 0;
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int * pa = &a;
//	char* pc = &a;
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0x11223344,0x11223344,0x11223344,0x11223344,0x11223344,
//		           0x11223344,0x11223344,0x11223344,0x11223344,0x11223344 };
//	short* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0;
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)0x11223344;
//	*p;
//
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 10;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = -1;
//		p++;
//	}
//
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;//0x0012ff40
//	return &a;
//}
//
//
//int main()
//{
//	//0x0012ff40
//	int *p = test();
//	//p����Ұָ��
//	printf("%d\n", *p);//
//	return 0;
//}
//

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		//..
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	//ʹ��ָ���ӡ���������
//	int * p = arr;
//	int i = 0;
//	//arr-->p
//	//arr == p
//	//arr+i  ==  p+i
//	//*(arr+i) == *(p+i) == arr[i]
//	//*(arr+i) == arr[i]
//	//*(i+arr) == i[arr]
//	//3+5
//	//5+3
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", i[arr]);
//
//		//pָ�����������Ԫ��
//		//p+i ���������±�Ϊi��Ԫ�صĵ�ַ
//		//p+i ��ʼʱ������i*sizeof(int)���ֽ�
//	}
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };
//	//
//	//ָ��-ָ���ǰ�᣺����ָ��ָ��ͬһ������ָ������ʱ��ͬ��
//	//ָ��-ָ���ֵ�ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//	//
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}

//ģ��ʵ����strlen
//1, ������
//2, �ݹ�
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);//����4���ֽ�
//
//	printf("%p\n", &arr[0]);//int* 
//	printf("%p\n", &arr[0]+1);//����4���ֽ�
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);//
//
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p === %p\n", arr + i, p + i);
//	}*/
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	p++;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p =  &a;//p��ָ�������һ��ָ�����
//	int* * pp = &p;//ppָ�����������ָ�����
//
//	**pp = 20;
//	printf("%d\n", a);//20
//
//	//int** * ppp = &pp;//pp��ָ�����������ָ�����
//	//...
//	return 0;
//}


int main()
{
	//ʹ��ָ�����飬ģ��һ����ά����
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	//ָ������
	int* arr[] = { arr1, arr2, arr3 };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}