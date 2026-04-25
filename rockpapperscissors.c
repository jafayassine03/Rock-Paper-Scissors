#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROUNDS 100

int main() {
    int player, yassine;
    int playerScore, yassineScore;
    int round;
    int maxRounds, winsNeeded;
    char name[30];
    char roundResults[MAX_ROUNDS][50];
    char playAgain;

    srand(time(NULL));

    printf("=====================================\n");
    printf("Hello!\n");
    printf("My name is Yassine and I wanna beat you at Rock Paper Scissors.\n");
    printf("=====================================\n");

    printf("Enter your name: ");
    scanf("%s", name);

    do {
        // Reset game
        playerScore = 0;
        yassineScore = 0;
        round = 1;

        printf("\nChoose game mode:\n");
        printf("1. Best of 3\n");
        printf("2. Best of 5\n");
        printf("3. Best of 7\n");
        printf("Choice: ");
        int mode;
        scanf("%d", &mode);

        if (mode == 1) maxRounds = 3;
        else if (mode == 2) maxRounds = 5;
        else if (mode == 3) maxRounds = 7;
        else {
            printf("Invalid choice. Defaulting to Best of 3.\n");
            maxRounds = 3;
        }

        winsNeeded = (maxRounds / 2) + 1;

        printf("\nFirst to %d wins takes the crown!\n", winsNeeded);

        while (playerScore < winsNeeded && yassineScore < winsNeeded) {

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
                snprintf(roundResults[round-1], 50, "Round %d: Draw", round);
            }
            else if (
                (player == 1 && yassine == 3) ||
                (player == 2 && yassine == 1) ||
                (player == 3 && yassine == 2)
            ) {
                playerScore++;
                printf("Result: %s wins this round\n", name);
                snprintf(roundResults[round-1], 50, "Round %d: %s wins", round, name);
            }
            else {
                yassineScore++;
                printf("Result: Yassine wins this round\n");
                snprintf(roundResults[round-1], 50, "Round %d: Yassine wins", round);
            }

            printf("Score -> %s: %d | Yassine: %d\n",
                   name, playerScore, yassineScore);

            round++;
        }

        printf("\n=====================================\n");
        if (playerScore > yassineScore)
            printf(" CONGRATS %s! You take the crown!\n", name);
        else
            printf("Yassine dominates and takes the crown.\n");

        printf("Final Score : %s: %d | Yassine: %d\n",
               name, playerScore, yassineScore);

        printf("\nRound History:\n");
        for (int i = 0; i < round - 1; i++) {
            printf("%s\n", roundResults[i]);
        }

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nGG Bro.\n");
    printf("=====================================\n");

    return 0;
}
