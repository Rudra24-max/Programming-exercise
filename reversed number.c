/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void main()
{
   int num, reversed = 0, digit, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
      while (num != 0)
      {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder;
        
         num = num / 10;
         
      }

    printf("Reversed Number = %d\n", reversed);

    
}