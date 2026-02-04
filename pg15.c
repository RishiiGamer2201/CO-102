/*Implement C program to print all Armstrong numbers from 1 to N.*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, num, originalNum, remainder, result, digits;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);
    for (num = 1; num <= n; num++) {
        originalNum = num;
        result = 0;
        digits = 0;

        // Count number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        // Calculate the sum of the power of each digit
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}