/*Implement C program to convert feet to inches.*/

#include <stdio.h>
int main() {
    float feet, inches;
    printf("Enter the length in feet: ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("Length in inches: %.2f\n", inches);
    return 0;
}
