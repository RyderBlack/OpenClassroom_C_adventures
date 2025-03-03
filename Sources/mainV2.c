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


// Prototype:
double aireRectangle(double width, double height);

int main(int argc, char *argv[])
{
    printf("Rectangle de width 5 et height 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de width 2.5 et height 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de width 4.2 et height 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

    return 0;
}


double aireRectangle(double width, double height)
{
    return width * height;
}
