#include <stdio.h>

int i, j, choice = 0, top = -1;
int stack[5], n = 5;
void push();
void pop();
void show();
void main()
{

    // clrscr();

    printf("*********Stack operations using array*********");

    printf("\nThe size of stack is 5 ");

    printf("\n----------------------------------------------\n");
    while (choice != 4)
    {
        printf("\nChose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");

        printf("\n Enter your choice=");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            push();

            break;
        }
        case 2:
        {
            pop();

            break;
        }
        case 3:
        {
            show();

            break;
        }
        case 4:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("\nPlease Enter valid choice ");
        }
        };
    }
}

void push()
{
    int val;
    if (top == n - 1)
        printf("\n Stack is full");
    else
    {
        printf("\nEnter the value=");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    int data;
    if (top == -1)
        printf("\nThe stack is empty");
    else
    {
        data = stack[top];
        printf("\nElement deleted is %d", data);
        top = top - 1;
    }
}

void show()
{
    printf("\nThe elements of stack are=");
    for (i = top; i >= 0; i--)
    {
        printf("\t%d", stack[i]);
    }
    if (top == -1)
    {
        printf("\nStack is empty");
    }
}
