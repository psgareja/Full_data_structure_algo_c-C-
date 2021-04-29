char A[]="WELCOME"
int i=0;
for(i=0;A[i]!=='\0';i++){
    A[i]=A[i]+32;

}
printf("Case:",A);

2)
char A[]="WELcome"
int i=0;
for(i=0;A[i]!=='\0';i++){
    if(A[i]>=65&&A[i]<=90)
    {
         A[i]=A[i]+32;
    }
    else if(A[i]>=97 || A[i]<=122){
        A[i]=A[i]-32;
    }
   

}
printf("Case:",A);
