#include <stdio.h>

int power(int no, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else if (pow < 0)
    {
        return -1;
    }

    else
    {
        return no * power(no, pow - 1);
    }
}

int main()
{
    int no, pow;
    printf("Enter The No:");
    scanf("%d", &no);
    printf("Enter The Power:");
    scanf("%d", &pow);

    printf("Your No is %d Power is %d and Answer is %d", no, pow, power(no, pow));

    return 0;
}
