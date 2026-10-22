#include <stdio.h>
int main()
{
    int n;
    float x,y;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==1){
        y = x+1;
    }
    else if(n==2){
        y = 1+x/n;
    }
    else if(n==3){
        y = 1+x*n; 
    }
    else if(n>3||n<1){
        y = 1+n*x;
    }
    printf("The value of y is: %f\n",y);
return 0;
}