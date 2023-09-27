// ham bana rahe circular queue to focus karo
#include <stdio.h>
// #include<math.h>
#include <windows.h>
#include <stdlib.h>
int data[10];
int rear = -1, front = -1;
void insert();
void delete();
void print();
int main()
{
    int ch;
    do
    {
        printf("\n1.insert\n2.delete\n3.display\n");
        printf("enter the choice: ");
        scanf("%d", &ch);
        // system();
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            print();
            break;
        case 4:
            printf("thanku exiting");
            for (int i = 0; i < 5; i++)
            {
                printf(".");
                Sleep(350);
            }
            exit(0);

        default:
            printf("invalid choice...");
            break;
        }
    } while (ch != 4);
    return 0;
}
void insert()
{
    int val;
    if ((rear + 1) % 10 == front)
    {
        printf("queue is aleardy full try delete & then try insert the value into the queue");
    }
    else
    {
        printf("enter the number to be inserted: ");
        scanf("%d", &val);
        if (rear == -1)
        {
            rear = front = 0;
            data[rear] = val;
        }
        else
        {
            rear = (rear + 1) % 10;
            data[rear] = val;
        }
    }
}
void delete()
{
    int v;
    if (rear == -1 && front == -1)
    {
        printf("queue is alerdy full...");
    }
    else
    {
        v = data[front];
        if (front == rear)
        {
            rear = front = -1;
        }
        else
        {
            front = (front + 1) % 10;
        }
        printf("element deleated: %d", v);
    }
}
void print()
{
    int temp = front;
    if (rear == -1 && front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    else
        printf("element are: ");
    do
    {
        printf("%d\t", data[temp]);
        temp = (temp + 1) % 10;

    } while (temp != (rear + 1) % 10);
    printf("\n");
}