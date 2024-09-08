#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int no;
    printf("Enter The Number You Want To Find Factorial:");
    scanf("%d", &no);
    printf("The Factorial Of %d is %d",no,fact(no));
    return 0;
}
