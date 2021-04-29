p=first;
while(p){
    push(&stk1,p);

}
p=second;
while(p){
    push(&stk2,p);
}
while(staktop(stk1)==staktop(stk2)){
    p=pop(&stk1);pop(&stk2);

}
printf("%d",p->data);