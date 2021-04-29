int count(struct Node *p){
    if(p==0)
        returb 0
    else    
        return count(p->next)+p->data;


}