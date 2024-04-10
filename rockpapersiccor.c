#include<stdio.h>
#include <stdlib.h>
#include <time.h>



int gameResult(char computerChoice, char userChoice){
    if(computerChoice == userChoice){
        return 0; // match draw
    }
    else if ((computerChoice == 's' && userChoice == 'c') || (computerChoice == 'c' && userChoice == 'p') || ( computerChoice == 'p' && userChoice == 's'))
    {
        return -1; // computer won the game
    }

    else if ((computerChoice == 'c' && userChoice == 's') || (computerChoice == 'p' && userChoice == 'c') || ( computerChoice == 's' && userChoice == 'p'))
    {  
        return 1; // user won the game
    }  
    return -2;
}

void main(){
    
    int n;
    char userChoice,computerChoice;

    printf("Welcome to the Rock Paper Scissor game\n*******************************************\nType c for Scissor, p for paper and s for stone\n");
    printf("\nEnter your Choice: ");
    scanf("%c",&userChoice);

    srand(time(NULL));
    n= rand()%100;

    if(n<=33){
        computerChoice = 's';
    }
    else if (n>33 && n<=66){
        computerChoice = 'p';
    }
    else{
        computerChoice = 'c';
    }

    printf("Computers Choice: %c",computerChoice);

    int gameResultValue = gameResult(computerChoice, userChoice);

    if(gameResultValue == 0){
        printf("\n\nThe match is draw");
    }
    else if (gameResultValue == 1)
    {
        printf("\n\nYou won the game");
    }
    else {
        printf("\n\nYou lost the game");
    }
    
}