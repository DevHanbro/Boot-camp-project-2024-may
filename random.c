#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main(){
   int n; 
   srand(time(NULL));
   n = rand() % 100;
   printf ("%d",n);
}