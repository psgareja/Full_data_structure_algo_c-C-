void insertLast(int x ){
    node *t=new node;
    t->data=x;
    t->next=Null;
    if(first==NULL){
        first=last=t;

    }
    else{
        last->next=t;

        last=t;
    }


}