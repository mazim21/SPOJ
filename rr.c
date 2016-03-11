#include<stdio.h>

int min(int x,int y)
{
if(x > y)
return y;
else
return x;
}

main()
{
int b[20],q[20],i,j,n;
int x,cnt=0,t=0,exp[20],tt=0;
printf("n?");
scanf("%d",&n);

printf("\nTime slice");
scanf("%d",&t);

for(i=0;i<n;i++)
{scanf("%d",&b[i]);
q[i]=b[i];
exp[i]=0;}
i=0;
while(cnt < n)
{
x=min(t,q[i]);
q[i]=q[i]-x;
tt=tt+x;
if(exp[i]==0)
{
printf("p %d\t%d\n",i,q[i]);
}
if(exp[i]==0 && q[i]==0)
{
exp[i]=1;
cnt++;
}
i= (i+1)%n;

}
printf("%d",tt);
}
