#include<stdio.h>


main()
{
int x[10001],j,i=0,k=0;
j=10;

while(k<=j)
{
x[i]=k;
x[++i]=++k;
i++;
k=k+3;
}
for(j=0;j<i;j++)
printf("%d\t",x[j]);
}


