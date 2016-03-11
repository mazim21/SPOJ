#include<stdio.h>

int main()
{
int i,n=1,j,sum,min,b=1,fu=0;
float ff[15],t,fee[15],fun[15];

scanf("%d",&b);
scanf("%d",&n);

while(b!=0 && n!=0)
{
for(i=0;i<n;i++)
{scanf("%f",&fee[i]);
scanf("%f",&fun[i]);
}

for(i=0;i<n;i++)
{
ff[i]=fee[i]/fun[i];
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(ff[i] > ff[j])
    {
        t=ff[i];
        ff[i]=ff[j];
        ff[j]=t;

        t=fun[i];
        fun[i]=fun[j];
        fun[j]=t;

        t=fee[i];
        fee[i]=fee[j];
        fee[j]=t;
    }

}
}
i=0;
fu=0;
sum=0;
while(sum <= b)
{
    sum=sum+fee[i];
    fu=fu+fun[i];
    i++;
}
for(i=0;i<n;i++)
    printf("%.1f\t",ff[i]);
    printf("\n");
for(i=0;i<n;i++)
    printf("%.0f\t",fun[i]);
    printf("\n");
for(i=0;i<n;i++)
    printf("%.0f\t",fee[i]);

scanf("%d",&b);
scanf("%d",&n);
//b=0;
//n=0;
}
return 0;
}
