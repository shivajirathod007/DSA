#include <stdio.h>

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Perform counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        int output[n];
        int count[10] = {0};

        // Count occurrences of digits
        for (int i = 0; i < n; i++)
        {
            count[(arr[i] / exp) % 10]++;
        }

        // Calculate cumulative count
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }

        // Build the output array
        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Copy the sorted elements back to the original array
        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
