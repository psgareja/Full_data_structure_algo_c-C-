#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*Head;

Void Create(int A[],int n){
    int i;
    struct Node *t,*last;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    for(i=1;i<n;i++){
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last=t;
    }

    void Display(struct Node *h){
        do{
            printf("%d",h->data);
            h=h->next;
        }
        while(h!=Head){
            printf("\n");

        }
    }
    int main(){
        int A[]={2,3,4,5,6};
        create(A,5);
        Display(Head);
        return 0;
    }


}
