#include <stdio.h>
void main ()
{
    float a, b, c, sum, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3;
    printf("\n Sum = %.2f", sum);
    printf("\n Average = %.2f", average);
}
    