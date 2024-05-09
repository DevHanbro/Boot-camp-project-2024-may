#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int game(char u, char computer)
{
    if (u == computer)
        return -1;
 
    if (u == 's' && computer == 'p')
        return 0;
 
            else if (u == 'p' && computer == 's') return 1;
 
    if (u == 's' && computer == 'r')
        return 1;

    else if (u == 'r' && computer == 's')
        return 0;
 
    if (u == 'p' && computer == 'r')
        return 0;
 
    else if (u == 'r' && computer == 'p')
        return 1;
}

int main(){
char computer;
char u;
char result;
int n; 
   srand(time(NULL));
   n = rand() % 100;
   printf ("%d",n);
printf ("This is a standard rock, paper scissors game.\n");
printf ("Press R for Rock, P for paper and S for scissors\n");
printf ("Enter your choice:\n");
scanf ("%c",&u);
printf ("The entered data is: %c ",u);
if (n<33 && n>66)
 {
   computer = 'p';
 }
 else if (n=0 && n>33)
 {
   computer = 'r';
 }
 else
 {computer = 's';}

result = game(u, computer);
 
    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
        printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",u, computer);
        return 0;
 
}


   
