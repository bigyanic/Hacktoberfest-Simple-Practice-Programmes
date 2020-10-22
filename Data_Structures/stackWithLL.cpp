#include<stdio.h>
#include<stdlib.h>

int top = -1;

struct Node{
    int data;
    struct Node * next;
}*head = NULL;

void push( int x)
{
    if( head == NULL)
    {
        head = (struct Node *) malloc(sizeof(struct Node));
        head->data = x;
        head->next = NULL;
    }
    else{
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp ->data = x;
        temp->next = head;
        head = temp;
    }
    top++;
}

int listSize(struct Node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count++;
    }
    return count;
}

void pop()
{
    if(top == -1 )
    {
        printf("\nSTACK UNDERFLOW!!\n");
        return;
    }
    else{
        struct Node *temp;
        temp = head;
        head = head->next;
        delete(temp);
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("[ %d ]\n", p->data );
        p=p->next;
    }
    printf("\nReached the end of list\n\n");
}

int main()
{
    push(4);
    display(head);
    pop();
    display(head);
    return 0;
}