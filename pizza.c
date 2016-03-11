#include<stdio.h>

int main()
{
int i,k,n=0,p=0,o=0,m=0,t=0,j;
char a[10000][5];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
k=a[i][0]-48;
j=a[i][2]-48;
if(k==1 && j==2)
k=2;
if(k==2)
m++;
else if(k==3)
    p++;
else
    o++;
}
if(m%2!=0)
{t=1;
o=o-2;
}
t=t+ (m/2);
if(p>=o)
    t= t+p;
if(p<o)
{
    t=t+p;
    o=o-p;
    i=o/4;
    t=t+i;
    if(o%4!=0)
        t++;
}
printf("%d\n",t+1);

return 0;
}
