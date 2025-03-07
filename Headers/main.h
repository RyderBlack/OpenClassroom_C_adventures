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

// Enums :
typedef enum Volume Volume;
enum Volume {
    MUTE = 0, LOW = 10, MIDDLE = 50, HIGH = 100
};

// Prototype:
void initializeCoordinates(Coordinates* point);
#endif //MAIN_H
