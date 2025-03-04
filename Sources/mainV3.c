#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



// Prototype:
void triplePointer(int *pointerOnNumber);

int main(int argc, char *argv[])
{
    // int pointerMysteryNumber = NULL;
    // const int MAX = 100, MIN = 1;
    // srand( time(NULL) );
    // int mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    // int *pointerMysteryNumber = &mysteryNumber;
    //
    // printf("The number is: %d\n", mysteryNumber);
    // printf("The number is: %d\n", *pointerMysteryNumber);


    int number = 5;
    int *pointerBis = &number;
    triplePointer(pointerBis);

    printf("number is: %d\n", *pointerBis);

    return 0;
}

void triplePointer(int *pointerOnNumber) {
    *pointerOnNumber *= 3;
}




