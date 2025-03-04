#include <stdio.h>
#include <stdlib.h>


// Prototype:


int main(int argc, char *argv[])
{

    int myArray[4];

    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    myArray[3] = 4;

    printf("myArray[1] = %d\n", myArray[1]);
    printf("myArray[1] = %d\n", *(myArray+1));
    return 0;
}





