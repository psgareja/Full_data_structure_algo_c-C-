void insert_sored(struct Node *p, int x){
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        forst=t;

    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;


        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;

        }
    }
}