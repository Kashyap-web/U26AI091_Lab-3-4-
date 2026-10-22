#include<stdio.h>
int main()
{
    int n,original,temp,rev=0;
    printf("enter number :");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(original==rev)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
}