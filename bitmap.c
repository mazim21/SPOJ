#include<stdio.h>

int main()
{
int t,m,n,i,b[18200],j,l,k,q,r,p;
char a[200][200];
scanf("%d",&t);
while(t--)
{
    l=0;
scanf("%d",&m);
scanf("%d",&n);
for(i=0;i<m;i++)
scanf("%s",a[i]);

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]=='1')
        {
            b[l++]=i;
            b[l++]=j;

        }
    }
}

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        r=99;
        for(k=0;k<l;k=k+2)
        {
            p=i-b[k];
            q=j-b[k+1];
            p=(p>0)?p:-p;
            q=(q>0)?q:-q;
            p=p+q;
            r=(r>p)?p:r;

        }
        a[i][j]=r;
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
printf("%d ",a[i][j]);}
printf("\n");
}
}
return 0;
}
