int Eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0;
    for(i=0;postfix[i]!='\0',i++){
        if(isOperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {

            x2=pop();x1=pop();
            switch(postfix[i])
            {
                case '+':r=x1+x2;break;
                case '-':r=x1-x2;break;
                case '*':r=x1*x2;break;
                case '/':r=x1/x2;break;
            }
            push(r);
        }
    }
    return top->data;
}