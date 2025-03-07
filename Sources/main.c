#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
// Prototype:


int main(int argc, char *argv[])
{
    Student student;
    student.name = "John";
    student.surname = "Doe";
    student.address = "123 rue de la Paix";
    student.age = 18;

    printf("The student named %s %s, %d years old, lives in %s.\n", student.name, student.surname, student.age, student.address);
    return 0;
}








