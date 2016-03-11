#include<stdio.h>

int main()
{
long int x,s=0;
long int a[1004],min,t;
int i,j,k,y,f=0,g=1,o=0;
scanf("%d",&y);
while(y)
{f=0;
o=0;
s=0;
scanf("%ld",&x);
scanf("%d",&k);
for(i=0;i<k;i++)
{scanf("%d",&a[i]);
s=s+a[i];}
if(x==0)
{
    o=1;
    goto xy;
}
if(x > s)
{f=1;
goto xy;}
for(i=0;i<k;i++)
{ min =i;
for(j=i+1;j<k;j++)
{
if(a[min] < a[j])
min=j;
}
t=a[min];
a[min]=a[i];
a[i]=t;
}
i=0;
s=0;
j=0;
while(s < x)
{
    j++;
    s=s+a[i];
    i++;
}
printf("Scenario #%d:\n",g++);
printf("%d\n\n",j);
xy:
    if(o)
    {
     printf("Scenario #%d:\n",g++);
printf("%d\n\n",1);}
if(f)
{printf("Scenario #%d:\n",g++);
printf("impossible\n\n");}
y--;}
return 0;
}

