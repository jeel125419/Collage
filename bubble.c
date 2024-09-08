#include <stdio.h>

void bubble(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}

int main()
{
    int arr[] = {2, 6, 3, 1, 5, 23, 13, 10};
    int len = sizeof(arr) / sizeof(int);
    bubble(arr, len);
    printf("Sorted array is:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
