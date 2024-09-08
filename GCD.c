#include <stdio.h>
int gcd(int no1, int no2)
{
    int gcd;
    for (int i = 1; i <= no1 && i <= no2; i++)
    {
        if (no1 % i == 0 && no2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int main()
{
    int no1, no2;
    printf("Enter First no:");
    scanf("%d", &no1);
    printf("Enter Second no:");
    scanf("%d", &no2);

    printf("GCD of %d and %d is %d", no1, no2, gcd(no1, no2));

    return 0;
}
