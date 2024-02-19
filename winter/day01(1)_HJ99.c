#include <stdio.h>
#include <math.h>

int isSelf(int i)
{
    if(i == 0)
    {
        return 1;
    }
    int square = pow(i, 2);
    int digits = 0;
    int num = i;
    while(i)
    {
        i /= 10;
        digits++;
    }
    return square % (int)pow(10, digits) == num;
}

int main() {
    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 0; i <= n ; i++)
    {
        if(isSelf(i))
        {
           ans++; 
        }
    }
    printf("%d\n", ans);
    return 0;
}