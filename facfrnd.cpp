#include<iostream>
#include<map>
using namespace std;

main()
{
int i,j,c=0;
map<int ,int>m;
map<int ,int>p;
int t,k,n,a[500];
k=0,i=0;
cin >> t;
while(t--)
{
cin >> a[i++];
cin >> n;
for(int f=0;f<n;f++)
{
    cin >>k;
m[k]++;
}
}

int l;
j=1;
for(map<int,int>::iterator it=m.begin(); it!=m.end();it++)
{
    j=1;
    l=it->first;
for(k=0;k<i;k++)
{
    if(l==a[k])
    {
        j=0;
        break;
    }
}
    if(j)
    {
     p[l]++;
    }

}

for(map<int,int>::iterator it=p.begin(); it!=p.end();it++)
cout << it->first<<endl;
return 0;
}
