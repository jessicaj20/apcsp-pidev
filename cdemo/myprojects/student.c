#include <stdio.h>
#include "student.h"

void printStudent(struct Student* student)
{
    printf("Student: -\n");
    printf("  First Name: %s\n", student->first);
    printf("  Last Name: %s\n" student->last);
    printf("  Age: %d\n", student->age);
    printf("  Student ID: %d\n", student->studentid);
}
