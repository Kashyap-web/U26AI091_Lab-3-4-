#include<stdio.h>
int main()
{
    int sales;
    float com;
    printf("enter the sales");
    scanf("%d",&sales);
    if(sales<=500)
    {
        com=sales*(.05);
        printf("commision is 5 percentange %f",com);
        
    }
    if(sales>500 && sales<=2000)
    {
        com=sales*(.1)+35;
        printf("commision is 10 per plus 35 %f",com);
        
    }
    if(sales>2000 && sales<=5000)
    {
        com=sales*(.12)+185;
        printf("commision is 12.5 per plus 185 %f",com);
    
    }
if(sales>5000)
    {
        com=sales*(.125);
        printf("commision is 12.5 per %f",com);
    
    }


    
}