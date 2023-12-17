#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void en();
void de();
void show();

int rear, front = -1;
int queue[10];
int n = 10;

int main()
{
    int choice;
    // clrscr();
    while (1)
    {
        printf("1. enque()\n2. deque()\n3. show\n4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            en();
            break;
        case 2:
            de();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Exiting from the program....");
            Sleep(2000);
            // getch();
            exit(0);
        default:
            printf("Enter the corret choice..\n");
        }
    }
    return 0;
}

void en()
{
    int val;
    if (rear == n - 1)
        printf("Queue is already full.\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter the element to be inserted: ");
        scanf("%d", &val);
        rear = rear + 1;
        queue[rear] = val;
        printf("Value inserted successfully...\n");
    }
}

void de()
{
    if (front == -1 || front > rear)
        printf("Queue is already empty.\n");
    else
    {
        printf("Element removed as per the FIFO operation.\nRemoving...\n");
        // delay(5000);
        Sleep(2000);
        printf("Removed element: %d\n", queue[front]);
        front = front + 1;
    }
}

void show()
{
    char name[50];
    fflush(stdin);
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    strtok(name, "\n");

    printf("Checking you're listed in the Shivaji's database...\n");
    // delay(4000);
    Sleep(4000);
    if (strcmp(name, "Shubham") == 0 || strcmp(name, "Kedar") == 0)
    {
        printf("You're listed in Shivaji's database, %s.\n", name);
        printf("wait...\n");
        Sleep(2000);
        printf("You're now eligible to view the queue info.\n");

        if (front == -1)
        {
            printf("The queue is empty. Please insert elements first, %sji\n", name);
            Sleep(2000);
        }
        else
        {
            printf("Queue elements are: ");
            for (int i = front; i <= rear; i++)
            {
                printf("%d\t", queue[i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Can't find your name in Shivaji's database, so you can't access the queue.\n");
    }
}
