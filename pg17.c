/*Implement C program to print all leap years from 1 to N.*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);
    printf("Leap years from 1 to %d are:\n", n);
    for (int year = 1; year <= n; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }
    return 0;
}