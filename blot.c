#include<stdio.h>
#include<string.h>
int main()
{
char dd[10],a[10],b[10],d[10],o[4],e[4],f[10],g[20],h[10];
char *s;
int t,i=0,j,k,l,m,p,q,u;
scanf("%d",&t);
while(t--)
{
scanf("%s",a);
scanf("%s",o);
scanf("%s",b);
scanf("%s",e);
scanf("%s",f);
s= strchr(a,'m');

if(s!= NULL)
{
strcpy(h,f);
k=strlen(f);
strcpy(dd,b);
l=strlen(f);
m=strlen(b);
p=l-m;
for(j=0;j<strlen(dd);j++)
{
    b[m+p-1]=b[m-1];
    m--;
}

for(j=0;j<p;j++)
b[j]='0';

    j=strlen(f)-1;
    for(i=strlen(f)-1;i>=0;i--)
{                            //subtraction
if(f[i]-b[i] < 0 )
{
    g[j]=(10 + f[i]-b[i]);
    f[i-1]=f[i-1]-1;
}
else
    g[j]=f[i]-b[i];
j--;
}
g[k]='\0';
i=0;
while(g[i]==0)
    i++;
for(i=i;i<k;i++)
printf("%d",g[i]);
printf(" %s %s %s %s",o,dd,e,h);
printf("\n");
}

s= strchr(b,'m');
if(s!= NULL)
{
    strcpy(h,f);
k=strlen(f);
strcpy(dd,a);

l=strlen(f);
m=strlen(a);
p=l-m;
for(j=0;j<strlen(dd);j++)
{
    a[m+p-1]=a[m-1];
    m--;
}

for(j=0;j<p;j++)
a[j]='0';

    j=strlen(f)-1;
    for(i=strlen(f)-1;i>=0;i--)
{                            //subtraction
if(f[i]-a[i] < 0 )
{
    g[j]=(10 + f[i]-a[i]);
    f[i-1]=f[i-1]-1;
}
else
    g[j]=f[i]-a[i];
j--;
}
g[k]='\0';
printf("%s %s ",dd,o);
i=0;
while(g[i]==0)
    i++;
for(i=i;i<k;i++)
printf("%d",g[i]);
printf(" %s %s",e,h);
printf("\n");
}

s= strchr(f,'m');

if(s!= NULL)
{
    strcpy(h,a);
k=strlen(a);
strcpy(dd,b);
l=strlen(a);
m=strlen(b);
p=l-m;
for(j=0;j<strlen(dd);j++)
{
    b[m+p-1]=b[m-1];
    m--;
}
for(j=0;j<p;j++)
b[j]='0';
u=0;
j=strlen(a)-1;
k=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
     g[j--]= (k + (a[i]+b[i]-96))%10;
    if((a[i]+b[i]-96 +k) >= 10)
        k=1;
    else
        k=0;
    if(i==0 && k==1)
    u=1;
    }
    j=strlen(a);
if(u==1)
{
    for(i=strlen(a);i>0;i--)
        g[i]=g[i-1];
    g[0]=1;
    j=strlen(a)+1;
}
i=0;
while(g[i]==0)
    i++;

printf("%s %s %s %s ",h,o,dd,e);
    for(i=i;i<j;i++)
    printf("%d",g[i]);
    printf("\n");
}
}
return 0;

}
