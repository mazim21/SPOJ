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
while( m!=0)
{
    int co=0;
cin >> m;
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
int suma[10001];
int sumb[10001];
xy=0;
sumb[xy]=0;
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
}
if(aa)
{sumb[xy-1]=sumb[xy]+sumb[xy-1];
suma[0]=0;
int abc,bc,cc;
abc=0;
bc=0;
cc=0;
for(i=0;i<co;i++)
{
    suma[bc]=suma[bc]+a[abc];
    if(a[abc]==com[cc])
    {
        bc++;cc++;
        cout << suma[bc]<<" ";
suma[bc]=0;
    }
    abc++;
}
for(i=abc;i<m;i++)
suma[bc]=suma[bc]+a[i];
cout << "\n"<<suma[bc];
bc++;
}
else
{
suma[xy-1]=suma[xy]+suma[xy-1];
sumb[0]=0;
int abc,bc,cc;
abc=0;
bc=0;
cc=0;
for(i=0;i<co;i++)
{
    sumb[bc]=sumb[bc]+b[abc];
    if(b[abc]==com[cc])
    {
        bc++;cc++;
sumb[bc]=0;
    }
    abc++;
}
for(i=abc;i<n;i++)
sumb[bc]=sumb[bc]+b[i];
bc++;
}
/*cout << "\na sm\n";
for(i=0;i<xy;i++)
{cout << suma[i]<<" ";}
cout << "\nb sm\n";
for(i=0;i<xy;i++)
{cout << sumb[i]<<" ";}*/
m=0;

cin >> m;
if(m==0)
    break;
cin >>n;
}

}
