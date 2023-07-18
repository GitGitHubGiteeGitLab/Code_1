#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//"123456"
//strcmp 函数是比较字符串的大小的,头文件string.h
//>   >0
//==  0
//<   <0
// Windows

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main() {
    char password[20] = "123456", buffer[20];
    int flag = 0;
    system("cls");
    for (int i = 0; i < 3; i++) {
        printf("\033[32m请输入密码：\033[0m");
        getchar();
        scanf("%s", buffer);
        if (strcmp(password, buffer)) {
            printf("\033[31m输入失败!\n\033[0m");
            Sleep(1000);
            system("cls");
            continue;
        }
        printf("\033[32m登录成功\n\033[0m");
        flag = 1;
        break;
    }
    if (!flag)printf("\033[31m三次输入均错误\n\033[0m");
    return 0;
}

//Linux
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<unistd.h>
//int main() {
//    char password[20] = "123456", buffer[20];
//    int flag = 0;
//    system("clear");
//    for (int i = 0; i < 3; i++) {
//        printf("\033[32m请输入密码：\033[0m");
//        getchar();
//        scanf("%s", buffer);
//        if (strcmp(password, buffer)) {
//            printf("\033[31m输入失败!\n\033[0m");
//            sleep(1);
//            system("clear");
//            continue;
//        }
//        printf("\033[32m登录成功\n\033[0m");
//        flag = 1;
//        break;
//    }
//    if (!flag)printf("\033[31m三次输入均错误\n\033[0m");
//    return 0;
//}


//演示多个字符从两端移动，向中间汇聚

//Windows
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main3() {
    char arr1[] = "welcome to bit!!!!!!!";
    char arr2[] = "*********************";
    int right = strlen(arr2) - 1;
    int left = 0;

    while (left <= right) {
        printf("%s\n", arr2);
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        left++, right--;
        Sleep(1000);
        system("cls");
    }
    printf("%s\n", arr2);
    return 0;
}

//Linux
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<unistd.h>
//int main() {
//    char arr1[] = "welcome to bit!!!!!!!";
//    char arr2[] = "*********************";
//    int right = strlen(arr2) - 1;
//    int left = 0;
//
//    while (left <= right) {
//        printf("%s\n", arr2);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++, right--;
//        sleep(1);
//        system("clear");
//    }
//    printf("%s\n", arr2);
//    return 0;
//}

#include <stdio.h>
//二分查找
int binarySearch(int* arr, int left, int right, int goal) {
    int mid = 0;
    if (arr[left] > arr[right]) {
        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] > goal) {
                left = mid + 1;
            }
            else if (arr[mid] < goal) {
                right = mid - 1;
            }
            else {
                return mid;
            }
        }
    }
    else if (arr[left] < arr[right]) {
        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] > goal) {
                right = mid - 1;
            }
            else if (arr[mid] < goal) {
                left = mid + 1;
            }
            else {
                return mid;
            }
        }
    }
    else {
        if (arr[left] == goal)return 10;
        return -1;
    }
    return -1;
}

int main2() {
    int arr[10] = { 0 }, goal, left, right;
    printf("按由小到大或由大到到小输入十个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
    printf("查找数字：");
    scanf("%d", &goal);
    int ret = binarySearch(arr, left, right, goal);
    if (ret == 10) {
        printf("下标0~9均符合要求\n");
    }else if (ret == -1) {
        printf("没有找到\n");
    }
    else {
        printf("下标是%d\n", ret);
    }
    return 0;
}



//猜数字
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>//Linux: #include<unistd.h>
void menu() {
    printf("********************\n"
        "*******1.play*******\n"
        "*******0.exit*******\n"
        "********************\n");
    return;
}

void game() {
    int val = rand() % 100 + 1;
    while (1) {
        printf("\033[32m请输入一个100以内的数字：\033[0m");
        int num = 0;
        scanf("%d", &num);
        if (num > val) {
            printf("\033[31m猜大了\n\033[0m");
        }
        else if (num < val) {
            printf("\033[31m猜小了\n\033[0m");
        }
        else {
            printf("\033[32m猜对了\n\033[0m");
            break;
        }
    }
    return;
}

int main1() {
    srand((unsigned)time(NULL));
    int flag = 0;
    while (1) {
        menu();
        printf("\033[32m请输入一个数字：\033[0m");
        scanf("%d", &flag);
        //整形表达式用switch
        switch (flag) {
        case 0: 
                printf("\033[31m       exit!!\n\033[0m");
                return 0;
        case 1: 
                game();
                break;
        default:
                printf("\033[31m输入错误\n\033[0m");
                break;
        }
        /*if (flag == 1) {
            game();
        }
        else if (!flag) {
            printf("\033[31m       exit!!\n\033[0m");
            break;
        }
        else {
            printf("\033[31m输入错误\n\033[0m");
        }*/
        Sleep(1000);//Linux:sleep(1);
        system("cls");//Linux:system("cls");
    }
    return 0;
}