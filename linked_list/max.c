int max(struct Node *p){
    int m=-1;
    while(p){
        if(p->data>m){
            m=p->data;
        }
        p=p->next;


    }
    return m;

}