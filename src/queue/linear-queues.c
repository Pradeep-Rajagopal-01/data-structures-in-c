
#include <stdio.h>
#define QUEUESIZE 5
//One limitation: Once rear reaches the last array position, 
 //you cannot reuse freed positions at the beginning until the queue becomes completely empty.
struct queues
{
    int queue[QUEUESIZE];
    int *front, *rear;
};

struct queues q;

void insert(int value)
{
    if (q.front == NULL)
    {
        q.front = &q.queue[0];
        q.rear = &q.queue[0];
        *q.front = value;
        printf("Added: %d\n", value);
    }
    else
    {
        if (q.rear != &q.queue[QUEUESIZE - 1])
        {
            q.rear++;
            *q.rear = value;
            printf("Added: %d\n", value);
        }
        else
        {
            printf("Queue Overflow! Cannot add %d\n", value);
        }
    }
}

void delete()
{
    if (q.front == NULL)
    {
        printf("Queue is empty. Nothing to delete.\n");
    }
    else
    {
        int deletedValue = *q.front;
        printf("Deleted: %d\n", deletedValue);

        if (q.front == q.rear)
        {
            q.front = NULL;
            q.rear = NULL;
        }
        else
        {
            q.front++;
        }
    }
}

void display()
{
    if (q.front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("\nFinal Queue: ");

    for (int *ptr = q.front; ptr <= q.rear; ptr++)
    {
        printf("%d ", *ptr);
    }

    printf("\n");
}

int main(void)
{
    insert(10);
    insert(20);
    delete();
    insert(50);
    insert(60);

    display();

    return 0;
}
