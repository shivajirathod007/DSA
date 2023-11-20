#include <stdio.h>

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int size, int index, int value)
{
    if (index < 0 || index > size)
    {
        printf("Invalid index for insertion.\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[index] = value;

    // Increase the size of the array
    size++;

    // Print the updated array
    printf("Array after insertion:\n");
    displayArray(arr, size);
}
 
void deleteElement(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        printf("Invalid index for deletion.\n");
        return;
    }

    // Shift elements to remove the element at the specified index
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;

    // Print the updated array
    printf("Array after deletion:\n");
    displayArray(arr, size);
}

int main()
{
    int size = 5;
    int arr[10] = {1, 2, 3, 4, 5};

    printf("Original array:\n");
    displayArray(arr, size);

    // Insertion
    int insertIndex, insertValue;
    printf("Enter the index where you want to insert: ");
    scanf("%d", &insertIndex);
    printf("Enter the value to insert: ");
    scanf("%d", &insertValue);
    insertElement(arr, size, insertIndex, insertValue);

    // Deletion
    int deleteIndex;
    printf("Enter the index from which you want to delete: ");
    scanf("%d", &deleteIndex);
    deleteElement(arr, size, deleteIndex);

    return 0;
}



