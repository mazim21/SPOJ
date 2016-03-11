#include<stdio.h>
#include<string.h>

main()
{
int i,j,k,n,x,y;
int flag;
char a[100];
scanf("%d",&n);
while(n--)
{
    flag=-1;
scanf("%d",&x);
scanf("%d",&y);
scanf("%s",a);

for(i=0;i<strlen(a);i++)
{
    if(a[i]=='.')
        break;
}
if(i==strlen(a))
{
    flag=0;
    goto xy;
}
else
{
    if(i>=y)
{
    flag=0;
    goto xy;
}
    else
    {
        a[strlen(a)]='d';
        a[strlen(a)+1]='\0';
        while(a[i]!='d')
        {
            for(j=i+1;j<strlen(a)-1;j++)
            {
                if(a[j]=='.')
                    break;
            }

           if(j=='d')
           {
               if(j-i<=y)
               {flag=1;
               goto xy;}
               else
               {
                   flag=0;
                   goto xy;
               }
           }
            if(j-i>y)
            {
                flag=0;
                goto xy;
            }
            else
                i=j;
        }

    }
}


xy:
if(!flag)
    printf("NO\n");
else
    printf("YES\n");
}
}
