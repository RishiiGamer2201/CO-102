/*Implement C program to print ODD numbers from 1 to N using while loop.*/
#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are:\n", n);
    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}