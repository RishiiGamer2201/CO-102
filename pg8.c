/*Implement C program to find the remainder of two numbers without using modulus (%) operator.*/

#include <stdio.h>
int main() {
    int num1, num2, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Find remainder without using %
    remainder = num1 - (num1 / num2) * num2;

    printf("Remainder of %d and %d is %d\n", num1, num2, remainder);
    return 0;
}
