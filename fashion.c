#include<stdio.h>


main()
{
int n,i,j,a[1001],b[1001],t,z=0,min,u,c;
scanf("%d",&u);
for(c=0;c<u;c++)
{
scanf("%d",&n);
for(j=0;j<n;j++)
scanf("%d",&a[j]);

for(j=0;j<n;j++)
scanf("%d",&b[j]);

for(i=0;i<n;i++)
{ min =i;
for(j=i+1;j<n;j++)
{
if(a[min] > a[j])
min=j;
}
t=a[min];
a[min]=a[i];
a[i]=t;
}

for(i=0;i<n;i++)
{ min =i;
for(j=i+1;j<n;j++)
{
if(b[min] > b[j])
min=j;
}
t=b[min];
b[min]=b[i];
b[i]=t;
}

z=0;
for(j=0;j<n;j++)
z=z+a[j]*b[j];

printf("%d\n",z);
}
}
