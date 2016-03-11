#include<stdio.h>
#include<string.h>
main()
{
char x[103],y[103];
int c[103],d[103];
int i,j,k,l,m,f;
for(i=0;i<10;i++)
{
    x[i]='\0';
    y[i]='\0';
}

for(i=0;i<1;i++)
{
scanf("%s",x);
scanf("%s",y);

l=strlen(x);
m=strlen(y);
k=l-m;
for(j=0;j<strlen(y);j++)
{
    y[m+k-1]=y[m-1];
    m--;
}
for(j=0;j<k;j++)
y[j]='0';
j=strlen(x)-1;
k=0;                                 //addition
for(i=strlen(x)-1;i>=0;i--)
{

    c[j--]= (k + (x[i]+y[i]-96))%10;
    if((x[i]+y[i]-96 +k) >= 10)
        k=1;
    else
        k=0;
    if(i==0 && k==1)
    f=1;

}
j=strlen(x);
if(f==1)
{
    for(i=strlen(x);i>0;i--)
        c[i]=c[i-1];
    c[0]=1;
    j=strlen(x)+1;
}
for(i=0;i<j;i++)
    printf("%d",c[i]);
j=strlen(x)-1;
printf("\n\n");
for(i=strlen(x)-1;i>=0;i--)
{                            //subtraction
if(x[i]-y[i] < 0 )
{
    d[j]=(10 + x[i]-y[i]);
    x[i-1]=x[i-1]-1;
}
else
    d[j]=x[i]-y[i];
j--;
}
for(i=0;i<strlen(x);i++)
    printf("%d",d[i]);
}



}
