/*Implement C Program to print tables from numbers 1 to 20.*/
#include <stdio.h>
int main() {
    for (int num = 1; num <= 20; num++) {
        printf("Multiplication table of %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n"); // Print a newline for better readability between tables
    }
    return 0;
}