#include<iostream>
#include<conio.h>
using namespace std;
long long int hl=0;
void merge(int *l,int ll,int *r,int rl,int *b)
{int i=0,j=0,k=0,f;
while(i<ll && j<rl)
{
if(l[i] <= r[j])
b[k++]=l[i++];
else
{
b[k++]=r[j++];
hl=hl+ll-i;
//while(l[f++]>=r[j-1] && f<ll)
  //  hl++;
}
}
while(i<ll)
b[k++]=l[i++];
while(j<rl)
 b[k++]=r[j++];
}

void mergesort(int *a,int len)
{int mid,x,y,k=0;
if (len <2)
return;
mid=len/2;
x=len-mid;
y=mid;
int left[y],right[x];

for(int i=0;i<mid;i++)
left[i]=a[k++];

for(int i=0;i<x;i++)
right[i]=a[k++];

mergesort(left,mid);
mergesort(right,x);
merge(left,mid,right,x,a);
}

main()
{
int a[200000],i,t,j,c=0,n;
cin >> t;

while(t--)
{
    hl=0;
cin >> n;
for(i=0;i<n;i++)
    cin >> a[i];

mergesort(a,n);
//for(i=0;i<n;i++) << hl;
//cout << a[i]<<"\t";
cout << hl;
}
}
