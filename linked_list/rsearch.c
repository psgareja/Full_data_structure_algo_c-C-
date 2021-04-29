struct Node * RSearch(struct Node *p,int key){
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RSearch(p->next,key);
    
}