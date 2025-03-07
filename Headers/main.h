#ifndef MAIN_H
#define MAIN_H


// Structures:
typedef struct Student Student;
struct Student {
    char *name;
    char *surname;
    char *address;
    int age;
};
struct Person {
    char name[100];
    char surname[100];
    int age;
};
typedef struct Coordinates Coordinates;
struct Coordinates {
    int x;
    int y;
};

// Prototype:
void initializeCoordinates(Coordinates* point);
#endif //MAIN_H
