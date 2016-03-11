#include<stdio.h>
int main()
{long long int x,y,s,n,c,d,a,i;
int t;
scanf("%d",&t);
while(t--)
{scanf("%lld",&x);
scanf("%lld",&y);
scanf("%lld",&s);
n= (2*s)/(x+y);
if(x==y){d=0;goto xy;}
c=n-3;
d = (y-x)/(c-2);
xy:a= x-(2*d);
printf("%lld\n",n);
for(i=0;i<n;i++)
{printf("%lld\t",a);
a=a+d;
}
printf("\n");
}return 0;}
