void Display(struct Node *p){
    if(p!=NULL){
        printf("%d",p->data);
        Display(p->next);
    }
}