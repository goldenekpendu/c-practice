#include <stdio.h>

int age = 21;
char grade = 'A';
float gpa = 3.0;

int main()
{
    // format specifiers
    /*
    int = %d or %i
    char = %c
    float = %f
    memory address = %p


    will add more later on

    */

    printf("size of int: %d\n", sizeof(age));
    printf("\n");
    // printf("size of char: %s\n", sizeof(name[2]));
    printf("size of grade: %c\n", sizeof(grade));
    printf("\n");

    printf("size of float: %.2f\n", sizeof(gpa));
    printf("\n");

    printf("memory address of variable %p\n", age);

    // printf("size of double: %d\n", sizeof(trouble));
}