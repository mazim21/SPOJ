#include<stdio.h>


main()
{
int c,z,i,j,a,b,n;
scanf("%d",&n);
while(n>0)
{
scanf("%d %d",&a,&b);

if(a==0 && b==0)
printf("0");
else if(a==1 && b==1)
printf("1");
else if(a==b || a-2==b)
{
if(a%2==0)
{
    if(a==b)
printf("%d",2*b);
else
{
    z=a/2;
    z=z-1;
    c=a+(2*z);
    printf("%d",c);

}

}
else
{
    if(a==b)
        printf("%d",2*b-1);
    else
        {b--;
    printf("%d",a+b);}
}
}
else
printf("No Number");
n--;
printf("\n");
}
}
