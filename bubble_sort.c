#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
void printarr(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 23, 15, 36, 15, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, size);
    bubble(arr, size);
    printf("\n");
    printarr(arr, size);
    return 0;
}