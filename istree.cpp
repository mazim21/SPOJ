#include<iostream>
using namespace std;
int main()
{
int e,n,t,x,y;
cin >> n;
cin >> e;
int a[n][1],i;
int k=0;
for(i=0;i<n;i++)
a[i][0]=0;

for(i=0;i<e;i++)
{cin >> x;
cin >> y;
a[x-1][0]=1;
a[y-1][0]=1;
}
for(i=0;i<n;i++)
{
if(a[i][0]==1)
k++;
}
if(n==1 && e==0)
{cout << "YES\n";
goto xy;
}
if(k==n && e==n-1)
cout <<"YES\n";
else
cout << "NO\n";
xy:
return 0;}
