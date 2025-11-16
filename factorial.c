/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void main()
{
    int n,fact,i;
    
    printf("enter the number");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    
    fact=fact*n;
    printf("factorial is %d",fact);
}
    
    
    
    
    
