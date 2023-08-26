#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i, j;
    for (i = 0; i <= 10 - i; i++)
    {
        printf("enter the numer: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 10 - i; i++)
    {
        printf("\nenter the numer: %d", arr[i]);
    }

    return 0;
}