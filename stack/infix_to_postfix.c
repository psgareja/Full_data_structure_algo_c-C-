int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;

    }
    else if (x=='*' || x=='\')
    {
        return 2;
    }
    return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='\')
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

char * InTOPost(char *infix)
{
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc(len+1*sizeof(char));
    while(infix[i]!=='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[i++]=infix(i++);

        }
        else
        {
            if(pre(infix[i]>pre(top->data)))
            {
                push(infix[i++]);

            }
            else
            {
                postfix([j++]==pop());
            }

            while(top!=NULL)
            {
                postfix[j++]=pop();

            }
            postfix[j]='\0';

        }
    }
}
int main()
{
    char *infix='a+b*c';
    char *postfixIntoPost(infix);
}