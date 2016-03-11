#include<stdio.h>
int main()
{
int i,j,k=0,t;
int a=1,b=2,x,y;
unsigned long long int n,c=2;
scanf("%d",&t);
while(t--)
{
    a=1;
    b=2;
    c=2;
    k=0;
scanf("%llu",&n);
if(n==1)
    printf("TERM %llu IS %d/%d\n",n,1,1);
else if(n==2)
printf("TERM %llu IS %d/%d\n",n,1,2);

for(i=0;i<n-2;i++)
{
if(i==0)
x=b-a;
if(k==0)
{
a++;
b--;
c++;
if(n==c)
printf("TERM %llu IS %d/%d\n",n,a,b);
if( x == a-b)
{
a++;
c++;
if(n==c)
printf("TERM %llu IS %d/%d\n",n,a,b);
k=1;
y= a-b;
}
}
else
{
a--;
b++;
c++;
if(n==c)
printf("TERM %llu IS %d/%d\n",n,a,b);
if(y == b-a)
{
k=0;
b++;
c++;
if(n==c)
printf("TERM %llu IS %d/%d\n",n,a,b);
x=b-a;
}
}
}

}
return 0;
}
