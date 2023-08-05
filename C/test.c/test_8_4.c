#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10; 
//	int/*int */b = 0;
//	for (int x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;
//	return 0;
//}

#include <stdio.h>
//https://www.nowcoder.com/practice/22948c2cad484e0291350abad86136c3?tpId=37&&tqId=21331&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking

// int main() 
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     //求出a和b的较大值
//     int m = a>b?a:b;
//     while(1)
//     {
//         if(m%a==0 && m%b==0)
//             break;
//         m++;
//     }
//     printf("%d\n", m);

//     return 0;
// }

//
//int main()
//{
//    long long a = 0;
//    long long b = 0;
//
//    scanf("%lld %lld", &a, &b);
//    //求出a和b的较大值
//    long long i = 1;
//    while (i * a % b != 0)
//    {
//        i++;
//    }
//
//    printf("%lld\n", i * a);
//
//    return 0;
//}
//
//int main() {
//    char arr[101] = { 0 };
//    //scanf("%s", arr);
//    gets(arr);
//
//    printf("%s\n", arr);
//
//    return 0;
//}

#include <stdio.h>
//https://www.nowcoder.com/practice/ee5de2e7c45a46a090c1ced2fdc62355?tpId=85&&tqId=29867&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking

void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main() {
    char arr[101] = { 0 };
    //abcdef ghi qwer\0

    //scanf("%s", arr);
    //gets(arr);
    //scanf("%[^\n]s", arr);
    int ch = 0;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        arr[i++] = ch;
    }
    int len = strlen(arr);

    //1. 逆序整个字符串
    reverse(arr, arr + len - 1);
    //2. 逆序每个单词
    char* cur = arr;
    while (*cur)
    {
        char* start = cur;
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        char* end = cur - 1;
        reverse(start, end);//逆序一个单词
        if (*cur == ' ')
            cur++;
    }
    printf("%s\n", arr);
    return 0;
}


