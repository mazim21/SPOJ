#include<stdio.h>
main()
{short int t,k;
int d,g;
scanf("%d",&t);
while(t--)
{scanf("%d",&k);
scanf("%d",&d);
g=d%4;
k=k%10;
if(d==0)
    printf("%d",1);
else if(k==1||k==6||k==5||k==0)
printf("%d",k);
else if(k==4||k==9)
{    if(d%2==0)
        printf("%d",(k==4)?6:1);
    else
        printf("%d",(k==4)?4:9);
}
else if(k==2||k==8||k==3||k==7)
{    if(g==1)
        printf("%d",k);
    else if(g==2)
        printf("%d",(k%2==0)?4:9);
    else if(g==3)
        {if(k==2||k==8)
            printf("%d",(k==2)?8:2);
            else
              printf("%d",(k==3)?7:3);
            }
        else if(g==0)
        printf("%d",(k%2==0)?6:1);
}printf("\n");}}
