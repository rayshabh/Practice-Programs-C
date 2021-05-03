#include <stdio.h>

/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 

(i) Only one disk can be moved at a time.
(ii) Each move consists of taking the upper disk from one of the stacks and placing it on top of    another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
(iii) No disk may be placed on top of a smaller disk.
*/
static int diskMovementCount = 0, functionCallsCount = 0;
int towerOfHanoi(int disks, char Left, char Middle, char Right)
{
    ++functionCallsCount; //counts the number of times towerOfHanoi() is called
    if (disks == 0)       //base condition
        return 0;
    else
    {
        towerOfHanoi(disks - 1, Left, Right, Middle); //recursive call
        printf("\nMove disk %d from %c -----> %c\n", disks, Left, Right);
        ++diskMovementCount;                          //counts the number of total disks movement done
        towerOfHanoi(disks - 1, Middle, Left, Right); //recursive call
    }
    return 0;
}

int main()
{
    int disks;
    char leftDisk = 'A', middleDisk = 'B', rightDisk = 'C'; //using three rods namely 'A', 'B' & 'C'.
    printf("\nTower of Hanoi Program\n");
    printf("\nEnter the number of disks in the first rod: ");
    scanf("%d", &disks);
    towerOfHanoi(disks, leftDisk, middleDisk, rightDisk);
    printf("\nNo of disks movements: %d", diskMovementCount);
    printf("\nNo. of total function calls: %d", functionCallsCount);
    return 0;
}