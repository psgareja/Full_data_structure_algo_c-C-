#include<stdio.h>
#include<stdlib.h>

struct Array{
int A[10]
int size;
int length;

};
void Display(struct Array arr){
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int LinearSearch(struct Array arr,int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.A[i])
            return i;
    }
    return -1;
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;


}
int ModifiedLinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i])
            swap(&arr->A[i],&arr->[i-1]);
            return i;
    }
    return -1;
}
int main(){
    struct Array arr;
    arr={{2,3,4,5,6},10,5};


   
    
    Display(arr);
    return 0;

}