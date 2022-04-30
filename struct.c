#include <stdio.h>

// typedef gives an existing datatype a nickname

typedef struct
{
    char name[20];
    int age;
} user;

// using typedef to create a custom name for a data type
typedef struct
{
    int number;
    char name[10];
    float age;
} Doggie;

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

    Doggie dog1 = {2, "Scooby", 1.30};

    printf("%d\n", dog1.number);
    printf("%s\n", dog1.name);
    printf("%.2f\n", dog1.age);
};