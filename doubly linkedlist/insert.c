void Insert(struct node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index<0 || Length(p))
    {
        return ;
    }
    if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->p=t;
        first=t;


    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
           


        }
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next)
        {
            p->next->prev=t;
            p->next=t;

        }


    }
}