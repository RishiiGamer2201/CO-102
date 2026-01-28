/*Implement C program to calculate the value of n C r .*/

#include <stdio.h>
int main() {
    int n, r, ncr;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);
    if (r > n) {
        printf("Invalid input\n");
        return 1;
    }
    if (r == 0 || r == n) {
        ncr = 1;
    } else {
        int i;
        long long numerator = 1, denominator = 1;
        for (i = 0; i < r; i++) {
            numerator *= (n - i);
            denominator *= (i + 1);
        }
        ncr = numerator / denominator;
    }
    printf("Value of %d C %d is: %d\n", n, r, ncr);
    return 0;
}
