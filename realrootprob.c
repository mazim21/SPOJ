#include<stdio.h>
#include<math.h>

main()
{
int t;
double n,m,d;

scanf("%d",&t);
while(t--)
{
scanf("%lf",&d);
n= 1/(3 *sqrt(d/2));
n=1-n;
printf("%.6lf\n",n);
}
}
