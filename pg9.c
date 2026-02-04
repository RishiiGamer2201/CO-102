/*Implement C program to print all uppercase alphabets using while loop.*/
#include <stdio.h>
int main() {
    char ch = 'A';
    printf("Uppercase alphabets from A to Z are:\n");
    while (ch <= 'Z') {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}