#include <stdio.h>

enum Day
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thur = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{
    enum Day today = Mon;

    // printf("Enter a number between 1 and 7\n");

    if (today == Sat)
    {
        printf("IT'S THE WEEKEND, relax");
    }
    else
    {
        printf("so sad, it is not the weekend");
    }
};

// enums are treated as integers not strings so we use the %d format specificer