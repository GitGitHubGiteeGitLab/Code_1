/*************************************************************************
	> File Name: test_7_20.c
	> Author: 
	> Mail: 
	> Created Time: Thu 20 Jul 2023 07:47:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>//character type

int main()
{
    int ch = 0;
    while((ch=getchar()) != EOF)
    {
        if(islower(ch))
        {
            printf("%c\n", toupper(ch));
        }
        else
        {
            printf("%c\n", tolower(ch)); 
        }
        getchar();
    }
    return 0;
}

int main2(){
    int ch;
    while(~(ch = getchar())){
        if(isdigit(ch)){
            printf("%c是数字\n", ch);
        }else{
            printf("%c不是数字\n", ch);
        }
        getchar();
    }
}

int main1()
{
    int ch = 0;
    while(~(ch=getchar()))
    {
        //判断字母
        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        if(isalpha(ch))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
        //清理掉\n
        getchar();
    }
    return 0;
}
