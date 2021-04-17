int NCR(int n ,int r){
    if (n==0||r==0){
        return 1;
    }
    else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
}