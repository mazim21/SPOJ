#include<stdio.h>

main()
{
int i,j,k,l=0,z=8,a[8][8],c=0,m,n,c1,c2;
for(i=0;i<z;i++)
{
for(j=0;j<z;j++)
a[i][j]=0;
}

for(i=0;i<1;i++)
{
for(j=0;j<z;j++)
{
if(a[j][i]==0)
{
    a[j][i]=1;
c++;
m=i,n=j;
c1=i,c2=j;
    while(c1 < z && c2 < z)
    {
        a[c2][c1]=1;
        c1++;
        c2++;

    }
    while( n>=0 && m<z)
    {
        a[n][m]=1;
        m++;
        n--;
    }
m=i,n=j;
    while(n>=0 && m>=0)
    {
        a[n][m]==1;
        n--;
        m--;
    }
m=i,n=j;
   while(m>=0 && n<z)
   {
       a[n][m]==1;
       m--;
       n++;
   }

}

}
}
for(i=0;i<z;i++)
{
for(j=0;j<z;j++)
printf("%d",a[i][j]);
printf("\n");
}


printf("%d",c);
}

