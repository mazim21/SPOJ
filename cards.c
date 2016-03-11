#include<stdio.h>

int main()
{
int n,t,i;
long long int f;
scanf("%d",&t);
while(t)
{
    f=0;
    scanf("%d",&n);
    if(n==1)
    {printf("%d",3);
    goto xy;}
    for(i=1;i<=n;i++)
    f=f+i;
    printf("%d\n", ((f*3)-n)%1000007);
    xy:
    t--;
    }
return 0;
}
