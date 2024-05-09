#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char b;
char r;
char p;
char s;
char n;
void game();
int main(){
    int n;
    printf("Enter the number from the options below\n 1.Rules\n 2.Start\n ");
    scanf("%d",&n);
    switch(n){
        case 1: printf("1.Enter r for Rocks\n2.Enter p for paper\n3.Enter s for scissors\n When rock and scissors come into play,rock wins and gains 5 points\nWhen rock and paper come into play,paper wins and gains 5 points\nWhen paper and scissors come into play,scissors wins and gains 5 points\n\n\n");main();
                break;
        case 2:game();
            break;
        default: printf("Invalid Option");
        }
    return 0;
}

void game(){
    char a;
    printf("Enter the option from below\nr=>rock\np=>paper\ns=>scissors\n");
    int x=1;
    int score=0;
    while (x){
        printf("\nEnter the option:");
        scanf(" %c",&a);
        printf("The entered option is %c\n",a);
        srand(time(NULL));
        int n=rand()%3;
        if (n==0){
            b=r;
        }
        else if (n==1){
            b=p;
        }
        else if (n==2){
            b=s;
        }
        printf("Computer's choice is %c\n",b);
        if(a==b){
            score-=1;
        }
        else if(a==r && b==s||a==p && b==r||a==s && b==r){
            score+=5;
        }
        else if(a==r && b==p||a==p && b==s||a==s && b==r){
            score-=3;
        }
        else if (a==n){
            break;
        }
        else{
            printf("Option Unavailable");
            break;
            score+=0;
        }
        printf("\n\nYour current score is %d\n\n",score);
    }
}