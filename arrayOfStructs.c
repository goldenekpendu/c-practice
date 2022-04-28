#include <stdio.h>

struct Student
{
    char name[20];
    float gpa;
};

int main()
{

    struct Student student1 = {"Golden", 3.5};
    struct Student student2 = {"Musa", 2.5};
    struct Student student3 = {"Lexi", 4.0};
    struct Student student4 = {"Sandra", 3.2};

    // array of structs takes in structs elements as indices in array
    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s\n", students[i].name);
        printf("\n");

        printf("%.2f\n", students[i].gpa);
        printf("\n");
    }
};