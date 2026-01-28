/*Implement C program to check given number is divisible by A and B.*/

#include <stdio.h>
int main() {
    int num, A, B;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter two divisors A and B: ");
    scanf("%d %d", &A, &B);

    if (num % A == 0 && num % B == 0) {
        printf("%d is divisible by both %d and %d.\n", num, A, B);
    } else {
        printf("%d is not divisible by both %d and %d.\n", num, A, B);
    }

    return 0;
}
