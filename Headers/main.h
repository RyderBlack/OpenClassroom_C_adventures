#ifndef MAIN_H
#define MAIN_H

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
#endif //MAIN_H
