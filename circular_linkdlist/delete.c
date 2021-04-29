int Delete(struct Node *p,int index){
    struct Node *q;
    int i,x;
    if(index <0 || index >Count(Head))
        return -1;
    if(index==1)
    {
        while(p->next!=Head)
            {
                p=p->next;
                x=Head->data;
                if(Head==p)
                {
                    free(Head);
                    Head=NULL;
                }
                else
                {
                    p->next=Head->next;
                    free(Head);
                    Head=p->next;
                }

            }

    }
    else
    {
        for(i=0;i<index-2;i++)
        {
            p=p->next;


        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);



    }
    return x;
}