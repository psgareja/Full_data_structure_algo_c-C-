int e(x,n){
    static double p=1,f=1;
    int r;
    if(n==0){
        return 0;
    }
    else{
        r=e(x,n-1)
        p=p*;
        f=f*n;
        return r+p/f;
        

    }
}