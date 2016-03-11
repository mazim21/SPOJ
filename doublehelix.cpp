#include<iostream>
#include<string>
using namespace std;

main()
{
int m,n,i,k;
int a[10001];
int b[10001];
m=1;
while( m!=0)
{
cin >> m;
for(i=0;i<m;i++)
cin >> a[i];

cin >> n;
for(i=0;i<n;i++)
cin >> b[i];
i=0;
int j=0,mid,upper,lower;
int sum,num;

sum=0;

int aa;
aa=0;
int x;
x=(a[0] > b[0])?a[0]:b[0];
if(x==a[0])
{
aa=1;
}
while ( i!=m && j!=n )
{
    cout << x<<" ";
sum=sum+x;
if(aa)
{
    num=a[i];
    lower=0;  //of b
    upper=n-1;
for(mid=(upper+lower)/2;lower<=upper;mid=(upper+lower)/2)
{
if(b[mid]==num)
break;

else if( b[mid] > num )
upper=mid-1;

else if(b[mid]<num)
lower=mid+1;
}
if (lower > upper)
{
    x=a[i+1];
    i++;
    aa=1;
    goto cd;
}

if ( b[mid+1] > a[i+1] && mid+1 !=n )
{
    j=mid;
    x=b[mid+1];
    aa=0;
}
else
{
    x=a[i+1];
    i++;
    aa=1;
}
cd:
i=i;
}
else
{
    num=b[j];
    lower=0;  //of b
    upper=m-1;
for(mid=(upper+lower)/2;lower<=upper;mid=(upper+lower)/2)
{
if(a[mid]==num)
break;

else if( a[mid] > num )
upper=mid-1;

else if(a[mid]<num)
lower=mid+1;
}

if (lower > upper)
{
    x=b[j+1];
    j++;
    aa=0;
    goto ab;
}
if ( a[mid+1] > b[j+1] && mid+1 !=m )
{
    i=mid;
    x=a[mid+1];
    aa=1;
}
else
{
    x=b[j+1];
    j++;
    aa=0;
}
ab:
j=j;
}

}
if(aa==1)
{
    for(i=i;i<m;i++)
        sum=sum+a[i];
}
else
{
    for(j=j;j<n;j++)
        sum=sum+b[j];
}

cout << sum<<endl;
cin >>m;
if(m==0)
break;
cin >>n;

}
}
