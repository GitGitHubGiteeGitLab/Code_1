#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
#include <string.h>

//
//void test(int arr[])
//{
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

#include <assert.h>

//char* my_strcpy(char* dest, const char* src)
//{
//	//����
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//��srcָ����ַ����п������ݵ�destָ��Ŀռ�
//	//\0Ҳ�ᱻ������Ŀ��ռ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] =   "hello bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//
//�⺯��strcpy���ص���Ŀ��ռ����ʼ��ַ
//

//const���α�����ʱ�������﷨����������const�޸�
//���Ǳ����ϣ�num���Ǳ���,��һ�ֲ��ܱ��޸ĵı���

//int main()
//{
//	const int num = 10;
//	printf("num = %d\n", num);
//
//	//const ����*�����
//	//���Ƶ�ָ��ָ������ݣ�Ҳ����˵������ͨ��ָ�����޸�ָ��ָ�������
//	//����ָ������ǿ����޸ĵģ�Ҳ����ָ��ָ������������ 
//	// 
//	//const ����*���ұ�
//	//���Ƶ���ָ���������ָ�����������ָ����������
//	//���ǿ���ͨ��ָ��������޸�ָ�������
//
//	int * const  p = &num;
//	*p = 20;//err
//
//	int n = 1000;
//	p = &n;//err
//
//	printf("num = %d\n", num);
//
//	return 0;
//}

//ģ��ʵ��һ��strlen����
//
//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
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

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[10] = {0};
//	printf("hehe");
//
//	return 0;
//}
//

//link - ����
//link.exe
//

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int c = add(2, 3);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//

#include <stdio.h>

//int i;//һ��ȫ�ֱ��������������ʼ���Ļ���Ĭ��ֵ��0
//
//int main()
//{
//    i--;//-1
//    //  -1 > 4
//    //sizeof ����Ľ����size_t ���͵ģ����޷��ŵ�����
//    // i    sizeof()
//    // int  size_t
//    // size_t  size_t
//    // -1      4
//    //11111111111111111111111111111111
//    //
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//int main()
//{
//	printf("%d\n", i);
//	return 0;
//}





#include <stdio.h>

// int main()
// {
//     int n = 0;
//     int m = 0;

//     scanf("%d %d", &n, &m);
//     int arr1[n];
//     int arr2[m];
//     //����2������
//     int i = 0;
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     for(i=0; i<m; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }
//     //
//     int arr3[m+n];
//     i = 0;
//     int j = 0;
//     int k= 0;
//     while(i<n && j<m)
//     {
//         if(arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else 
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     //
//     if(i == n)
//     {
//         while(j<m)
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     else
//     {
//         while(i<n)
//         {
//             arr3[k++] = arr1[i++];
//         }
//     }
//     for(i=0; i<m+n; i++)
//     {
//         printf("%d ", arr3[i]);
//     }
//     return 0;
// }



// int main()
// {
//     int n = 0;
//     int m = 0;

//     scanf("%d %d", &n, &m);
//     int arr1[n];
//     int arr2[m];
//     //����2������
//     int i = 0;
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     for(i=0; i<m; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }
//     //
//     i = 0;
//     int j = 0;
//     int k= 0;
//     while(i<n && j<m)
//     {
//         if(arr1[i] < arr2[j])
//         {
//             printf("%d ", arr1[i++]);
//         }
//         else 
//         {
//             printf("%d ", arr2[j++]);
//         }
//     }
//     //
//     if(i == n)
//     {
//         while(j<m)
//         {
//             printf("%d ", arr2[j++]);
//         }
//     }
//     else
//     {
//         while(i<n)
//         {
//             printf("%d ", arr1[i++]);
//         }
//     }
//     return 0;
// }


//
//int main()
//{
//    int n = 0;
//    int m = 0;
//
//    scanf("%d %d", &n, &m);
//    int arr1[1000];
//    int arr2[1000];
//    //����2������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i++]);
//        }
//        else
//        {
//            printf("%d ", arr2[j++]);
//        }
//    }
//    //
//    if (i == n)
//    {
//        while (j < m)
//        {
//            printf("%d ", arr2[j++]);
//        }
//    }
//    else
//    {
//        while (i < n)
//        {
//            printf("%d ", arr1[i++]);
//        }
//    }
//    return 0;
//}