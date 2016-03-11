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
int n,i;
long int x[500000],j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%ld",&x[i]);

quicksort(x,0,n-1);
i=0;
while(i<n)
{
    if(x[i]==x[i+1])
        i=i+2;
    else
        break;
}
printf("%d\n",x[i]);
}

