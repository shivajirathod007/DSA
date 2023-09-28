#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *ptr;
};
void traversal(struct node *pr);
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->ptr = second;
    second->data = 16;
    second->ptr = third;
    third->data = 15;
    third->ptr = fourth;
    fourth->data = 16;
    fourth->ptr = NULL;
    traversal(head);
}
void traversal(struct node *pr)
{
    while (pr != NULL)
    {
        printf("element are the : %d\n", pr->data);
        pr = pr->ptr;
    }
}