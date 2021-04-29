void merge(struct Node *p,struct Node *q){
    struct Node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;




    }else{
        third=last=q;
        q=q->next;
        third->next=q;


    }
    while(p && q){
        if(p->data<q->data){
            last->p=next;
            p=p->next;
            last->next=NULL;



        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;


        }
    }
    if(p){
        last->next=p;

    }
    if(q){
        last->next=q;
    }
}