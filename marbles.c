#include<stdio.h>

int main()
{
int t,i,j,n,k,z;
long long v;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%d",&k);
n=n-1;
k=k-1;
z=n-k;
v=1;
j=(z<k)?z:k;
for(i=0;i<j;i++)
{
v=v*(n-i)/(i+1);
}
printf("%lld\n",v);
}
return 0;
}
