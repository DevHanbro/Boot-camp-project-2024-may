#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main(){
char a;
int n; 
   srand(time(NULL));
   n = rand() % 100;
   printf ("%d",n);
printf ("This is a standard rock, paper scissors game.\n");
printf ("Press R for Rock, P for paper and S for scissors\n");
printf ("Enter your choice:\n");
scanf ("%c",&a);
printf ("The entered data is: %c ",a);
}


   
