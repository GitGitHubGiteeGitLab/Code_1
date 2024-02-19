#include <math.h>
#include <stdio.h>

int isPrime(int i)
{
    for(int j = 2, J = sqrt(i) + 1; j < J; j++)
    {
        if(i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        if(isPrime(i))
        {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}