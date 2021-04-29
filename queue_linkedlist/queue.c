struct Node
{
    int data;
    int Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Queue is full");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        {
            front=rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue()
{
    int x=-1;
    struct Node *t;
    if(front==NULL)
    {
        printf("queue is Empty");
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n")
}