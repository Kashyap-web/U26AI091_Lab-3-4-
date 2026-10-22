#include<stdio.h>
int main()
{
    int a=0, b=0, i, n;
    
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(i%2==0)
    {
        a=a+i;
    }
    else
    {
        b=b+i;
    }
    printf("sum of even no.=%d\n",a);
    printf("sum of odd no.=%d\n",b);   
}