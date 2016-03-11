#include<stdio.h>
static int n=0;
int a[1000];
int b[5];
long long int sum;
int div(long long int y)
{    long long int d;
    d=y;
n++;
long long int z;
if(y==1)
return n-1;
sum=0;
while(y>0)
{
z=y%10;
sum=sum + z*z;
y=y/10;
}
//if(n==1)
//b[0]=sum;
//if(b[0]==sum && n!= 1)
//return -1;
if(a[sum]==1 && n!=1)
        return -1;
a[sum]=1;
div(sum);
}

int main()
{
    int z,i;
long long int x;
scanf("%lld",&x);
z=div(x);
printf("%d\n",z);
return 0;
}
