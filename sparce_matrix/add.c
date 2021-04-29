struct Element
{
    int i;
    int j;
    int x;


}
struct Sparse{
    int m;
    int n;
    int num;
    struct Element *ele;
}
void create(struct Sparce *s){
    int i;
    pritf("Enter dimentions");
    scanf("%d%d",&s->m,&s->n);
    printf("Number of non zero");
    scanf("%d",&s->num);
    s->ele=(struct Element)malloc(s->num*sizeof(struct Element));
    printf("Enter all non-zero element");
    for(i=0;i<s->num;i++){
        scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);


    }
}
void display(struct Sparse s){
    int i,j,k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j.=<s.n;j++){
            if(i==s.ele[k].i&&j==s.ele[j].j){
                printf("%d ",s.ele[k++].x);

            }else{
                printf("0 ");
            }
        }
    }
}

struct Sparce * add(struct Sparse *s1,struct Sparce *s2){
struct Sparce *sum;
int i,j,k;
i=j=k=0;
sum=(struct Sparce *)malloc(sizeof(struct Sparce));
sum->ele=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));

while(i<s1->num && j<s2->num){
    if(s1->ele[i].i<s2->ele[j].i)
        sum->ele[k]=s1->ele[i];
    else if(s1->ele[i].i>s2->ele[j].i)
        sum->ele[k++]=s1->ele[i++];
    else{
        if(s1->ele[i].j<s2->ele[j].j)
        sum->ele[k]=s1->ele[i];
    else if(s1->ele[i].j>s2->ele[j].j)
        sum->ele[k++]=s1->ele[j++];
    else{
        sum->ele[k]=s1->ele[i];
        sum->ele[k++]=s1->ele[i++].x+s2->ele[j++].x;


    }
    }


}
for(;i<s1->num;i++)sum->ele[k++]=s1->ele[i];
for(;j<s2->num;j++)sum->ele[k++]=s2->ele[j];
sum->m=s1->m;
sum->n=s1->n;
sum->num=k;
return sum;
}

int main(){
struct Sparce s1,s2,*s3;
create(&s1);
create(&s2);
s3=add(&s1,&s2);
printf("first matrix\n");
dislay(s1);
printf("Second matrix\n");
display(s2);
printf("Sum matrix");
display(*s3);
}
