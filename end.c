#include<stdio.h>

main()
{
unsigned long long int n;
scanf("%llu",&n);
if( (n&(n-1))==0)
    printf("TAK\n");
else
    printf("NIE\n");
}
