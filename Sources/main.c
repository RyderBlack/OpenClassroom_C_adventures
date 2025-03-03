#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



// Prototype:


int main(int argc, char *argv[])
{
    const int MAX = 100, MIN = 1;
    srand( time(NULL) );
    int mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;

    printf("The number is: %d\n", mysteryNumber);


    return 0;
}






