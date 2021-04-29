void RDisplay(struct Node *h){
    static int flag=0;
    if(h!Head || flag==0){
        flag=1;
        printf("%d ",h->data);
        RDisplay(h->next);
    }
    flag=0;
}