#include<stdio.h>
#include<string.h>
int main()
{
int i,l,k,c=0;
char x[10^100],z[10^100];
while(scanf("%s",x)!=EOF)
{c=0;
if(strcmp(x,"1")==0)
    {printf("%d",1);
        goto xy;}
if(strcmp(x,"0")==0)
    {printf("%d",0);
        goto xy;}
l=strlen(x);
for(k=l-1;k>=0;k--)
    {
        x[k]=x[k]-48;
        //printf("\n%d",x[k]);1
        z[k]= (c+ (x[k] * 2))%10;
        c= (c+ (x[k] * 2))/10;
    }
if(c!=0)
{
    for(i=l;i>0;i--)
    {
        z[i]=z[i-1];
    }
    z[0]=c;
    l++;
}
if(z[l-1] >= 2 )
    z[l-1]=z[l-1]-2;
else
{
    z[l-1]=8+z[l-1];
    i=l-2;
    while(z[i]==0)
    {z[i]=9;
    i--;}
    z[i]=z[i]-1;
}
c=0;
for(k=0;k<l;k++)
{
    if(z[k]!=0)
    c=1;
        if(c)
printf("%d",z[k]);
}
xy:
printf("\n");
}
return 0;
}

