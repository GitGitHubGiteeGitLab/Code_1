#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//"123456"
//strcmp �����ǱȽ��ַ����Ĵ�С��,ͷ�ļ�string.h
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
        printf("\033[32m���������룺\033[0m");
        getchar();
        scanf("%s", buffer);
        if (strcmp(password, buffer)) {
            printf("\033[31m����ʧ��!\n\033[0m");
            Sleep(1000);
            system("cls");
            continue;
        }
        printf("\033[32m��¼�ɹ�\n\033[0m");
        flag = 1;
        break;
    }
    if (!flag)printf("\033[31m�������������\n\033[0m");
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
//        printf("\033[32m���������룺\033[0m");
//        getchar();
//        scanf("%s", buffer);
//        if (strcmp(password, buffer)) {
//            printf("\033[31m����ʧ��!\n\033[0m");
//            sleep(1);
//            system("clear");
//            continue;
//        }
//        printf("\033[32m��¼�ɹ�\n\033[0m");
//        flag = 1;
//        break;
//    }
//    if (!flag)printf("\033[31m�������������\n\033[0m");
//    return 0;
//}


//��ʾ����ַ��������ƶ������м���

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
//���ֲ���
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
    printf("����С������ɴ󵽵�С����ʮ��������");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
    printf("�������֣�");
    scanf("%d", &goal);
    int ret = binarySearch(arr, left, right, goal);
    if (ret == 10) {
        printf("�±�0~9������Ҫ��\n");
    }else if (ret == -1) {
        printf("û���ҵ�\n");
    }
    else {
        printf("�±���%d\n", ret);
    }
    return 0;
}



//������
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
        printf("\033[32m������һ��100���ڵ����֣�\033[0m");
        int num = 0;
        scanf("%d", &num);
        if (num > val) {
            printf("\033[31m�´���\n\033[0m");
        }
        else if (num < val) {
            printf("\033[31m��С��\n\033[0m");
        }
        else {
            printf("\033[32m�¶���\n\033[0m");
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
        printf("\033[32m������һ�����֣�\033[0m");
        scanf("%d", &flag);
        //���α��ʽ��switch
        switch (flag) {
        case 0: 
                printf("\033[31m       exit!!\n\033[0m");
                return 0;
        case 1: 
                game();
                break;
        default:
                printf("\033[31m�������\n\033[0m");
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
            printf("\033[31m�������\n\033[0m");
        }*/
        Sleep(1000);//Linux:sleep(1);
        system("cls");//Linux:system("cls");
    }
    return 0;
}