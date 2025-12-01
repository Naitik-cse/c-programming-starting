#include <stdio.h>

int main() {
    int score1, score2;
    printf("Enter the score of 1st team: ");
    scanf("%d", &score1);
    printf("Enter the score of 2nd team: ");
    scanf("%d", &score2);
    if (score1 > score2) {
        printf("Team 1 is ahead by score of %d\n", score1);
    } else {
        printf("Team 2 is ahead by score of %d\n", score2);
    }
    return 0;
}
