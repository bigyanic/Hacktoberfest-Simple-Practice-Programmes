#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first=NULL, *last = NULL;

void peekTop()
{
    printf("\n%d is at the top of queue\n", first->data);
}
void peekEnd()
{
    printf("\n%d is at the last of queue\n", last->data);
}

void enqueue( int data )
{
    if(first == NULL)
    {
        first = (struct Node *)malloc(sizeof(struct Node));
        last = (struct Node *)malloc(sizeof(struct Node));
        first->data = data;
        first->next = NULL;
        last = first;
    }
    else{
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        last->next = temp;
        last = temp;
    }
    printf("\n%d Enqueued to the queue ", data);
}

void dequeue()
{
    printf("\n%d Dequeued from the queue ", first->data);
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp = first;
    first = first->next;
    delete(temp);
}


int main()
{
    enqueue(3);
    enqueue(4);
    enqueue(5);
    peekEnd();
    peekTop();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}