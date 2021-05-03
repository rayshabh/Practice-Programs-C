#include <stdio.h>
#include <stdlib.h>

/*
Generate Fibonacci series using both recursive and iterative approach.
*/
void fibonacci_Recursive(int range) //Function to calculate the fibonacci series recusively!
{
    static int prev_Val = 0, next_Val = 1, sum; //use of static variables and are initialised only once!
    if (range > 0)
    {
        sum = prev_Val + next_Val;
        printf("%d ", next_Val);
        prev_Val = next_Val;
        next_Val = sum;
        fibonacci_Recursive(range - 1); //recursive function call
    }
}

void fibonacci_Iterative(int range) //Function to calculate the fibonacci series iteratively!
{
    int prev_Val = 0, next_Val = 1, sum;
    printf("\nThe Fibonacci Series is: 0 ");
    for (int i = 0; i < range; i++) //use of for loop
    {
        sum = prev_Val + next_Val;
        printf("%d ", next_Val);
        prev_Val = next_Val;
        next_Val = sum;
    }
}

char repeatSelection() //Function to make decision whether to abort the program or continue
{
    char choice;
    printf("\n\nDo you want to calculate more fibonacci series?\n    1. Yes\n    2. No\n");
    printf("\nChoice: ");
    while ((getchar()) != '\n') //To avoid Input Buffer Misbehaviour
        ;
    scanf("%c", &choice);
    if (choice == '1')
        return choice;
    else if (choice == '2')
    {
        printf("Quitting  Program.........!\n");
        return 'q';
    }
}

char choiceSelection(char choice) //Function to decide which approach to choose for generating Fibonacci Series
{
    switch (choice)
    {
        int range;
    case '1': //For Iterative Approach
        printf("\nEnter the range for which you want to generate the series: ");
        scanf("%d", &range);
        fibonacci_Iterative(range); //calls Iterative Approach Function
        choice = repeatSelection(); //calls repeatSelection function
        while ((getchar()) != '\n') //To avoid Input Buffer Misbehaviour
            ;
        return choice;
        break;

    case '2': //For Recursive Approach
        printf("\nEnter the range for which you want to generate the series: ");
        scanf("%d", &range);
        printf("\nThe Fibonacci Series is: 0 ");
        fibonacci_Recursive(range); //calls Recursive Approach Function
        choice = repeatSelection(); //calls repeatSelection function
        while ((getchar()) != '\n') //To avoid Input Buffer Misbehaviour
            ;
        return choice;
        break;

    case 'q': //For quitting the program
    case 'Q': //For quitting the program
        printf("\n\nQuitting Program.........!\n");
        return 'q';
        break;

    default: //For invalid choices
        printf("\n\nPlease enter a valid choice!");
        return choice;
        break;
    }
}

int main()
{
    char choice;
    printf("\nGenerate Fibonacci series\n");
    do
    {
        printf("\nEnter the choice of approach you want to perform for generating fibonacci series. Press 'q' or 'Q' to exit.\n\n    1. Iterative Approach\n    2. Recursive Approach\n");
        printf("\nChoice: ");
        scanf("%c", &choice);
        while ((getchar()) != '\n') //To avoid Input Buffer Misbehaviour
            ;
        choice = choiceSelection(choice);
    } while (choice != 'q');
    system("pause"); //pause the output console
    return 0;
}