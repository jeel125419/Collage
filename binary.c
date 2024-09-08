#include <stdio.h>

int binarySearch(int arr[], int size, int num)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[low] == num)
        {
            return low;
        }
        else if (arr[high] == num)
        {
            return high;
        }
        else if (arr[mid] > num)
        {
            high = mid - 1;
            low = low + 1;
        }
        else if (arr[mid] < num)
        {
            low = mid + 1;
            high = high + 1;
        }
        
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 23, 66, 100, 200, 400};
    int size = sizeof(arr) / sizeof(int);
    int num = 2;
    int search = binarySearch(arr, size, num);
    printf("the number is %d and the index is %d", num, search);

    return 0;
}
