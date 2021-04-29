void perm(char s[],int k ){
    static int A[10]={0};
    static int res[10];
    int i;
     if(s[k]=='\0'){
        res[k]=='\0';
        printf("%s",res);

    }else{
        for(i=0;s[i]!='\0';i++){
        if(A[i]==0){
            res[k]=s[i];
            a[i]=1;
            perm(s,k+1);
            a[i]=0;


        }

    }

}
    
    }
   