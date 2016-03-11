#include<stdio.h>

main()
{
int n,i=1,j=1,c=0,k=0;
scanf("%d",&n);

while(i*i <= n)
{
c++;
i++;
}
i=1;
while( n>1 && i <= n)
{
    j=1;
    while( i*j <= n )
       {
           if(i!=j)
            k++;
            j++;
       }
    i++;
}
k=k/2;
printf("%d",k+c);
}
