#include<stdio.h>


main()
{
int n,i,j,x,y,l,m=0;
scanf("%d",&n);
long a;
for(i=0;i<n;i++)
{
x=5;
scanf("%lu",&a);
m=0;
while(x <=a)
{
m=m+a/x;
x=x*5;
}
printf("%d\n",m);
}

}
