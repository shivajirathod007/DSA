// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int a[6] = {16, 19, 20, 100, 110, 200};
    int high = 6;
    int low = 0;
    int mid = (low + high) / 2;
    int n;
    printf("enter the numbwe you want to search:");
    scanf("%d", &n);
    while (low <= high)
    {
        if (a[mid] == n)
        {
            printf("%d is found", n);
            break;
        }
        else if (n <= a[mid])
        {
            high = mid + 1;
        }
        else
        {
            low = mid - 1;
        }
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("%d is not found in the array");
    }
    return 0;
}