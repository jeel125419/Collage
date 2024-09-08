#include <stdio.h>

int linear(int a[], int s, int t)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 7, 4, 2, 9, 1, 54, 32};
    int size = sizeof(arr) / sizeof(int);
    int target;

    printf("Enter The target You Want to find:");
    scanf("%d", &target);

    printf("Your target is %d and index is %d", target, linear(arr, size, target));

    return 0;
}
