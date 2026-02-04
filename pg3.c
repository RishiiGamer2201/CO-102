/*Implement C program to check whether a character is VOWEL or CONSONANT.*/
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a VOWEL\n", ch);
            break;
        default:
            printf("%c is a CONSONANT\n", ch);
            break;
    }
    return 0;
}