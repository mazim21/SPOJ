#include<stdio.h>
int main()
{
double j;
double i;
int t,k=1;
scanf("%d",&t);
while(t--)
{
scanf("%lf",&i);
j= (4*i*i )+.25 ;

printf("Case %d: %.2lf\n",k,j);
k++;
}


return 0;
}
