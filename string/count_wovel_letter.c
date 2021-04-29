char A[]="How are you";
int i;
for(i=0;A[i]!=='\0';i++){
 if(A[i]='A' || 'a' || 'E' || 'e' || 'O' ||'o')   {
     vcount=vcount+1;
 }
 else if(A[i]>65 && A[i]<=90|| A[i]>97 &&A[i]<127){
     ccount+=1;
 }
}