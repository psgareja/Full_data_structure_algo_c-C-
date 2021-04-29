struct Node 
{
    int coeff;
    int exp;
    struct Node *next;

}

double Eval(int x){
    double sum=0.0;
    Node *q=p;
    while(q!=NULL){
         sum+=q->coeff* pow(x,q->exp);
   q->next;

    }
    return sum;
  



}