#include<stdio.h>
unsigned int f[100000000];
unsigned int maxi(unsigned x,unsigned y)
{
    if( x >= y)return x;
        else return y;
}
unsigned int fun(unsigned n)
{
    if(n==1 || n==2 || n==3 || n==0)
    return n;
    if(f[n]!=-1)
        return f[n];
    return maxi(n,fun(n/2)+fun(n/3)+fun(n/4));
}
int main()
{
unsigned int i,j;
short int t;
for(i=0;i<100000000;i++)
f[i]=-1;
f[0]=0;
f[1]=1;
f[2]=2;
f[3]=3;
scanf("%u",&t);
while(t--)
{
    scanf("%u",&i);
    printf("%u\n",fun(i));
}
return 0;
}
