void pow(m,n){
    if(m==0){
        return 0;
    }
    else{
        return pow(m,n-1)*m;
    }
}