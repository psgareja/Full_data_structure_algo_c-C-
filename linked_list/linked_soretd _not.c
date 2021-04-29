int IsSorted(struct Node *p){
    int x=-65636;
    while(p!=NULL){
        if(p->data<x){
            return 0;
            x=p->data;
            p=p->next;
        }
    }
    return 1;

}