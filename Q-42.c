#include<stdio.h>
int main()
{
    int n,a;
    printf("enter the value :");
    scanf("%d",&a);
    if(2%a!=0&&3%a!=0&&5%a!=0&&7%a!=0)
       {
        printf("the number is prime");
       }
    else
    {
        printf("composite number");
    }  



}