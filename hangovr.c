#include<stdio.h>

main()
{
float x[10000],y,n=2;
int i=0,j,c=0;
while(1)
{
scanf("%f",&x[i]);
if(x[i] == 0.00)
goto xy;
i++;
}
xy:
for(j=0;j<i;j++)
{
    y=0.00;
    c=0;
    n=2;
    while(y <= x[j])
    {
        y= y + (1/n);
        n++;
        c++;
    }
    printf("%d ",c);
    printf("card(s)\n");

}

return 0;
}
