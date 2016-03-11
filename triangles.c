#include<stdio.h>
int main()
{int t;
long long int n,c,k,a,s;
scanf("%d",&t);
while(t--)
{s=0;
k=1;
scanf("%llu",&n);
c=n;
while(c > 0)
{s=s+ (c*k);
c--;
k++;
}
n=n-1;
a=n;
while(n > 0)
{k=a;
s= s+ ((k)*(k+1))/2;
a=a-2;
n=n-2;
}printf("%lld\n",s);
}return 0;
}
