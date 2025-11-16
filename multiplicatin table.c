/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void main()
{
   int num, i=1;
   
   printf("enter the number");
   scanf("%d",&num);
   
   while(i<=10)
    {
        printf("%d*%d=%d\n",num,i,(num*i));
        i++;
    }
}