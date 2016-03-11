#include<stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}
main()
{
int w[]={0,1,50},wi=0,weig;
int v[]={0,1,30};
int i,j,k,l;
int items=2,kg=101;
items++;
kg++;
int b[items][kg];
for(i=0;i<kg;i++)
b[0][i]=0;
for(i=0;i<items;i++)
b[i][0]=0;

for(i=1;i<items;i++)
{
    wi=w[i];
    for(weig=0;weig<kg;weig++)
    {
        if ( weig < wi)
        {
            b[i][weig]=b[i-1][weig];
        }
        else
        {
            b[i][weig]= max( b[i-1][weig] , v[i] + b[i-1][weig-wi] );
        }

    }
}

        printf("%d\t",b[items-1][kg-1]);
        printf("\n");



}
