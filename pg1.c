/*Implement C program to read the grade of student print equivalent description.*/
#include <stdio.h>
int main() {
    char grade;
    printf("Enter the grade (A, B, C, D, F): ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent\n");
            break;
        case 'B':
        case 'b':
            printf("Good\n");
            break;
        case 'C':
        case 'c':
            printf("Average\n");
            break;
        case 'D':
        case 'd':
            printf("Below Average\n");
            break;
        case 'F':
        case 'f':
            printf("Failing\n");
            break;
        default:
            printf("Invalid grade entered.\n");
            break;
    }
    return 0;
}