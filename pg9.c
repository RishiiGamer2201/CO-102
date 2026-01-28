/*Implement C programs to swap two numbers using four different methods:
a. Using third variable
b. Without using third variable
c. Using X-OR operator
d. Using simple statement*/

#include <stdio.h>
int main() {
    int num1, num2, temp;

    // Method a: Using third variable
    printf("Method a: Using third variable\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Method b: Without using third variable
    printf("\nMethod b: Without using third variable\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Method c: Using X-OR operator
    printf("\nMethod c: Using X-OR operator\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Method d: Using simple statement (C99 feature)
    printf("\nMethod d: Using simple statement\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    (num1 ^= num2), (num2 ^= num1), (num1 ^= num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
