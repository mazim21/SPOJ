#include<iostream>
using namespace std;

int divide(int *a,int l,int u);
void quicksort(int *a,int lower,int upper)
{
    int i;
    if(upper >= lower)
    {
       i=divide(a,lower,upper);
       quicksort(a,lower,i-1);
       quicksort(a,i+1,upper);

    }
}


int divide(int *a,int l,int u)
{
    int p,q,t,i;
    p=l+1;
    q=u;
    t=*(a+l);

    while(q>=p)
    {
        while(*(a+p)<= t )
        p++;

        while(*(a+q)> t )
        q--;

        if(q>=p)
        {
           i=*(a+p);
           *(a+p)=*(a+q);
           *(a+q)=i;
        }
    }
    i=*(a+l);
    *(a+l)=*(a+q);
    *(a+q)=i;

    return q;
}


int main()
{
int t,n,k,i,l;
cin >> t;
int a[20002],d[20000];
while(t--)
{
cin >> n;
cin >> k;
for(i=0;i<n;i++)
cin >> a[i];

quicksort(a,0,n-1);
i=0;
l=i+k-1;
int r=1000000000;
for(i=0;l<n;i++)
{
    d[i]=a[l]-a[i];
    l++;
    r=(d[i]>r)?r:d[i];
}

cout << r<<endl;
}
return 0;
}
