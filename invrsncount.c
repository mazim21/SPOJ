#include<stdio.h>

main()
{
int a[200000],i,t,j,c=0,n;
scanf("%d",&t);

while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
c=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i] >= a[j] )
c++;
}
}
printf("%d\n",c);
}
}
