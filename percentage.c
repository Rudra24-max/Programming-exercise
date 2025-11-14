/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &m3);
    printf("Enter marks for Subject 4: ");
    scanf("%d", &m4);
    printf("Enter marks for Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total * 100.0) / 500.0; // Assuming each subject is out of 100

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
