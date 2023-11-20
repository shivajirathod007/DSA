#include <stdio.h>
// #include<math.h>
// #include<windows.h>
// #include<stdlib.h>

int main()
{
    int arr[] = {15, 84, 98, 97, 947, 6, 418, 15, 51};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // printf("%d",n);
    int left = 0;
    int mid;
    int right = n - 1;
    // system();
    int result = -1;
    int value;
    printf("enter the element to be search: ");
    scanf("%d", &value);
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == value)
        {
            result = mid;
            break;
        }
        if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (result == -1)
    {
        printf("element not found..");
    }
    else
    {
        printf("elemnt founf at the index %d: ", mid);
    }

    return 0;
}