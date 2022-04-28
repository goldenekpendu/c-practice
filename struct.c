#include <stdio.h>

// typedef gives an existing datatype a nickname

typedef struct
{
    char name[20];
    int age;
} user;

int main()
{

    user person1 = {"Golden", 21};
    user person2 = {"Sylva", 20};
    user person3 = {"Anonymous", 35};

    printf("%s\n", person1.name);
    printf("%d\n", person1.age);

    printf("\n");

    printf("%s\n", person2.name);
    printf("%d\n", person2.age);

    printf("\n");

    printf("%s\n", person3.name);
    printf("%d\n", person3.age);

    printf("\n");
};