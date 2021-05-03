#include <stdio.h>
#define LENGTH sizeof(Arr) / sizeof(Arr[0]) //to get the lenght of the array

/*
This program reverses the array elements. 
Here the array elements reversal is done without using a temporary variable.

Example-
Arr[] = {1, 2, 3, 4, 5}

After reversing the content of the array "Arr", the new array "Arr" will be-
Arr[] = {5, 4, 3, 2, 1}
*/

void display(int *Arr, int length) //function for displaying the array elements
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void reverseArray(int *Arr, int length) //function for reversing the array elements
{
    for (int i = 0; i < (length / 2); ++i) //loop goes till the half of the lenght as the elements
    {                                      //beyond are already sorted!
        Arr[i] = Arr[i] + Arr[length - i - 1];
        Arr[length - i - 1] = Arr[i] - Arr[length - i - 1];
        Arr[i] = Arr[i] - Arr[length - i - 1];
    }
}

int main()
{
    int Arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("\nArray Reversal Program!\n");
    printf("\nOriginal Array :\n");
    display(Arr, LENGTH); //calls display () and prints the original array elements
    printf("\nNew Array :\n");
    reverseArray(Arr, LENGTH); //calls reverseArray()
    display(Arr, LENGTH);      //calls display () and prints the new array elements after reversing
    return 0;
}