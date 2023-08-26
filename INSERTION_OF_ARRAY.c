// #include <stdio.h>

// // Function to insert an element at a specified position in the array
// int insert(int arr[], int size, int position, int element)
// {
//     // Check if the position is valid
//     if (position < 0 || position > size)
//     {
//         printf("Invalid position for insertion.\n");
//         return size;
//     }

//     // Move elements to the right to create space for the new element
//     for (int i = size - 1; i >= position; i--)
//     {
//         arr[i + 1] = arr[i];
//     }

//     // Insert the element at the specified position
//     arr[position] = element;

//     // Return the new size of the array
//     return size + 1;
// }

// // Function to display the elements of the array
// void display(int arr[], int size)
// {
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int array[100] = {16, 65, 25, 65, 98};
//     int size = 0;
//     int choice, position, element;

//     do
//     {
//         printf("\nOperations on Array:\n");
//         printf("1. Insert an element\n");
//         printf("2. Display the array\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter the position for insertion: ");
//             scanf("%d", &position);
//             printf("Enter the element to insert: ");
//             scanf("%d", &element);
//             size = insert(array, size, position, element);
//             break;
//         case 2:
//             display(array, size);
//             break;
//         case 3:
//             printf("Exiting...\n");
//             break;
//         default:
//             printf("Invalid choice. Please try again.\n");
//             break;
//         }
//     } while (choice != 3);

//     return 0;
// }

#include <stdio.h>

// Function to insert an element at a specific position in the array
void insert(int arr[], int *size, int position, int value)
{
    if (*size >= position)
    {
        for (int i = *size; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        (*size)++;
        printf("Element inserted successfully!\n");
    }
    else
    {
        printf("Invalid position for insertion.\n");
    }
}

// Function to display the elements of the array
void display(int arr[], int size)
{
    if (size == 0)
    {
        printf("Array is empty.\n");
    }
    else
    {
        printf("Array elements: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[100]; // Array to hold elements
    int size = 0; // Current number of elements in the array

    // Insertion
    insert(arr, &size, 0, 5);  // Insert 5 at position 0
    insert(arr, &size, 1, 10); // Insert 10 at position 1
    insert(arr, &size, 2, 7);  // Insert 7 at position 1

    // Display
    display(arr, size);

    return 0;
}
