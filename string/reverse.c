1)int main(){
    char A[]="python";
    char b[7];
    int i;
    for(i-0;A[i]!='\0';i++){
        i=i-1;
        for(j=0;i>=0;i--;j++){
            b[j]=A[i];
        }
        b[j]='\0';
    }
    printf("%s",b);
}

2) int main(){
    char A[]='python';
    int i,j;
    for(j=0;A[j]!='\0';j++){
        j=j-1;
        for(i=0;i<j;i++,j--)
            t=A[i];
            A[i]=A[j];
            A[j]=t;
    }
}