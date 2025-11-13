/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


//Programming exercise//
#include<stdio.h>

int main()
{
    float principal, rate, intrest, si;
    
    printf("enter principal");
    scanf("%f",&principal);
    
    printf("enter rate");
    scanf("%f",&rate);
    
    printf("enter intrest");
    scanf("%f",&intrest);
    
    
    si= principal*rate*intrest/100.0;
    printf("si is %f",si);
    
}