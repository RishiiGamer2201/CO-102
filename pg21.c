/*Implement C program to find the LCM (Lowest Common Multiple) of two integers.*/

#include <stdio.h>
int main() {
    int num1, num2, lcm, max;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Start from the maximum of num1 and num2
    max = (num1 > num2) ? num1 : num2;

    // Find LCM
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
