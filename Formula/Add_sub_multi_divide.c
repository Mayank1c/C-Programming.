#include <stdio.h>

int main()
{
    int no1, no2, add, subtract, multiply;
    float divide;

    printf("Enter two integers\n");
    scanf("%d%d", &no1, &no2);

    add = no1 + no2;
    subtract = no1 - no2;
    multiply = no1 * no2;
    
    //typecasting
    divide = no1 / (float) no2;

    printf("Sum = %d\n", add);
    printf("Difference = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %.2f\n", divide);

    return 0;
}