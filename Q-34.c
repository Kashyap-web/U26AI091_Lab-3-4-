#include<stdio.h>
int main()
{
    int f,f1,f2,n;
    f1=0;
    f2=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        f++;
        n--;
    }
    printf("The %dth Fibonacci number is: %d", n, f);
    return 0;
}