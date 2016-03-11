#include<stdio.h>

main()
{
int n,i,j,x,sum;

while(1)
{
scanf("%d",&n);
if(n==0)
goto xy;
else
sum=0;
while(n>0)
{
sum=sum+n*n;
n--;
}
printf("%d\n",sum);
}


xy:
    return;
}
