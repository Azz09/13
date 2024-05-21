// student.h

#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

struct Student {
    char surname[MAX_NAME_LENGTH];
    char name[MAX_NAME_LENGTH];
    char gender;
    int age;
    char group[10];
    int math_grade;
    int physics_grade;
    int chemistry_grade;
};

void print_student(struct Student *student);
void increase_chemistry_grade(struct Student *student);

#endif /* STUDENT_H */
