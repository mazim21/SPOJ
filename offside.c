#include<stdio.h>
int divide(int *a,int l,int u);
void quicksort(int *a,int lower,int upper)
{    int i;
    if(upper >= lower)
    {       i=divide(a,lower,upper);
       quicksort(a,lower,i-1);
       quicksort(a,i+1,upper);
    }}
int divide(int *a,int l,int u)
{    int p,q,t,i;
    p=l+1;
    q=u;
    t=*(a+l);
    while(q>=p)
    {        while(*(a+p)<= t )
        p++;
        while(*(a+q)> t )
        q--;
        if(q>=p)
        {           i=*(a+p);
           *(a+p)=*(a+q);
           *(a+q)=i;
        }
    }    i=*(a+l);
    *(a+l)=*(a+q);
    *(a+q)=i;
    return q;
}



int main()
{
int a,d,at[15],de[15],i,j;

while(1)
{
scanf("%d",&a);
scanf("%d",&d);
if(a==0 && d==0)
break;
for(i=0;i<a;i++)
scanf("%d",&at[i]);
for(i=0;i<d;i++)
scanf("%d",&de[i]);
quicksort(at,0,a-1);
quicksort(de,0,d-1);
if(at[0] >= de[1] )
printf("N\n");
else
printf("Y\n");
}
return 0;
}
