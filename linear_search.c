#include <stdio.h>
// #include<math.h>
// #include<windows.h>
// #include<stdlib.h>

int main()
{
    int val;
    int arr[] = {135, 646489, 646, 8614, 640, 6848964, 641, 646, 5, 23};
    // system();
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the : ");
    scanf("%d", &val);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            printf("element found  at index : %d ", i);
            found = 1;
            // break;
        }
        if (!found)
        {
            printf("elemet is not found..");
            break;
        }
    }
    return 0;
}