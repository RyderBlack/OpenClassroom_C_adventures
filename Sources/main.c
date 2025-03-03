#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



// Prototype:


int main(int argc, char *argv[])
{
    // int pointerMysteryNumber = NULL;
    const int MAX = 100, MIN = 1;
    srand( time(NULL) );
    int mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    int *pointerMysteryNumber = &mysteryNumber;

    printf("The number is: %d\n", mysteryNumber);
    printf("The number is: %d\n", *pointerMysteryNumber);

    return 0;
}






