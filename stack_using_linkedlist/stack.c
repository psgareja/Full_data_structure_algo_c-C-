#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
}top=NULL;

void push(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Srack is Full\n");

    }
    else{
        t->data=x;
    t->next=top;
    top=t;

    }
    

}
int pop()
{   struct Node *t;
    if(top==NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);

    }
    return x;
}

int main()
{
    return 0;
}
void Display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}
