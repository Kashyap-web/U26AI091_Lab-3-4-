#include<stdio.h>
int main()
    {
       int a;
       printf("enter the value:");
       scanf("%d",&a);
       if(2%a!=0||3%a!=0||5%a!=0||7%a!=0)
       {
        printf("the number is not prime");
       }
       else if(a==1)
       {
       
       printf("the number is nither prime nor composite");
       }
       else 
       {
       printf("the number is prime");
       }
       return 0;
    }
