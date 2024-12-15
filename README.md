# Rock Paper Scissors Game in C

## Overview

This project implements a simple **Rock Paper Scissors game** in C. The user competes against the computer, which makes a random choice based on a generated number. The game determines the result (win, lose, or draw) based on the rules of Rock Paper Scissors.

---

## Features

1. **User Input**: The player chooses Rock, Paper, or Scissors.  
2. **Randomized Computer Choice**: The computer's choice is determined randomly.  
3. **Game Logic**: The game compares the choices and determines the winner.  
4. **Result Display**: The game announces if the player won, lost, or if the match was a draw.

---

## Code Structure

### **Functions**

| Function              | Description                                                                  |
|-----------------------|------------------------------------------------------------------------------|
| `gameResult()`        | Determines the result of the game based on the player and computer choices. |
| `main()`              | Handles user input, generates the computer's choice, and displays results.  |

---

## How to Use

1. Copy the code into a C file (e.g., `rock_paper_scissors.c`).  
2. Compile the file using a C compiler (e.g., `gcc rock_paper_scissors.c -o game`).  
3. Run the compiled program (e.g., `./game`).  
4. Follow the on-screen instructions to play the game.

### Example Code

```c
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int gameResult(char computerChoice, char userChoice){
    if(computerChoice == userChoice){
        return 0; // match draw
    }
    else if ((computerChoice == 'r' && userChoice == 's') || (computerChoice == 's' && userChoice == 'p') || ( computerChoice == 'p' && userChoice == 'r'))
    {
        return -1; // computer won the game
    }

    else if ((computerChoice == 's' && userChoice == 'r') || (computerChoice == 'p' && userChoice == 's') || ( computerChoice == 'r' && userChoice == 'p'))
    {  
        return 1; // user won the game
    }  
    return -2;
}

void main(){
    int n;
    char userChoice,computerChoice;

    printf("Welcome to the Rock Paper Scissor game\n*******************************************\n");
    printf("Type r for Rock, p for Paper and s for Scissor\n");
    printf("\nEnter your Choice: ");
    scanf("%c",&userChoice);

    srand(time(NULL));
    n= rand()%100;

    if(n<=33){
        computerChoice = 'r';
    }
    else if (n>33 && n<=66){
        computerChoice = 'p';
    }
    else{
        computerChoice = 's';
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
```

---

## Sample Output

```
Welcome to the Rock Paper Scissor game
*******************************************
Type r for Rock, p for Paper and s for Scissor

Enter your Choice: r
Computers Choice: p

You lost the game
```

---

## Customization

- Extend the game to track scores across multiple rounds.  
- Add more user-friendly input handling and validation.  
- Customize the game messages for a more interactive experience.

---
