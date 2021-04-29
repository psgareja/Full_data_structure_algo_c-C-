struct Mtarix
{
    int *A;
    int n;

}
void Set(struct Mtarix *m,int i,int j, int x){
    if(i>=j){
        m->A[i*[i-1]/2+j-1]=x;

    }
}
void Get(struct Matrix m,int i, int j){
    if(i>=j)
        return A[i*(i-1)/2+j-1];
    else
        return 0;
}
void display(struct Matrix m){
    int i,j;
    for(i=1;i<m.n;++){
        for(j=1;j<m.n;j++){
            if(i>=j){
                printf("%d",m.A[i*(i-1)/2+j-1]);

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
    printf("enter Dimension.");
    scanf("%d",&m.n);
    m.n=(int *)malloc(m.n*(m.n+)/2 *sizeof(int));
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
    }
    
    printf("\n\n");
    display(m);
    
}