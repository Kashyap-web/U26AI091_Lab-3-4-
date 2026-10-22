#include<stdio.h>
int main()
{
    int a,b,num=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        num+=b;
        a=a/10;
    }
    printf("sum of individual num is:%d",num);
    return 0;
}