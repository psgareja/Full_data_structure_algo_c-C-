int TOH(int n,int a, int b,int c){
    if(n>0){
        return TOH(n-1,a,c,b);
        printf("(%d, %d)",a,c);
        return TOH(n-1,b,a,c);




    }
}
void main(){
    TOH(3,1,2,3);
}