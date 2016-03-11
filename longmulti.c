#include<stdio.h>
#include<string.h>

main()
{
int t,i,l,m,k,j,c=0;
char x[10^100],y[10^100],z[10^100];

scanf("%s",x);
scanf("%s",y);

l=strlen(x);
m=strlen(y);
k=l-m;
strcpy(z,y);
for(j=0;j<k;j++)
{
    y[j]='0';
}
y[j]='\0';
strcat(y,z);
j=strlen(y);
for(i=0;i<m;i++)
{
    y[j-1]=y[j-1]-48;
    k=l-1;
    strcpy(z,x);
    y[j-1]=25;
    for(k=l-1;k>=0;k--)
    {
        x[k]=x[k]-48;
        //printf("\n%d",x[k]);1
        z[k]= (c+ (x[k] * y[j-1]))%10;
        c= (c+ (x[k] * y[j-1]))/10;
    }
    k=l;
if(c!=0)
{
    for(i=strlen(x);i>0;i--)
    {
        z[i]=z[i-1];
    }
    z[k+1]='\0';
    z[0]=c;
    k++;
}
//printf("%d",strlen(z));
for(i=0;i<k;i++)
printf("%d",z[i]);
}
}
