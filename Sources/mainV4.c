#include <stdio.h>
#include <stdlib.h>


// Prototype:
void showArray(int array[], int size_array);
int arrSum(int array[], int size_arr);
double arrAvg(int array[], int size_arr);

int main(int argc, char *argv[])
{

    int myArray[4] = { 11,22,33,44};

    // showArray(myArray, 4);
    arrSum(myArray, 4);
    arrAvg(myArray, 4);
    return 0;
}

void showArray(int array[], int size_array) {
    int i = 0;

    for (i = 0; i < size_array; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int arrSum(int array[], int size_array) {
    int sum = 0;
    for (int i = 0; i < size_array; i++) {
        sum += array[i];
    }
    printf("sum = %d\n", sum);
    return sum;
}

double arrAvg(int array[], int size_array) {
    int sum = 0;
    for (int i = 0; i < size_array; i++) {
        sum += array[i];
    }
    double formatted_output = (double)sum / (double)size_array;
    printf("average = %f\n", formatted_output);
    return formatted_output;
}



