/*Implement C program to find gross salary of an employee.*/

#include <stdio.h>
int main() {
    float basic_salary, hra, da, gross_salary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    hra = 0.20 * basic_salary; // HRA is 20% of basic salary
    da = 0.10 * basic_salary;  // DA is 10% of basic salary

    gross_salary = basic_salary + hra + da;

    printf("Gross Salary of the employee: %.2f\n", gross_salary);
    return 0;
}
