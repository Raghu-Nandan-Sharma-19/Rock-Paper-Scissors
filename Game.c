// Including header files

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockPaperScissor(int userChoice, int coumputerChoice) {
    switch (userChoice)
    {
    case 1: 
    printf("You choose rock.\n");
    break;
    case 2:
    printf("You choose Paper.\n");
    break;
    case 3:
    printf("You choose Scissors.\n");
    break;
    }
    switch (coumputerChoice)
    {
    case 1: 
    printf("Computer choose rock.\n");
    break;
    case 2:
    printf("Computer choose Paper.\n");
    break;
    case 3:
    printf("Computer choose Scissors.\n");
    break;
    }
    if (userChoice == 1 && coumputerChoice == 2 || userChoice == 2 && coumputerChoice == 3 || userChoice == 3 && coumputerChoice == 1) {
        printf("Computer won!");
    } else if (userChoice == coumputerChoice) {
        printf("Both choose same. No one won.");
    } else if (userChoice > 3) {
        printf("It is an invalid input. Game cannot proceed further.");
    } else {
        printf("Congrats! you won the match.");
    }
}




// Main function
int main () {
    int userChoice, coumputerChoice;
    printf("Hello Sir, welcome to our rock, paper, scissors game.\n");
    printf("Enter 1 for Rock.\n2 for Paper.\n3 for scissors.\n");
    printf("Enetr your choice : ");
    scanf("%d", &userChoice);
    srand(time(0));
    int number = rand()%100-1;
    if(number < 33) {
        coumputerChoice = 1;
    } else if (number >= 33 && number < 66) {
        coumputerChoice = 2;
    } else if (number >= 66 && number <= 99) {
        coumputerChoice = 3;
    }
    int result = rockPaperScissor(userChoice, coumputerChoice);
}