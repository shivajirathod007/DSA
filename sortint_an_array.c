#include <stdio.h>
void sort(int *arr, int size);
void display(int arr[], int size);
int main()
{
    int arr[] = {13, 56, 65, 0, 3.4};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    printf("\n");
    sort(arr, size);
    display(arr, size);
    return 0;
}
void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", arr[i]);
    }
}