#include<string.h>
#include<stdio.h>

main()
{
int t;
scanf("%d",&t);
double n,sum,c;
while(t--)
{
scanf("%lf",&n);
sum=0;

for(c=1;c<=n;c++)
sum=sum + n/c;

printf("%.2lf\n",sum);
}
return 0;
}
