void fun(int n){
    if(n==0){
        return 1;
    }
    else{
        return fun(n-1)*n;
    }
}