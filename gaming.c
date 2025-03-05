#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void guess_num(){

    //setting random number
    srand(time(0));
    int min=1,max=100;
    int c=min+rand()%(max-min+1);

    //counting guesses
    int guess=0;

    while(1){
        //getting value from user
        int ch;
        printf("Enter your guess:");

        //validating integer
        if(scanf("%d",&ch)!=1){
            printf("\nEnter valid number..!!!\n\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        guess++;
       // printf("\n");

        //checking number
        if(ch==c){
            printf("\nCongratulations....you win");
            printf("\nNumber of guesses : %d",guess);
            break;
        }
        else if (ch<c){
            printf("Think of higher number\n\n");
        }
        else if (ch>c){
            printf("Think of lower number\n\n");
        }
    }
}

void main(){
   // guess_num();
}