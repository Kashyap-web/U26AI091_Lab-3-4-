#include<stdio.h>
int main()
{
    int num,factor;
    printf("enter number");
    scanf("%d", &num);
    factor = 1;
    while(factor <= num)
    {
        if(num % factor == 0)
        {
            printf("%d ", factor);
        }
        factor++;
    }
    return 0;
}