#include<stdio.h>

main()
{
short int a,t,k;
int b;
scanf("%d",&t);
while(t--)
{
    k=0;
scanf("%d",&a);
scanf("%d",&b);

if(b==0)
    printf("%d",1);

else if(a==1 || a==11)
printf("%d",1);

else if(a==6 || a==16)
printf("%d",6);

else if(a==5 || a==15)
printf("%d",5);

else if(a==4 || a==14)
{
    if(b%2==0)
        printf("%d",6);
    else
        printf("%d",4);
}
else if(a==9 || a==19)
{
    if(b%2==0)
        printf("%d",1);
    else
        printf("%d",9);
}

else if(a==2 || a==12)
{
    k= b % 4;
    if(k==1)
        printf("%d",2);
    else if(k==2)
        printf("%d",4);
    else if(k==3)
        printf("%d",8);
        else if(k==0)
        printf("%d",6);
}
else if(a==3 || a==13)
{
    k= b % 4;
    if(k==1)
        printf("%d",3);
    else if(k==2)
        printf("%d",9);
    else if(k==3)
        printf("%d",7);
        else if(k==0)
        printf("%d",1);
}
else if(a==7 || a==17)
{
    k= b % 4;
    if(k==1)
        printf("%d",7);
    else if(k==2)
        printf("%d",9);
    else if(k==3)
        printf("%d",3);
        else if(k==0)
        printf("%d",1);
}
else if(a==8 || a==18)
{
    k= b % 4;
    if(k==1)
        printf("%d",8);
    else if(k==2)
        printf("%d",4);
    else if(k==3)
        printf("%d",2);
        else if(k==0)
        printf("%d",6);
}
else if(a==20 || a==10)
{
    printf("%d",0);
}
printf("\n");
}

}
