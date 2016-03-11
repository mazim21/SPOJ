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
int t,i,j,a[103][103],b[2][103],h,w,k=0,s;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&h);
    scanf("%d",&w);
    for(i=0;i<h;i++)
    {
        a[i][0]=0;
        b[0][0]=0;
        k=0;
        for(j=1;j<=w;j++)
            {
            scanf("%d",&a[i][j]);
            if(i==h-1)
                b[0][j]=a[i][j];

            }
        a[i][j]=0;
    }
    h--;
    s=0;
for(h=h;h>0;h--)
{for(j=1;j<=w;j++)
{
    b[0][j]= cmp( (b[0][j]+a[h-1][j-1]),(a[h-1][j]+b[0][j]),(a[h-1][j+1]+b[0][j]));
    if(h==1)
    {
        if(s <= b[0][j])
            s=b[0][j];
    }
}
}

printf("%d\n",s);
}

}
