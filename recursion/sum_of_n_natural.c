
#include<stdio.h>
void fun(int n){
    if(n==0)
        return 0;
    else
        return fun(n-1)+n;
}

void main(){
    fun(55);
    return 0;
}