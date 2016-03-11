#include<stdio.h>

int prime(int x)
{
int f=1;
int j;
if(x==2 || x==3||x==5||x==7||x==11||x==13)
return 1;
for(j=x/2;j>1;j--)
{
if(x%j==0)
{f=0;
break;}
}
if(f)
return 1;
else
return 0;
}

int mul(int a,int b,int c,int n)
{
    if(a*b*c==n)
        return 1;
    else
        return 0;
}

main()
{
int i,n,a[10],k,l=0,f=0;
scanf("%d",&n);

for(i=2;i<=n;i++)
{
if(n%i==0)
{
k=prime(i);
if(k)
{
    if(l==3)
    {
        f=mul(a[0],a[1],a[2],n);
        if(f==1)
            goto xy;
        else
        {
            a[0]=a[1];
            a[1]=a[2];
            a[2]=i;
            f=mul(a[0],a[1],a[2],n);
            if(f)
                goto xy;
        }
    }
    else
    a[l++]=i;
}
}
}
xy:
printf("%d %d %d",a[0],a[1],a[2]);
}
