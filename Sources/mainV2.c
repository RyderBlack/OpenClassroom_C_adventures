#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int doubling(int num)
{
  int result = 0;

  result = num * 2;
  return result;
}

void repeatAfterMe(int lineNumber)
{

    for (int i = 0 ; i < lineNumber ; i++)
    {
        printf("I am the one and only C master\n");
    }
}



int main(int argc, char *argv[]) {

    // int enteredNumber = 0, doubledNumber = 0;
    //
    // printf("Enter a number: ");
    // scanf("%d", &enteredNumber);
    //
    // doubledNumber = doubling(enteredNumber);
    // printf("Doubled number is: %d\n", doubledNumber);

    repeatAfterMe(10);
    return 0;
}

