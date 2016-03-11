#include<stdio.h>
#include<math.h>


int main()
{
int t;
double i,j,k,l,s,y;
scanf("%d",&t);
while(t--)
{
scanf("%lf",&i);
scanf("%lf",&j);
scanf("%lf",&k);
scanf("%lf",&l);
s= (i+j+k+l)/2.0;
y=(s-i)*(s-j)*(s-k)*(s-l);
y=sqrt(y);
printf("%.2lf",y);
printf("\n");
}
return 0;
}
