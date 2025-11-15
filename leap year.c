/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void main()
{
    int year; 
    
    printf("enter the year");
    scanf("%d",&year);
    
    if(year%4==0)
    {printf("leap year\n");}
    else
    {printf("not a leap year");}
}
    
    