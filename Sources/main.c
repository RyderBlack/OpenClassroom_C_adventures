#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


int main(int argc, char *argv[])
{

    // Student student;
    // student.name = "John";
    // student.surname = "Doe";
    // student.address = "123 rue de la Paix";
    // student.age = 18;
    //
    // printf("The student named %s %s, %d years old, lives in %s.\n", student.name, student.surname, student.age, student.address);
    //
    // struct Person person01;
    // printf("What is your name?\n");
    // scanf("%s", person01.name);
    // printf("What is your surname?\n");
    // scanf("%s", person01.surname);
    // printf("What is your age?\n");
    // scanf("%d", &person01.age);
    // printf("Your name is %s %s and your age is %d\n", person01.name, person01.surname, person01.age);




    // Coordinates monPoint;
    // initializeCoordinates(&monPoint);

    // Volume music = HIGH;
    //
    // if ( music == HIGH ) {
    //     printf("Turn it down !\n");
    // }


    FILE* file01 = NULL;

    file01 = fopen("testingC.txt", "w+");

    if (file01 != NULL) {
        printf("File opened successfully\n");
        fputs("Welcome to this new file!", file01);
        fclose(file01);
    }
    else {
        printf("Error opening file\n");
    }

    return 0;
}

void initializeCoordinates(Coordinates* point)
{
    point->x = 0;
    point->y = 0;
}






