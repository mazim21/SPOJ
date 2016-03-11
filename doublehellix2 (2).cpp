#include<iostream>
#include<string>
using namespace std;

main()
{
int m,n,i,k;
int a[10001];
int b[10001];
int com[1000];
m=1;
cin >> m;
while( m!=0)
{
    int co=0;
for(i=0;i<m;i++)
cin >> a[i];

cin >> n;
for(i=0;i<n;i++)
cin >> b[i];
i=0;
int aa;
int x;
if(m > n)
{
    x=m;
    aa=0;
}
else
{
    x=n;
    aa=1;
}
int num,upper,lower,mid,l,xy;
long long int suma[10001];
long long int sumb[10001];
xy=0;
sumb[xy]=0;
suma[xy]=0;
for(i=0;i<x;i++)
{
    l=0;
    if(aa)
    {
         num=b[i];
         sumb[xy]= sumb[xy] + b[i];
    lower=0;  //of b
    upper=m-1;
for(mid=(upper+lower)/2;lower<=upper;mid=(upper+lower)/2)
{
if(a[mid]==num)
{l=1;
xy++;
sumb[xy]=0;
    break;}

else if( a[mid] > num )
upper=mid-1;

else if(a[mid]<num)
lower=mid+1;
}
        if(l)
        {
            com[co++]=a[mid];
        }

    }
    else
    {
        l=0;
        num=a[i];
        suma[xy]= suma[xy] + a[i];
    lower=0;  //of b
    upper=n-1;
for(mid=(upper+lower)/2;lower<=upper;mid=(upper+lower)/2)
{
if(b[mid]==num)
{l=1;
xy++;
suma[xy]=0;
    break;}

else if( b[mid] > num )
upper=mid-1;

else if(b[mid]<num)
lower=mid+1;
}
        if(l)
        {
            com[co++]=b[mid];
        }

}
} //= xy
if(aa)
{
suma[0]=0;
int abc,bc,cc;
abc=0;
bc=0;
cc=0;
for(i=0;i<m;i++)
{
    suma[bc]=suma[bc]+a[i];
    if(a[i]==com[cc])
    {
        cc++;
        bc++;
suma[bc]=0;
    }
}

for(i=i;i<m;i++)
suma[bc]=suma[bc]+a[i];
bc++;
xy++;
}
else
{
sumb[0]=0;
int abc,bc,cc;
bc=0;
cc=0;
for(i=0;i<n;i++)
{
    sumb[bc]=sumb[bc]+b[i];
    if(b[i]==com[cc])
    {
        bc++;cc++;
sumb[bc]=0;
    }
}
for(i=i;i<n;i++)
sumb[bc]=sumb[bc]+b[i];
bc++;
xy++;
}
long long int sum,y;
sum=0;
y=0;
for(i=0;i<xy;i++)
{
y=(suma[i] > sumb[i])?suma[i]:sumb[i] ;
sum=sum+y;
}
cout << sum<<endl;

cin >> m;
if(m==0)
    break;
}

}
