/*Implement C program to read the height of a person and the print person is taller, dwarf, or average height person.*/

#include <stdio.h>
int main() {
    float height;
    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height);

    if (height < 150) {
        printf("Person is a dwarf.\n");
    } else if (height >= 150 && height <= 180) {
        printf("Person is of average height.\n");
    } else {
        printf("Person is tall.\n");
    }

    return 0;
}
