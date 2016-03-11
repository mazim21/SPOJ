#include<stdio.h>
int main()
{
int t,n,g,mg,i,a[100000],b[100000],j;
short int f=0;
scanf("%d",&t);
while(t--)
{f=0;
scanf("%d",&g);
scanf("%d",&mg);

for(i=0;i<g;i++)
  scanf("%d",&a[i]);

for(i=0;i<mg;i++)
  scanf("%d",&b[i]);

/*if(a[g-1] > b[mg-1])
{f=1;
goto xy;
}
else if(a[g-1] < b[mg-1])
{f=0;
goto xy;
}*/
i=0;
j=0;
while(i<g && j<mg)
{
        if(a[i] >= b[j] )
        {
            j++;
        }
        else
        {
            i++;
        }
}
if(j==mg)
f=1;
else if(i==g)
f=0;
xy:
if(f==1)
    printf("Godzilla\n");
else
printf("MechaGodzilla\n");

}
return 0;
}
