struct Node * LSearch(struct Node *p,int key){
    struct Node *q;
    while(p!=NULL){
        if(key==p->data){
            q-next=p->next;
            p->next=first;
            return p;

        }
        q=p;
        p=p->next;

    }
}