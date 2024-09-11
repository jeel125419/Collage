#include <stdio.h>
int count = 0;

int towerOfHannoi(int no, char s, char h, char d)
{
    count++;
    if (no == 1)
    {

        printf("Transfer %d disc from %c to %c\n", no, s, d);
        return 1;
    }
    towerOfHannoi(no - 1, s, d, h);
    printf("Transfer %d disc from %c to %c\n", no, s, d);
    towerOfHannoi(no - 1, h, s, d);
    return 0;
}

int main()
{
    towerOfHannoi(3, 'S', 'H', 'D');
    printf("%d", count);
    return 0;
}
