void Reverse(struct Node *p)
{
    struct Node *temp;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p->next=NULL)
        {
            p=first;
        }

    }

}