#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter number\n");
    while(1){
        scanf("%d",&num);
        if(num<0)
        {break;}
        
        sum+=num;

    }
    printf("the sum of number is %d",sum);
}
