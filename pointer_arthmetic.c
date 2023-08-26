#include <stdio.h>
// #include <math.h>
// #include <windows.h>
// #include <stdlib.h>

int main()
{
    int age = 20;
    int *ptr = &age;
    printf("entered age adress size: %u\n", ptr);
    ptr++;
    printf("incresed by 4 adrees size: %u\n", ptr);

    char star = '*';
    char *pr = &star;
    printf("entered char value adrees size is:%u\n", pr);
    pr++;
    printf("incresed size: %u", pr);
    return 0;
}