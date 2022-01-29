#include<stdio.h>
int main()
{
    long long int n,i,s;
    scanf("%lld", &n);
    i=1;
    s=0;
    while(i<=n)
    {
        s = i + s;
        i++;
    }
    printf("%lld\n", s);
    return 0;
}
