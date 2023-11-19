#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *start = NULL, *t, *q;

void insert_beg();
void delete_beg();

int main()
{
    int ch;
    do
    {
        printf("1=insert\n2=delete\n3=exit\n");
        printf("enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            break;

        case 2:
            delete_beg();
            break;

        case 3:
            exit(0);
            break;
        }
    } while (ch != 3);
    return 0;
}

void insert_beg()
{
    int num;
    t = (struct node *)malloc(sizeof(struct node));
    printf("enter the num you want to enter:");
    scanf("%d", &num);
    t->data = num;

    if (start == NULL)
    {
        start = t;
        t->prev = NULL;
        t->next = NULL;
    }
    else
    {
        t->next = start;
        t->prev = NULL;
        start->prev = t;
        start = t;
    }
}

void delete_beg()
{
    if (start == NULL)
    {
        printf("there is no data\n");
    }
    else
    {
        t = start;
        start = start->next;
        start->prev = NULL;
        free(t);
    }
}
