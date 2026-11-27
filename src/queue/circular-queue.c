#include <stdio.h>
#define QUEUESIZE 5

struct queue
{
    int queue[QUEUESIZE];
    int front, rear;
};

struct queue q;

void insert(int value)
{
    int nextRear = (q.rear + 1) % QUEUESIZE;

    if (nextRear == q.front)
    {
        printf("Queue Overflow");
    }
    else
    {
        q.rear = nextRear;
        q.queue[q.rear] = value;
    }
}

void delete(){
    q.front = (q.front + 1) % QUEUESIZE;
}

void display()
{
    if (q.front == q.rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    int i = (q.front + 1) % QUEUESIZE;

    while (1)
    {
        printf("%d ", q.queue[i]);

        if (i == q.rear)
            break;

        i = (i + 1) % QUEUESIZE;
    }

    printf("\n");
}

int main()
{

    q.front = QUEUESIZE - 1;
    q.rear = QUEUESIZE - 1;

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    delete();
    display();
}