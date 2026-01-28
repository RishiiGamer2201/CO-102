/*Implement C program to convert temperature from Fahrenheit to Celsius and vice versa.*/

#include <stdio.h>
int main() {
    float fahrenheit, celsius, temp;
    char choice;

    printf("Enter 'F' to convert Celsius to Fahrenheit or 'C' to convert Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        celsius = (temp - 32.0) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
