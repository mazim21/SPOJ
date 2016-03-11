#include<iostream>
#include<stdio.h>
using namespace std;
int fi(int n)
     {
       int result = n;
       for(int i=2;i*i <= n;i++)
       {
         if (n % i == 0) result -= result / i;
         while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
       return result;
     }

main()
{
int t,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&i);
printf("%d\n",fi(i));
}
}
