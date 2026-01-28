/*Implement C program to read marks and print percentage and division.*/

#include <stdio.h>
int main() {
    int n, i;
    float marks, percentage, total_marks = 0.0, max_marks_per_subject;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    printf("Enter maximum marks per subject: ");
    scanf("%f", &max_marks_per_subject);

    for (i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks);          // use "%f" for float
        total_marks += marks;
    }

    // percentage = (obtained / total_possible) * 100
    percentage = (total_marks / (n * max_marks_per_subject)) * 100;

    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 80) {
        printf("Division: First Division\n");
    } else if (percentage >= 60) {
        printf("Division: Second Division\n");
    } else if (percentage >= 40) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
