#include <stdio.h>

int main() {
    char letter;
    printf("Input the letter: ");
    scanf(" %c", &letter);
    if (letter == 'a' || letter == 'i' || letter == 'e' || letter == 'o' || letter == 'u') {
        printf("Letter is vowel\n");
    } else {
        printf("Letter is consonant\n");
    }
    return 0;
}
