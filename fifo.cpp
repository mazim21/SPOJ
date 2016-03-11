#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
    if( a> b && a>c)
        return a;
    if( b> a && b>c)
        return b;
    if( c> a && c>b)
        return c;

}

int pos(int a[],int i,int n,int num)
{
    int k,l,m;
    for(k=i;k<n;k++)
    {
        if(a[k]==num)
        {
            return k;
        }
    }
    return 100;

}

int main()
{
int fr[10],pag[10],n,i,j,k,f;

cout << "numbr of pages";
cin >> n;

cout << "\nnumbr of frames";
cin >> f;

cout << "seq";
for(i=0 ; i<n ;i++)
    cin >> pag[i];

for(i=0;i<f;i++)
    fr[i]=-1;
k=0;

for(i=0;i<f;i++)
{
    fr[i]=pag[i];
    for(j=0;j<f;j++)
    cout << fr[j]<<"\t";
    cout << "\n";
}
int flag;
int a,b,c,d;
for(i=i;i<n;i++)
{
    flag=1;
    for(int l=0;l<f;l++)
    {
        if(fr[l]==pag[i])
        {flag=0;
        break;
        }
    }
    if(flag)
    {
        a=pos(pag,i,n,fr[0]);
    b=pos(pag,i,n,fr[1]);
    c=pos(pag,i,n,fr[2]);

    d=max(a,b,c);
    if(d==a)
        fr[0]=pag[i];
    else if(d==b)
        fr[1]=pag[i];
    else
        fr[2]=pag[i];
    }
     for(j=0;j<f;j++)
    cout << fr[j]<<"\t";
    cout << "\n";

}

}
