#include<stdio.h>
int main()
{int t;
long long int n,c,k,s,x,y;
scanf("%d",&t);
while(t--)
{s=0;
scanf("%llu",&n);
k=n;
c=n;
while(c > 0)
{y=((k+1)*k);
    x=y/2;
if(n%2==0 && c%2!=0)
    x=y;
else if(n%2!=0 && c%2==0)
    x=y;
s=s+ x;
c--;
k--;
}
printf("%lld\n",s);
}return 0;
}
