int Delete(struct Node *,int index){
    struct Node *q;
    int x=-1,i;
    if(index<1 || index>Length(p))
    {
        return -1;
    }
    if(index==1)
    {
        first=first->next;
        if(first)first->prev=NULL;
        x=p->data;
        free(p);


    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;


        }
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;

        x=p->data;
        free(p);

    }
    return x;

}