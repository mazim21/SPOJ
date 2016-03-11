#include<stdio.h>

int main()
{
double w,b;
scanf("%lf",&w);
scanf("%lf",&b);
int i=w;
if(w > (b-0.5) || (i%5!=0) )
{printf("%.2f\n",b);
return 0;
}
//cout << w-b-0.5;
printf("%.2f\n",b-w-0.5);
return 0;
}
