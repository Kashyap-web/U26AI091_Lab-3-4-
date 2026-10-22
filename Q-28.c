#include<stdio.h>
int main()
{
    int n,a,b,c,sum;
    printf("enter three digit number:");
    scanf("%d",&n);
    a = n/100;
    b = (n/10)%10;
    c = n%10;
    sum= a*a*a + b*b*b + c*c*c;
    if(sum==n)
    {
        printf("number is armstrong");
    }
    else
    printf("number is not armstrong");
    return 0;
}