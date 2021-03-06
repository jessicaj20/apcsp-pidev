#include <stdio.h>
#include <string.h>

struct Student {
  char first[100];
  char last[100];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("Student: -\n");
  printf("  First Name: %s\n", student->first);
  printf("  Last Name: %s\n", student->last);
  printf("  Age: %d\n", student->age);
  printf("  Student ID: %d\n", student->studentid);
}

int main(void)
{
  char input [50], first[50], last[50];
  int numstud, age, studentid;
  printf("How many students (up to 50) would you like to store?\n");
  fgets(input, 30, stdin);
  sscanf(input, "%d", &numstud);
  struct Student student[50];
  for (int i = 0; i < numstud; i++)
  {
        printf("What is your first name?\n");
        fgets(input, 30, stdin);
        sscanf(input, "%s", first);
        printf("What is your last name?\n");
        fgets(input, 30, stdin);
        sscanf(input, "%s", last);
        printf("What is your age?\n");
        fgets(input, 30, stdin);
        sscanf(input, "%d", &age);
        printf("What is your Student ID?\n");
        fgets(input, 30, stdin);
        sscanf(input,"%d", &studentid);
        strcpy(student[i].first, first);
        strcpy(student[i].last, last);
        student[i].age = age;
        student[i].studentid = studentid;
  }
  for (int i = 0; i < numstud; i++)
  {
       printStudent(&student[i]);
  }
}
