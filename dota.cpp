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
        while(*(a+p)>= t )
        p++;

        while(*(a+q)< t )
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

main()
{
int t,d,n,c=0,m,i;
cin >> t;
int a[600];
int b[600];
while(t--)
{
c=0;
cin >> n;
cin >> m;
cin >> d;

for(i=0;i<n;i++)
{cin >> a[i];
if(a[i] > d)
{
b[c++]=a[i];
}
}
quicksort(b,0,c-1);
int z=1;
int l=0;
for(i=0;i<m;i++)
{
    b[l]= b[l]-d;
    l++;
    if(l==c)
        l=0;
}
for(i=0;i<c;i++)
{
    if(b[i] <= 0)
    {
        z=0;
        break;
    }
}

if(z)
    cout << "YES\n";
else
    cout << "NO\n";
}
return 0;
}

