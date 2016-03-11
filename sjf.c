#include<stdio.h>

struct process
{
int a;
int b;
int t;
int w;
int n;
};

main()
{
struct process p[5],t;
int n=4,i,j;

for(i=0;i<n;i++)
{
scanf("%d",&p[i].n);
scanf("%d",&p[i].b);

p[i].w=0;
p[i].t=0;
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if (p[i].b > p[j].b )
        {
            t=p[i];
            p[i]=p[j];
            p[j]=t;
        }
    }
}
p[0].w=0;
p[0].t=p[0].b;

for(i=1;i<n;i++)
{
p[i].w=p[i-1].w+p[i-1].b;
p[i].t=p[i].w + p[i].b;
}

printf("\nOrder of execution:\n");
for(i=0;i<n;i++)
{
printf("\nprocess %d",p[i].n);
printf("\nWaiting time == %d",p[i].w);
printf("\nT time == %d",p[i].t);
printf("\n");
}
}
