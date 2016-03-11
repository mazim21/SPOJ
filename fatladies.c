#include<stdio.h>
#include<string.h>
main()
{
int l,k,j,i,c=0,t;
char x[230],y[220],z[220],d[220];
scanf("%d",&t);
while(t--)
{
    c=0;
scanf("%s",x);
l=strlen(x);
strcpy(z,x);
    i=25;
    for(k=l-1;k>=0;k--)
    {
        x[k]=x[k]-48;
        //printf("\n%d",x[k]);1
        z[k]= (c+ (x[k] * i))%10;
        c= (c+ (x[k] * i))/10;
    }
    k=l;
if(c!=0)
{    for(i=strlen(x);i>0;i--)
    {
        z[i]=z[i-1];
    }
    z[k+1]='\0';
    z[0]=c;
    k++;
}
z[k+2]='\0';
z[k+1]='0';
k++;
//printf("\n");
//for(i=0;i<k;i++)
  //  printf("%d",z[i]);
//printf("\n%d\n",k);

for(i=0;i<k-2;i++)
y[i]=0;
y[i++]=5;
y[i++]=8;
//printf("\n");
//for(i=0;i<k;i++)
//printf("%d",y[i]);

for(i=k-1;i>=0;i--)
{                            //subtraction
if(z[i]-y[i] < 0 )
{
    d[i]=(10 + z[i]-y[i]);
    z[i-1]=z[i-1]-1;
}
else
    d[i]=z[i]-y[i];
}
//printf("\n");
for(i=0;i<k;i++)
printf("%d",d[i]);
printf("\n");
}
return 0;
}
