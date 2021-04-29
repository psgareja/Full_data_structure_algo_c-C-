#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int top;
    int size;
    int *S;
};

void create(struct Stack *st){
    printf("Enter Size");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int  *)malloc(st->size*sizeof(int));

}
void Display(struct Stack st){
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",st.S[i]);
    }
    printf("\n");

}
void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
        printf("Stack overflow");
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}
void Pop(struct Stack *st){
    int x=-1;
    if(st->top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        x=st->S[st->top--];
    }
    return x;
}

int Peek(struct Stack st, int index)
{
    int x=-1;
    if(st.top-index+1<0)
    {
        printf("Invalid value");
    }
    else
    {
        x=st.S[st.top-index+];

    }
    return x;
}
int isEmpty(struct Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack st)
{
    return st.top==st.size-1;

}
int stackTop(struct Stack st)
{
    if(!isEmpty(st)
    {
        return st.S[st.top];
    }
    else
    {
        return -1;
    }
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);

}