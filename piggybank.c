#include<stdio.h>

int min(int a,int b)
{
    return (a<b)?a:b;
}
main()
{
int t;

int w[600],wi=0,weig,ep,fp,g=0,y[600],z;
int v[600];
int i,j,k,l,x;
int items=2,kg=100;
scanf("%d",&t);
while(t--)
{g=0;
    scanf("%d",&ep);
scanf("%d",&fp);
kg=fp-ep;
scanf("%d",&items);
int b[600][1000];
for(i=0;i<items;i++)
{
    scanf("%d",&v[i]);
    scanf("%d",&w[i]);
}
for(i=0;i<w[0];i++)
b[0][i]=0;
for(i=w[0];i<=kg;i++)
{
    x=i/w[0];
    b[0][i]= x*v[0];
    if(i==kg)
        y[g++]=x;
}
for(i=0;i<items;i++)
b[i][0]=0;
l=0;
for(i=1;i<items;i++)
{
    wi=w[i];
    for(weig=0;weig<=kg;weig++)
    {
        if ( weig < wi)
        {
            b[i][weig]=b[i-1][weig];
        }
        else
        {
            x=weig/wi;

            b[i][weig]= min( b[i-1][weig] , x*v[i] + b[i-1][weig-wi*x] );
            if( b[i-1][weig] < x*v[i] + b[i-1][weig-wi*x] && weig==kg )
                y[g++]=0;
            else if (b[i-1][weig] > x*v[i] + b[i-1][weig-wi*x] && weig==kg )
                {
                    if( weig-wi*x ==0 )
                    {
                        l=1;
                    }
                        else
                    y[g++]=x;
                    }
        }

    }
}z=0;
        for(i=0;i<g;i++)
        {
            z=z+ y[i]*w[i];
        }
        if(l==1)
        {
            z=x*w[items-1];
        }
        if(z==kg)
        printf("The minimum amount of money in the piggy-bank is %d.",b[items-1][kg]);
        else
        printf("This is impossible.");
        printf("\n");
}


}
