#include<stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}
main()
{
int w[40],wi=0,weig,t;
int v[40];

int i,j,k,l,fun[40],fee[40];
int items=10,kg=50;

scanf("%d",&kg);
scanf("%d",&items);
while(kg!=0 && items!=0)
{
fun[0]=0;
fee[0]=0;
for(i=1;i<=items;i++)
{
    scanf("%d",&fee[i]);
scanf("%d",&fun[i]);
}

for(i=1;i<=items;i++)
{
    for(j=i+1;j<=items;j++)
    {
        if ( fee[i] > fee[j])
        {
            t=fee[i];
            fee[i]=fee[j];
            fee[j]=t;

            t=fun[i];
            fun[i]=fun[j];
            fun[j]=t;

        }
    }
}

items++;
kg++;
int b[items][kg];
for(i=0;i<items;i++)
{
    for(j=0;j<kg;j++)
        b[i][j]=0;

}
for(i=1;i<items;i++)
{
    wi=fee[i];
    for(weig=0;weig<kg;weig++)
    {
        if ( weig < wi)
        {
            b[i][weig]=b[i-1][weig];
        }
        else
        {
            b[i][weig]= max( b[i-1][weig] , fun[i] + b[i-1][weig-wi] );
        }

    }
}

        printf("%d",b[items-1][kg-1]);
        printf("\n");

        scanf("%d",&kg);
scanf("%d",&items);
scanf("%d",&kg);
scanf("%d",&items);
}

}
