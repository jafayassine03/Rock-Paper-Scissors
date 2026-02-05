#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, yassine;
    int playerScore = 0, yassineScore = 0;
    int round = 1;
    char name[30];

    srand(time(NULL));

    printf("=====================================\n");
    printf("Hello!\n");
    printf("My name is Yassine and I wanna beat you at Rock Paper Scissors.\n");
    printf("=====================================\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nNice to meet you %s.\n", name);
    printf("Rules:\n");
    printf("- The game is 3 rounds minimum\n");
    printf("- Draws in a round are okay\n");
    printf("- After 3 rounds, if wins are equal, extra rounds are played\n");
    printf("- The winner takes the crown ??\n");

    while (1) { 
        printf("\n---------- ROUND %d ----------\n", round);
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Choose (1-3): ");
        scanf("%d", &player);

        if (player < 1 || player > 3) {
            printf("Invalid choice, try again.\n");
            continue;
        }

        yassine = (rand() % 3) + 1;

        printf("\n%s chose: ", name);
        if (player == 1) printf("Rock\n");
        else if (player == 2) printf("Paper\n");
        else printf("Scissors\n");

        printf("Yassine chose: ");
        if (yassine == 1) printf("Rock\n");
        else if (yassine == 2) printf("Paper\n");
        else printf("Scissors\n");

        if (player == yassine) {
            printf("Result: Draw! No one scores.\n");
        }
        else if (
            (player == 1 && yassine == 3) ||
            (player == 2 && yassine == 1) ||
            (player == 3 && yassine == 2)
        ) {
            playerScore++;
            printf("Result: %s wins this round\n", name);
        }
        else {
            yassineScore++;
            printf("Result: Yassine wins this round\n");
        }

        printf("Score -> %s: %d | Yassine: %d\n",
               name, playerScore, yassineScore);

        if (round >= 3) {
            if (playerScore > yassineScore || yassineScore > playerScore) {
                break; 
            }
        }

        round++;
    }

    printf("\n=====================================\n");
    if (playerScore > yassineScore)
        printf(" CONGRATS %s! You beat Yassine and take the crown \n"", name);
    else
        printf("Yassine dominates the game and takes the crown Better luck next time, ??\n");

    printf("Final Score : %s: %d | Yassine: %d\n",
           name, playerScore, yassineScore);
    printf("GG Bro.\n");
    printf("=====================================\n");

    return 0;
}

