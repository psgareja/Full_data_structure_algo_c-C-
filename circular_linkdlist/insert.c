void Insert(struct Nodd *p,int index, int x){
    struct Node *t;
    int i;
    if(index<0 || index > count()){
        return ;
    }
    int Count(strict Node *p,int index,int x){
        int len=0;
        do{
            len++;
            p=p->next;
        }while(p!=Head);
        return len;
    }
    if(index==0){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        if(Head==NULL){
            Head=t;
            Head->next=Head;

        }
        else{
            while(p->next!=Head){
                p=p->next;
                p->next=t;
                t->next=Head;
                Head=t;
                


            }
        }
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->next=p->next;
            p->next=t;



        }
    }
}