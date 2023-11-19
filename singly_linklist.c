#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL, *p, *q;

int insert_beg()
{
    int num;
    q = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &num);
    q->data = num;
    if (start == NULL)
    {
        q->next = NULL;
        start = q;
    }
    else
    {
        q->next = start;
        start = q;
    }
    return 0;
}

void insert_end()
{
    int num;
    q = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    q->data = num;
    q->next = NULL;
    if (start == NULL)
        start = q;
    else
    {
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("No elements found.\n");
    }
    else
    {
        p = start;
        while (p != NULL)
        {
            printf(" %d", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

int delete_end()
{
    if (start == NULL)
    {
        printf("List is empty...\n");
        return -1;
    }

    q = start;

    // Check if there's only one node in the list
    if (q->next == NULL)
    {
        printf("Deleted element: %d\n", q->data);
        free(q);
        start = NULL; // Update the start pointer
        return 0;
    }

    // Traverse the list to the second-to-last node
    while (q->next->next != NULL)
    {
        q = q->next;
    }

    // Now q is pointing to the second-to-last node
    printf("Deleted element: %d\n", q->next->data);
    free(q->next);
    q->next = NULL; // Update the next pointer of the second-to-last node to NULL

    return 0;
}

void delete_beg()
{
    if (start == NULL)
    {
        printf("link-list is already empty...\n");
    }
    else
    {
        q = start;
        start = start->next;
        printf("Deleted element is: %d\n", q->data);
        free(q);
    }
}
void search()
{
    int item, i = 0, flag;
    p = start;
    if (p == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (p != NULL)
        {
            if (p->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            p = p->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}
int main()
{
    int choice;

    do
    {
        printf("1. insert at the beginning\n2. insert at the end\n3. exit\n4. display\n5. delete at end\n6. delete at beginig\n7. search on the linklist\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            exit(0);
            break;
        case 4:
            display();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_beg();
            break;
        case 7:
            search();
            break;
        default:
            printf("Invalid choice....\n");
            break;
        }
    } while (choice != 7);

    return 0;
}
