/*************************************************************************
	> File Name: test_7_21.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Jul 2023 09:15:29 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	char arr[] = "hello C";
	memset(arr, 'c', 5);
	printf("%s\n", arr);
	return 0;
}

int main1(){
    bool i = 2;
    _Bool j = 2;
    _Bool k = true;
    if(true == 2)printf("true == 2\n");
    else printf("true != 2\n");
    if(true == 1)printf("true == 1\n");
    printf("bool i = 2 -> i == %d\n", i);
    printf("_Bool j = 2 -> j== %d\n", j);
    printf("_Boool k = true -> k == %d\n", k);
    return 0;
}
