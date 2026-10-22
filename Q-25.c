#include<stdio.h>
int main()
{
    int i,a;
    printf("enter the value");
    scanf("%d",&a);
    i = 1;
    while(i <= 10)
    {
        printf("%d * %d = %d\n",a,i,i*a);
        i++;
    }
    return 0;
}