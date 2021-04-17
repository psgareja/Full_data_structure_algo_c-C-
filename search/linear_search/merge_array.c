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


void merge(struct Array *arr1,struct Array *arra2){
    int i,j,k;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<arra1->length&&j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
        arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->lrngth;i++){
        arr3->A[k++]=arr1->A[i];
    }for(;j<arr1->lrngth;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
    
}
   
int main(){
    struct Array arr;
    arr1={{2,3,4,5,6},10,5};
    struct Array arr2={{3,4,7,18,20},10,5};
    struct Array *arr3;


   
    
    Display(arr);
    return 0;

}