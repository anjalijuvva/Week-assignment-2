#include <stdio.h>
void main ()
{
    float C, F;
    printf("Enter the temperature in C: ");
    scanf("%f", &C);
    F = (C *( 9 / 5)) + 32;
    printf("Enter the temperature in F:" );
    scanf("%f", &F);
    C = (F - 32) * 5 / 9;
    printf("\n Temperature in C is %f", C);
    printf("\n Temperature in F is %C", F);
}