#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a[15],b[15],c[15],d[15];
int i,j,k,l,s;

for(i=0;i<8;i++)
{cin >> a[i];
b[i]=0;
}
k=0;
for(i=4;i<8;i++)
c[k++]=a[i];

while( a[0]!=-1 && a[1]!=-1 && a[2]!=-1 && a[3]!=-1 )
{
    i=(int) ceil((float)a[0]/(float)c[0]);
    s=i;
    j=(int) ceil((float)a[1]/(float)c[1]);
    s=(j>s)?j:s;
    k=(int) ceil((float)a[2]/(float)c[2]);
    s=(k>s)?k:s;
    l=(int) ceil((float)a[3]/(float)c[3]);
    s=(l>s)?l:s;

    for(i=0;i<4;i++)
    {
        b[i]=s*c[i];
    }

    for(i=0;i<4;i++)
    {
        d[i]= b[i] - a[i];
        if(d[i] < 0)
            d[i]=0;
    }


for(i=0;i<4;i++)
cout << d[i]<<" ";
cout << "\n";
for(i=0;i<8;i++)
{cin >> a[i];
b[i]=0;
}
k=0;
for(i=4;i<8;i++)
c[k++]=a[i];
}
return 0;
}
