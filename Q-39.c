#include<stdio.h>
int main()
{
    int i,n,fact=1;
    float sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(float)i/fact;
    }
    printf("sum=%f",sum);
    return 0;
}