#include<stdio.h>
int main()
{
    int con;
    float rate;
    printf("enter no. of unit ");
    scanf("%d",&con);
    if(con<=200)
    {
        rate=con*(.5);
        printf("charges %2f",rate);
        
    }
    if(con>210 && con<=400)
    {
        rate=con*(.65)+100;
        printf("charges %2f",rate);
        
    }
    if(con>401 && con<=600)
    {
        rate=con*(.8)+230;
        printf("charges %2f",rate);
    
    }
if(con>600)
    {
        rate=con*(125)+425;
        printf("charges %2f",rate);
    }


    
}
