/*Implement C program to print all lowercase alphabets using while loop.*/
#include <stdio.h>
int main() {
    char ch = 'a';
    printf("Lowercase alphabets from a to z are:\n");
    while (ch <= 'z') {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}