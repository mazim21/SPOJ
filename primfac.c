#include<stdio.h>

void prime(long long int x)
{
int f=1;
int j;
for(j=x/2;j>1;j--)
{
if(x%j==0)
{f=0;
break;}
}
if(f)
printf("%lld\n",x);
}

main()
{
int n,i,j,x;
scanf("%d",&n);
long long int a,b;
for(i=0;i<n;i++)
{
scanf("%lld",&a);
scanf("%lld",&b);
for(j=a;j<=b;j++)
prime(j);
printf("\n");
}
}
