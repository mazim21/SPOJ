#include<iostream>
using namespace std;

int arr[100000];
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

int main()
{
int i,t,j;
int x,n,l,m,k;
cin >> n;
t=0;
j=0;
for(x=0;x<n;x++)
cin >> arr[x];
quicksort(arr,0,n-1);

l=arr[0]*arr[1];
m=arr[x-1]*arr[x-2];
k=(l>m)?l:m;
cout << k<<endl;

return 0;
}
