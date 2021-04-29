void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q=Q(int *)malloc(q->size*sizeof(int));


}

void enqueue(struct Queue,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("QUEue ful");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q)
{
    if(q->front==q->rear)
    {
        printf("Queue is full");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
}

void Display(struct Queue q)
{
    int i=q.front+1;
    do
    {
      printf("%d",q.Q[i];
      i=(i+1)%q.size;  
    } 
    while(i!=(q.rear+1)%q.size);
    printf("\n")
    
}