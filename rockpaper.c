#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char u, char computer) {
    if (u == computer)
        return -1;

    if ((u == 's' && computer == 'p') || (u == 'p' && computer == 'r') || (u == 'r' && computer == 's'))
        return 1;
    else
        return 0;
}

int main() {
    char computer;
    char u;
    char result;
    int n;
    int  score=0;
    char play_again = 'y';

    srand(time(NULL));

    while (play_again == 'y' || play_again == 'Y') {
        n = rand() % 100;
        printf("This is a standard rock, paper scissors game.\n");
        printf("Press R for Rock, P for paper and S for scissors\n");
        printf("Enter your choice: ");
        scanf(" %c", &u); // added space before %c to ignore leading whitespace
        printf("The entered data is: %c\n", u);

        if (n <= 33)
            computer = 'r';
        
        else if (n <= 66)
            computer = 'p';
        else
            computer = 's';

        result = game(u, computer);

        if (result == -1) {
            printf("\n\n\t\t\t\tGame Draw!\n");
            score = score;
        } else if (result == 1) {
            printf("\n\n\t\t\t\tWow! You have won the game!\n");
            score +=5;
        } else {
            printf("\n\n\t\t\t\tOh! You have lost the game!\n");
            score -=3;
        }

        printf("\t\t\t\tYou choose : %c and Computer choose : %c\n", u, computer);
        printf("The score is %d\n",score);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    }

    printf ("Final score is: %d ", score);
    printf("Thanks for playing!\n");
    return 0;
}