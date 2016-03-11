#include<stdio.h>
int cmp(int a,int b,int c)
{
    if(a>=b && a>=c)
    return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main()
{
int t,i,j,a[103][103],h,w,k,l,s,x,y,z,v;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&h);
    scanf("%d",&w);
    for(i=0;i<h;i++)
    {
        a[i][0]=-1;
        k=0;
        for(j=1;j<=w;j++)
            {
                scanf("%d",&a[i][j]);
                if(i==h-1)
                {
                  if(a[i][j]>k)
                  {k=a[i][j];
                  l=j;}
                }
            }
        a[i][j]=-1;
    }
h=h-2;
while(h>0)
{
    s=cmp(a[h][l-1],a[h][l],a[h][l+1]);
    k=k+s;
    if( (a[h][l-1]==a[h][l]) && (a[h][l]==a[h][l+1]) )
    {
        x=a[h][l] + cmp(a[h-1][l],a[h-1][l-1],a[h-1][l+1]);
        y=a[h][l+1] + cmp(a[h-1][l],a[h-1][l-1],a[h-1][l+1]);
        z=a[h][l-1] + cmp(a[h-1][l],a[h-1][l-1],a[h-1][l+1]);
        v=cmp(x,y,z);
        if(v==x)
            l=l;
        else if(v==y)
            l=l+1;
        else
            l=l-1;
    }
    else if(a[h][l-1]==s)
        l=l-1;
    else if(a[h][l+1]==s)
    l=l+1;
    if( (a[h][l-1]==a[h][l]) && (a[h][l],a[h][l+1]) )
    h--;
}
printf("%d\n",k);
}
return 0;
}
