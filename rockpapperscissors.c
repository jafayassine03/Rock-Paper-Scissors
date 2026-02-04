#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    srand(time(NULL));

    printf("Hello my name is Yassine and today I wanna challenge you on rock paper scissors\n");

    while (1) {
        printf("\n1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Choose (1-3): ");
        scanf("%d", &player);

        if (player < 1 || player > 3) {
            printf("Invalid choice, try again.\n");
            continue;
        }

        computer = (rand() % 3) + 1;

        printf("You chose: ");
        if (player == 1) printf("Rock\n");
        else if (player == 2) printf("Paper\n");
        else printf("Scissors\n");

        printf("Computer chose: ");
        if (computer == 1) printf("Rock\n");
        else if (computer == 2) printf("Paper\n");
        else printf("Scissors\n");

        
        if (player == computer) {
            printf("draw lets play again\n");
        }

        else if (
            (player == 1 && computer == 3) ||
            (player == 2 && computer == 1) ||
            (player == 3 && computer == 2)
        ) {
            printf("I won and we cant play again i won hhh\n");
            break;
        }
        else {
            printf("u won yassine angry but lets play again\n");
        }
    }

    return 0;
}

