#include<stdio.h>

struct Student
{
    int id;
    char name[30];
    int year;
    float gpa;
};

int main()
{
    struct Student Student1;
    struct Student Student2;
    struct Student Student3;
    struct Student Student4;

    printf("\nEnter details of student 1:");

    printf("\nEnter ID of student 1: ");
    scanf("%d", &Student1.id);
    printf("\nEnter Name of student 1: ");
    scanf("%s", &Student1.name);
    printf("\nEnter Year of student 1: ");
    scanf("%d", &Student1.year);
    printf("\nEnter CGPA of student 1: ");
    scanf("%f", &Student1.gpa);


    printf("\nEnter details of student 2:");

    printf("\nEnter ID of student 2: ");
    scanf("%d", &Student2.id);
    printf("\nEnter Name of student 2: ");
    scanf("%s", &Student2.name);
    printf("\nEnter Year of student 2: ");
    scanf("%d", &Student2.year);
    printf("\nEnter CGPA of student 2: ");
    scanf("%f", &Student2.gpa);


    printf("\nEnter details of student 3:");

    printf("\nEnter ID of student 3: ");
    scanf("%d", &Student3.id);
    printf("\nEnter Name of student 3: ");
    scanf("%s", &Student3.name);
    printf("\nEnter Year of student 3: ");
    scanf("%d", &Student3.year);
    printf("\nEnter CGPA of student 3: ");
    scanf("%f", &Student3.gpa);


    printf("\nEnter details of student 4:");

    printf("\nEnter ID of student 4: ");
    scanf("%d", &Student4.id);
    printf("\nEnter Name of student 4: ");
    scanf("%s", &Student4.name);
    printf("\nEnter Year of student 4: ");
    scanf("%d", &Student4.year);
    printf("\nEnter CGPA of student 4: ");
    scanf("%f", &Student4.gpa);


    printf("\nID of student 1: %d", Student1.id);
    printf("\nID of student 1: %s", Student1.name);
    printf("\nID of student 1: %d", Student1.year);
    printf("\nID of student 1: %f", Student1.gpa);

    printf("\nID of student 2: %d", Student2.id);
    printf("\nID of student 2: %s", Student2.name);
    printf("\nID of student 2: %d", Student2.year);
    printf("\nID of student 2: %f", Student2.gpa);

    printf("\nID of student 3: %d", Student3.id);
    printf("\nID of student 3: %s", Student3.name);
    printf("\nID of student 3: %d", Student3.year);
    printf("\nID of student 3: %f", Student3.gpa);

    printf("\nID of student 4: %d", Student4.id);
    printf("\nID of student 4: %s", Student4.name);
    printf("\nID of student 4: %d", Student4.year);
    printf("\nID of student 4: %f", Student4.gpa);


    return 0;
}