/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
      int a, b, c;
    
    printf("enter the variable a");
    scanf("%d",&a);
    printf("enter the variable b");
    scanf("%d",&b);
    printf("enter the variable c");
    scanf("%d",&c);
    
    
    if(a>b && a>c)
    printf("a is largest");
    if(b>a && b>c)
    printf("b is largest");
    if(c>a && c>b)
    printf("b is largest");
}
    
    
    
    
    
    
    
    