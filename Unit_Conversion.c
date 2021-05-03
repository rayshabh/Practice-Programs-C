#include <stdio.h>
#include <stdlib.h>

/*
Unit Conversion:

1) kms to miles
2) inches to foot
3) cms to inches
4) pound to kgs
5) inches to meters
*/

void displayConversion(float temp, float value, char *unit_1, char *unit_2) //to display the output
{
    printf("\n%.2f %s is equivalent to %.2f %s\n", value, unit_1, temp, unit_2);
}

float takeValue(char *unit_1) //takes unit's value for conversion
{
    float value;
    printf("\nEnter the value for conversion in %s: ", unit_1);
    scanf("%f", &value);
    return value;
}

int unitConversion(int choice)
{
    float value, temp;
    switch (choice)
    {
    case 0:
        printf("\nQuitting the Program.....!");
        return choice;
        break;

    case 1:; //kms to miles
        value = takeValue("kms");
        temp = value / 1.609;
        displayConversion(temp, value, "kms", "miles");
        printf("\nDo you want to perform more unit conversion?\nIf 'Yes', enter 1.\nElse, enter 0 to Exit!\n");
        printf("Choice: ");
        scanf("%d", &choice);
        return choice;
        break;

    case 2:; //inches to foot
        value = takeValue("inches");
        temp = value / 12.0;
        displayConversion(temp, value, "inches", "foot");
        printf("\nDo you want to perform more unit conversion?\nIf 'Yes', enter 1.\nElse, enter 0 to Exit!\n");
        printf("Choice: ");
        scanf("%d", &choice);
        return choice;
        break;

    case 3:; //cms to inches
        value = takeValue("cms");
        temp = value / 2.54;
        displayConversion(temp, value, "cms", "inches");
        printf("\nDo you want to perform more unit conversion?\nIf 'Yes', enter 1.\nElse, enter 0 to Exit!\n");
        printf("Choice: ");
        scanf("%d", &choice);
        return choice;
        break;

    case 4:; // pound to kgs
        value = takeValue("pound");
        temp = value / 2.205;
        displayConversion(temp, value, "pound", "kgs");
        printf("\nDo you want to perform more unit conversion?\nIf 'Yes', enter 1.\nElse, enter 0 to Exit!\n");
        printf("Choice: ");
        scanf("%d", &choice);
        return choice;
        break;

    case 5:; //inches to meters
        value = takeValue("inches");
        temp = value / 39.37;
        displayConversion(temp, value, "inches", "meters");
        printf("\nDo you want to perform more unit conversion?\nIf 'Yes', enter 1.\nElse, enter 0 to Exit!\n");
        printf("Choice: ");
        scanf("%d", &choice);
        return choice;
        break;

    default:
        printf("You have entered a wrong choice. Please re-enter your choice! ");
        break;
    }
}

int main()
{
    int choice = 1;
    do
    {
        printf("\nEnter the choice you want to perform. Enter '0' to exit!\n");
        printf("1) kms to miles\n2) inches to foot\n3) cms to inches\n4) pound to kgs\n5) inches to meters\n");
        printf("\nChoice: ");
        scanf("%d", &choice);
        choice = unitConversion(choice);
    } while (choice);
    system("pause"); //pause the output console
    return 0;
}