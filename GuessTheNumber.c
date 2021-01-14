#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int randomNum;
int userInput;

void generateRandomNum()
{
    srand(time(NULL));
    int randomNum = rand() % 10;
}

void welcomeMsg(){

    printf("Welcome to no gessing GAME\n");
    printf("Please enter no. n=between 1-10\n >>");
    generateRandomNum();
    scanf("%d", &userInput);
}
int main()
{
    _Bool isGameOver = false;

    welcomeMsg();
    while (!isGameOver)
    {
        if (userInput > randomNum)

        {
            printf("Youer number is greater , tray somthing smaller\n");
            scanf("%d", &userInput);
        }
        else if(userInput < randomNum)
        {
            printf("Your number is smaller, try somthing bigger\n");

        }
        else
        {
            printf("You guess it correct \n would you like t planeagane?");
            printf(" Type 'Y' to play or just hit enter to exit \n >> ");
            char userChoice;
            getchar();
            userChoice = getchar();
            if (userChoice == 'y' || userChoice == 'Y')
            {
                welcomeMsg();
            }
            else
            {
                printf("Bye Bye!...\n");
                isGameOver = true;
            }
            
            
                }
        
        

    }
}