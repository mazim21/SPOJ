#include<stdio.h>
#include<string.h>
main()
{int t,k,g;
char a[1100];
unsigned long long int d;
scanf("%d",&t);
while(t--)
{scanf("%s %llu",a,&d);
k=a[(strlen(a)-1)]-48;
g=d%4;
if(d==0)
    printf("%d",1);
else if(k==1||k==6||k==5||k==0||(g==1 && (k==2||k==8||k==3||k==7 )))
printf("%d",k);
else if(k==4||k==9)
{    if(d%2==0)printf("%d",(k==4)?6:1);
    elseprintf("%d",(k==4)?4:9);
}
else if(k==2||k==8||k==3||k==7)
{if(g==2)printf("%d",(k%2==0)?4:9);
    if(g==3 && (k==2||k==8))printf("%d",(k==2)?8:2);
        if(g==3 && (k==3||k==7))printf("%d",(k==3)?7:3);
        else if(g==0)printf("%d",(k%2==0)?6:1);
}printf("\n");}}
