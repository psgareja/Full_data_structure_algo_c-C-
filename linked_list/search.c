struct Node * LSearch(struct Node *p,int key){
    while(p!=NULL){
        if(key==p->data)
            return p;
        p=p->next;

    }
    return NULL;
}