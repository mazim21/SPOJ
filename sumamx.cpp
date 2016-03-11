#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
main()
{
int i,j,n,s=0,l=0,k=0;

cin >> n;
int a[n][n];

for(i=0;i<n;i++)
{s=0;
for(j=0;j<n;j++)
{cin >> a[i][j];
s=s+a[i][j];}
k=max(s,k);
}

l=0;
for(i=0;i<n;i++)
{s=0;
for(j=0;j<n;j++)
s=s+a[j][i];
l=max(s,l);
}
cout << max(l,k);
}
