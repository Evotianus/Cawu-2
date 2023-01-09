#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int age;
};

int main() {
    /*
        Student s1;

        strcpy(s1.name, "Felix");
        s1.age = 20;

        printf("%s - %d\n", s1.name, s1.age);

        int ages[] = {20, 15, 17};
        char names[][100] = {"Supandi", "Felix", "Nathasya"};
        Student students[3];

        for (int i = 0; i < 3; i++) {
            students[i].age = ages[i];
            strcpy(students[i].name, names[i]);
        }

        for (int i = 0; i < 3; i++) { 
            printf("%s - %d\n", students[i].name, students[i].age);
        }
    */


    /*
        Pointer and Array
        Struct and Array of Struct
    */

    /*
        int a = 5;
        int *b = &a;
        int **c = &b;

        printf("Address of a: %d\n", &a);
        printf("Value of a: %d\n", a);
        printf("\n");
        printf("Address of b: %d\n", &b);
        printf("Value of b: %d\n", b);
        printf("value of *b: %d\n", *b);
        printf("\n");
        printf("Address of c: %d\n", &c);
        printf("Value of c: %d\n", c);
        printf("value of *c: %d\n", *c);
        printf("value of **c: %d\n", **c);
    */


    // int scores[] = {100, 90, 95, 80};

    // int size = sizeof(scores) / sizeof(scores[0]);

    // for (int i = 0; i < size; i++) {
    //     printf("index %d: %d - %d\n", i, &scores[i], scores[i]);
    // }

    
    // Allocate Memory
    Student *sp1 = (Student *) malloc(sizeof(Student));
    strcpy(sp1->name, "Supandi");
    sp1->age = 5;

    printf("%s - %d\n", sp1->name, sp1->age);

    // Meta pake titik
    Student sp2;
    strcpy(sp2.name, "Supandi");
    sp2.age = 5;

    printf("%s - %d\n", sp2.name, sp2.age);


    int ages[] = {20, 15, 17};
    char names[][100] = {"Supandi", "Felix", "Nathasya"};
    Student *students[3];

    for (int i = 0; i < 3; i++) {
        students[i] = (Student*) malloc(sizeof(Student));
        students[i]->age = ages[i];
        strcpy(students[i]->name, names[i]);
    }

    free(students[1]);
    students[1] = NULL;

    for (int i = 0; i < 3; i++) {
        if (students[i] != NULL) {
            printf("%d. %s - %d\n", i, students[i]->name, students[i]->age);
        } else {
            printf("%d, No Value\n", i);
        }
    }

    return 0;
}