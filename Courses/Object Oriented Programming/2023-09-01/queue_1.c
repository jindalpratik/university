#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

struct CircularQueue
{
    int items[MAX_SIZE];
    int front, rear;
};

void initQueue(struct CircularQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

bool isEmpty(struct CircularQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

bool isFull(struct CircularQueue *queue)
{
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

void enqueue(struct CircularQueue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(queue))
    {
        queue->front = 0;
        queue->rear = 0;
    }
    else
    {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->items[queue->rear] = value;
}

int dequeue(struct CircularQueue *queue)
{
    int value;
    if (isEmpty(queue))
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return a sentinel value
    }
    value = queue->items[queue->front];
    if (queue->front == queue->rear)
    {
        // If only one element is in the queue
        queue->front = -1;
        queue->rear = -1;
    }
    else
    {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return value;
}

int main()
{
    struct CircularQueue queue;
    initQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    enqueue(&queue, 4);
    enqueue(&queue, 5);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}