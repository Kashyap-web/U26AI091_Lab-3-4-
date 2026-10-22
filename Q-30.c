#include<stdio.h>
int main()
{
    int num=0,a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        num=num*10 + b;
        a=a/10;
    }
    printf("reverse of number is:%d",num);
    return 0;
}