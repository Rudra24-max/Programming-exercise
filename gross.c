/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


//Programming exercise//
#include <stdio.h>

int main() {
    float basic, da, hra, allowances, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter Dearness Allowance (DA): ");
    scanf("%f", &da);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter Other Allowances: ");
    scanf("%f", &allowances);

    gross = basic + da + hra + allowances;

    printf("\nGross Salary = %.2f\n", gross);

    return 0;
}

     