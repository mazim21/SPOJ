#include<stdio.h>
#include<math.h>
int main()
{
int j,n;
float i;
scanf("%d",&n);
while(n!=-1)
{
    if(n%6==1)
    {
i= sqrt(12*n-3);
if( i*i== (12*n-3) )
{
   i=i+3;
   j=i;
   if(j%6==0)
        printf("Y\n");
   else
   {printf("N\n");
   goto xy;}

}
    }
else
    printf("N\n");
xy:
scanf("%d",&n);
}
return 0;
}
