#include <stdio.h>

/*
Print Triangular Star Pattern and Reverse Traingular Star Pattern
*/

void printTriangular(int lines) //function to print Triangular Star Pattern
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

int printReverseTriangular(int lines) //function to print Reverse Triangular Star Pattern
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = lines; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int choice = 1;
    while (choice)
    {
        int num_lines = 0;
        printf("\nWhat pattern design you want to print? Press '0' to exit!\n 1) Triangular Star Pattern\n 2) Reverse Triangular Star Pattern\n");
        printf("\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2)
        {
            printf("\nHow many lines do you want to print?");
            printf("\nNo. of Lines: ");
            scanf("%d", &num_lines);
        }
        switch (choice)
        {
        case 0:
            printf("\nQuitting program......!\n");
            break;
        case 1:
            printTriangular(num_lines);
            break;
        case 2:
            printReverseTriangular(num_lines);
            break;
        default:
            printf("Please enter a valid choice!\n");
            break;
        }
    }
    return 0;
}