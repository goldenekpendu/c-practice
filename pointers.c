#include <stdio.h>

int x;
int y;

int main()
{
    x = 21;
    y = 5;
    int *z = &y;

    // I'm using the sizeof function to know how much byte each variable is taking up
    printf("The size of x: %d bytes\n", sizeof(x));
    printf("The size of y: %d bytes\n", sizeof(y));
    printf("The size of z: %d bytes\n", sizeof(z));

    printf("\n");

    // here I'm checking the values of the variables x, y and z
    printf("The value of x is : %d\n", x);
    printf("The value of y is : %d\n", y);
    printf("The value of *z is : %d\n", *z);

    printf("\n");

    // the %p prints the memory addres of the variables
    printf("the address of x: %p\n", x);
    printf("the address of y: %p\n", y);
    printf("the address of z: %p\n", z);

    // from results shown an int pointer is 8 bytes while a regular int is 4 bytes
}

// now to try a struct with pointers
