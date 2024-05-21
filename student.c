// student.c

#include <stdio.h>
#include "student.h"

void print_student(struct Student *student) {
    printf("Surname: %s\n", student->surname);
    printf("Name: %s\n", student->name);
    printf("Gender: %c\n", student->gender);
    printf("Age: %d\n", student->age);
    printf("Group: %s\n", student->group);
    printf("Math Grade: %d\n", student->math_grade);
    printf("Physics Grade: %d\n", student->physics_grade);
    printf("Chemistry Grade: %d\n", student->chemistry_grade);
    printf("\n");
}

void increase_chemistry_grade(struct Student *student) {
    if (student->chemistry_grade >= 2) {
        student->chemistry_grade--;
    }
}
