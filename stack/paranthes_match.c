int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')'
            {
                if(top==NULL)
                {
                    return 0;
                }
                pop();

            }
    }
    if(top==NULL)
        return 1;
    else    
        return 0;
}