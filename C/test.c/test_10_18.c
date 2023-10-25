#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

#if 0
int main()
{
    char arr[14] = { 0 };
    int N = 0;
    scanf("%d", &N);
    int k = 0;
    int i = 0;
    while (N)
    {
        if (k != 0 && k % 3 == 0)
            arr[i++] = ',';
        arr[i++] = N % 10 + '0';
        N = N / 10;
        k++;
    }

    for (i--; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
#endif


// #include <stdio.h>

// int is_exist(char ch, char arr[])
// {
//     int i = 0;
//     while(arr[i])
//     {
//         if(ch == arr[i])
//             return 1;
//         i++;
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[101] = {0};
//     char arr2[101] = {0};

//     gets(arr1);
//     gets(arr2);

//     int i = 0;
//     while(arr1[i])
//     {
//         //库函数 - strchr
//         if(is_exist(arr1[i], arr2) == 0)
//         {
//             printf("%c", arr1[i]);
//         }
//         i++;
//     }
//     return 0;
// }



#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[101] = { 0 };
    char arr2[101] = { 0 };

    // gets(arr1);
    // gets(arr2);

    scanf("%[^\n]s", arr1);
    getchar();
    scanf("%[^\n]s", arr2);

    int i = 0;
    while (arr1[i])
    {
        //库函数 - strchr - 在一个字符串中找一个字符是否存在
        if (strchr(arr2, arr1[i]) == NULL)
        {
            printf("%c", arr1[i]);
        }
        i++;
    }
    return 0;
}
