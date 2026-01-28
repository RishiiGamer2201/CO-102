/*Implement C program to calculate the value of n P r .*/

#include <stdio.h>
int main() {
    int n, r, npr;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);
    if (r > n) {
        printf("Invalid input\n");
        return 1;
    }
    if (r == 0) {
        npr = 1;
    } else {
        int i;
        long long numerator = 1;
        for (i = 0; i < r; i++) {
            numerator *= (n - i);
        }
        npr = numerator;
    }
    printf("Value of %d P %d is: %d\n", n, r, npr);
    return 0;
}
