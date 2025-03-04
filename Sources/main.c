#include <stdio.h>
#include <stdlib.h>


// Prototype:
int showArray(int *array, int size_array);

int main(int argc, char *argv[])
{

    int myArray[4] = { 11,22,33,44}, i = 0;

    showArray(myArray, 4);

    return 0;
}

int showArray(int array[], int size_array) {
    int i = 0;

    for (i = 0; i < size_array; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}



