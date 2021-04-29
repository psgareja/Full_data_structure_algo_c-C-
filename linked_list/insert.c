void insert(struct Node *p,int index,int x){
    struct Node *t;

    if(index<0 || index >count(p)){
        return ;
    }
    t=(struct Node *)malloc(sizeof(struct Node))
    t->data=x;

    if(index==0){
        t->next=first;
        first=t;

    }
    else{
        for(int i=0;i<index-1;i++){
            t->next=p->next;
            p->next=t;
            
        }
    }
}