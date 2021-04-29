void Reverse(struct Node *p,struct Node *q){
    if(p){
        reverse(p,p->next)
        p->next=q;

    }
    else{
        first=q;
    }
}