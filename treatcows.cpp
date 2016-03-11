#include<iostream>
using namespace std;
static int s=1;
static int sum=0;
static int x=0;
int fun(int a[],int f,int l,int n)
{
    int c,b;
    if (f==n-1 )
    {sum = s*a[f];
    return sum;}
    else if(l==0)
    {x=s*a[l];
    return x;}
    else
    {
        sum=sum +s*a[f];
        x=x+ s*a[l];
        s++;
        c=fun(a,f+1,l,n);
        b=fun(a,f,l-1,n);
        return (c>b)?c:b;
    }
}
int main()
{
int i,n,k;

cin >> n;
int a[n+1];
for(i=0;i<n;i++)
cin >> a[i];

int l=n-1;
int f=0,su;
su=fun(a,f,l,n);

cout << su;
}
