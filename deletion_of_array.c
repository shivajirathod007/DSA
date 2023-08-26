#include <stdio.h>

// Function to delete an element from an array
int deleteElement(int arr[], int size, int element)
{
    int found = 0; // To track if the element was found
    int i, j;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        // Shift elements to the left to overwrite the element to be deleted
        for (j = i; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        return size - 1; // Return the new size of the array
    }
    else
    {
        return size; // Element not found, return the original size
    }
}

int main()
{
    int n;
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = 10;
    printf("\n Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n enter the value to delete choose from the top: ");
    scanf("%d", &n);
    int elementToDelete = n;
    size = deleteElement(arr, size, elementToDelete);
    printf("\nArray after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
