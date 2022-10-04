#include <stdio.h>
#include<conio.h>
#define size 5


struct queue{
    int data[size];
    int front;
    int rear;
};

void enqueue(struct queue *q){
    system("cls");
    if(q->rear == size-1 ){
        printf("Queue is Full");
    }
    else {
        printf("Please, Enter any valid integer to be Enqueued.");
        q->rear++;
        scanf("%d" , &q->data[q->rear]);
        printf("\nValue enqueued successfully!\n");
    }
    printf("\n\tEnter any key to continue!");
    getch();
}
void dequeue(struct queue *q){
    system("cls");
    int i;
    if(q->rear < q->front){
        printf("Queue is Empty");
    }
    else {
        for(i=q->front; i<=q->rear ;i++){
                q->data[i] = q->data[i + 1];
        }
        q->rear--;
        printf("Item Dequeued successfully\n");
    }
    printf("\n\tEnter any key to continue!");
    getch();
}
void display(struct queue q){
    system("cls");
    int i;
    for(i=q.front; i<=q.rear ;i++){
        printf("%d \n",q.data[i]);
    }
    printf("\n\tEnter any key to continue!");
    getch();
}

int main()
{
    int choice;
    struct queue q;
    q.rear = -1;
    q.front = 0;
    while(1)
    {
        system("cls");
        printf("******************* Queue *****************\n");
        printf("\t Enter Choice:\n \t1. Enqueue \n \t2. Dequeue \n \t3. Display \n \t4. Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            enqueue(&q);
            break;
            case 2 :
            dequeue(&q);
            break;
            case 3:
            display(q);
            break;
            case 4:
            exit(0);
            default:
                printf("Out of option!");
        }
    }
    return 0;
}
