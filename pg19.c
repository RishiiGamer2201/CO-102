/*Implement C program to calculate the distance between two cities from kilometers to meters, centimeters, feet and inches.*/

#include <stdio.h>
int main() {
    float kilometers, meters, centimeters, feet, inches;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;
    centimeters = meters * 100;
    feet = meters * 3.28084;
    inches = feet * 12;

    printf("Distance in meters: %.2f\n", meters);
    printf("Distance in centimeters: %.2f\n", centimeters);
    printf("Distance in feet: %.2f\n", feet);
    printf("Distance in inches: %.2f\n", inches);

    return 0;
}
