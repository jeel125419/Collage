#include <stdio.h>
void value(int x, int y)
{

    x = x + y;
    y = x - y - y;
    printf("Inside function %d,%d\n", x, y);
}

void refrence(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y - *y;
}

int main()
{
    int a = 4, b = 3;

    printf("Call By Value\n");
    value(a, b);
    printf("Outside function %d,%d\n", a, b);

    printf("Call By Refrence\n");
    refrence(&a, &b);
    printf("Outside function %d,%d\n", a, b);

    return 0;
}
