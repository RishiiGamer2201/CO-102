/*Implement C program to find cube of an integer number using two different methods:
1) without using pow () function and 2) using pow () function.*/

#include <stdio.h>
#include <math.h>
int main() {
    int num, cube_without_pow, cube_with_pow;

    // Method 1: Without using pow() function
    printf("Enter an integer number: ");
    scanf("%d", &num);
    cube_without_pow = num * num * num;
    printf("Cube of %d without using pow() function is: %d\n", num, cube_without_pow);

    // Method 2: Using pow() function
    cube_with_pow = pow(num, 3);
    printf("Cube of %d using pow() function is: %d\n", num, cube_with_pow);

    return 0;
}
