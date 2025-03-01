#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int doubling(int num)
{
  int result = 0;

  result = num * 2;
  return result;
}

int main(int argc, char *argv[]) {

    int enteredNumber = 0, doubledNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &enteredNumber);

    doubledNumber = doubling(enteredNumber);
    printf("Doubled number is: %d\n", doubledNumber);


    return 0;
}

