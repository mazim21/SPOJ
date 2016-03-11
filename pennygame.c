#include<stdio.h>
#include<string.h>
main()
{
int p,t=0,c=0,i=0,l=0;
char a[45],b[20],f[8][4]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
scanf("%d",&p);
while(p--)
{c=0;
i=0;
l=0;
scanf("%d",&t);
scanf("%s",a);
printf("%d",t);
while(l<8)
{i=0;
c=0;
while(i<=38)
{
b[0]=a[i];
b[1]=a[i+1];
b[2]=a[i+2];
b[3]='\0';
if( strcmp(b,f[l])==0)
c++;
i++;
}
printf(" %d",c);
l++;
}
printf("\n");
}
}
