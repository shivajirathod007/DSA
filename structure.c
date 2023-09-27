#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
typedef struct structure
{
    int block;
    int house;
    char city[50];
    char state[100];
} add;
void pr(struct structure add);
int main()
{
    add s1[5];
    printf("enter the info of person 1: city house state block ");
    scanf("%s", s1[0].city);
    scanf("%d", &s1[0].house);
    scanf("%s", s1[0].state);
    scanf("%d", &s1[0].block);

    printf("enter the info of person 2: city house state block");
    scanf("%s", s1[1].city);
    scanf("%d", &s1[1].house);
    scanf("%s", s1[1].state);
    scanf("%d", &s1[1].block);

    pr(s1[0]);
    pr(s1[1]);
    return 0;
}
void pr(struct structure add)
{
    printf("adress is of 1st no: %d %d %s %s", add.block, add.house, add.city, add.state);
}
  




