struct Mtarix
{
    int A[10];
    int n;

}
void Set(struct Mtarix *m,int i,int j, int x){
if(i==j){
    m->A[i-1]=x;

}
void Get(struct Matrix m,int i, int j){
    if(i==j)
        return A[i-1];
    else
        return 0;
}
void display(struct Matrix m){
    int i,j;
    for(i=0;i<m.n;++){
        for(j=0;j<m.n;j++){
            if(i==j){
                printf("%d",m.A[i-1]);

            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
}
int main(){
    struct Matrix m;
    Set(&,1,1,5);Set(&m,2,2,8);
    Get(m,2,2);
    display(m);
    m.n=4;
}