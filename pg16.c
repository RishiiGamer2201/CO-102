/*Implement C program to print square, cube and square root of all numbers from 1 to N.*/
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);
    printf("Number\tSquare\tCube\tSquare Root\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i, i * i, i * i * i, sqrt(i));
    }
    return 0;
}