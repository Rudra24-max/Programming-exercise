/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


//Programming exercise//
#include <stdio.h>

int main()
{
    int length, breadth, perimeter, area;
    
    printf("enter lengh of rectangle");
    scanf("%d",&length);
    
    printf("enter breadth of rectangle");
    scanf("%d",&breadth);
    
    perimeter= length + length + breadth + breadth;
    area= length*breadth;
    
    printf("\n%d",perimeter);
    printf("\n%d",area);
    
}
    