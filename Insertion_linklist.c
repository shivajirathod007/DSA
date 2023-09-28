#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

struct node *insertAtbegning(struct node *head, int data);
struct node *insertAtposition(struct node *head, int data, int position);
struct node *display(struct node *);
struct node *insertend(struct node *head, int data);

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 69;
    head->next = second;

    second->data = 35;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    printf("Real data: ");
    display(head);

    head = insertAtbegning(head, 356);
    printf("\n\nAfter inserting at the beginning: ");
    display(head);

    head = insertAtposition(head, 36, 2);
    printf("\n\nAfter inserting at position(2): ");
    display(head);

    head = insertend(head, 365);
    printf("\n\nAfter inserting at the end: ");
    display(head);

    return 0;
}

struct node *insertAtbegning(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data; // Set the data value
    ptr->next = head;
    return ptr;
}

struct node *insertAtposition(struct node *head, int data, int position)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != position - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nElement is: %d", ptr->data); // Print the data
        ptr = ptr->next;
    }
    return ptr;
}
