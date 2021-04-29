#include<stdio.h>
struct Queue
{
    int size;
    int rear;
    int front;
    int *Q;
}

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));

}
void enque(struct Queue *q,int x){
    if(q->rear=q->size-1)
    {
        printf("Queue is FULL");

    }
    else{
        q->rear++;
        Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is Empty");
    }
    else{
        q->front++;
        x=q->Q[q->front];

    }
    return x;
}
void Display(struct Queue q)
{
    for(i=q.front+1;i<=q.rear;i++)
    {
        printf("%d",q.Q[i]);
    }
    printf("\n")
}

int main()
{
    struct Queue q;
    create(&q,5);


    return 0;
}