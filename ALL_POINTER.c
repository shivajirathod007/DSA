#include <stdio.h>
// #include <math.h>
// #include <windows.h>
// #include <stdlib.h>

int main()
{
    int arr[6] = {12, 35, 6584, 54, 84, 54};
    int *p = arr;
    // int *ptr = 18;
    // printf("\nnormal arr : %d", &ptr);
    printf("\nby array : %d", arr[0]);
    printf("\nby the pointer *(arr + 0): %d", *(arr + 0));
    printf("\n by the pointer *(p+0): %d", *(p + 0));
    printf("\n");
    printf("\n nonincredable vale= %p", p);
    p++; // it will incerease the integer by thier size of integer
    printf("\n incredable value ptr++= %p", p);
    // printf("\nincresed %d ", &arr);
    // for (int i = 0; i <= 6; i++)
    // {
    //     printf("%d\t", *(arr + i));
    // }

    printf("\narr+1 = %d", arr + 1);
    printf("\n&arr+1 = %d", &arr + 1);
    printf("\n&arr[1]+1 =  %d", &arr[1] + 1);
    return 0;
}