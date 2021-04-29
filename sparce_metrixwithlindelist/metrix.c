for(i=0;i<m;i++){
    p=A[i];
    for(j=0;j<n;j++){
        if(j==p->data){
            printf("%d",p->val);
            p=p->next;

        }
        else
        {
            printf("0");
        }
    }
}