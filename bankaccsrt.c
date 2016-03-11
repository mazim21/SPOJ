#include<stdio.h>
#include<math.h>
struct acc
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
char aa[30];
}p[100000];

int main()
{
int i,j,t,n,co=0,a,b,c,d,e,f,g,z=1,k;
struct acc x;
scanf("%d",&t);
while(t--)
{co=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    z=1;
    if(i==0)
    k=i;
    p[i].g=1;
    scanf("%d",&p[k].a);
    scanf("%d",&p[k].b);
    scanf("%d",&p[k].c);
    scanf("%d",&p[k].d);
    scanf("%d",&p[k].e);
    scanf("%d",&p[k].f);
    if (co != 0)
    {
        for(j=0;j<co;j++)
        {
            if(p[j].a ==p[k].a && p[j].b ==p[k].b && p[j].c ==p[k].c && p[j].d ==p[k].d)
            {
                if(p[j].f ==p[k].f && p[j].e ==p[k].e )
                {
                    p[j].g++;
                    z=0;
                    break;
                }
            }
        }
        if(z!=1)
            k--;
            else
                co++;
    }
    else
    co++;
    k++;
}
k=0;
for(i=0;i<co;i++)
{
    k=0;
        p[i].aa[k++]=p[i].a/10 + 48;
        p[i].aa[k++]=p[i].a%10 + 48;
        b=p[i].b;
        a=7;
    for(j=0;j<8;j++)
        {c=pow(10,a);
        p[i].aa[k++]=(b/c) + 48;
        b=b%c;
        a--;}
        c=p[i].c;
        a=3;
    for(j=0;j<4;j++)
        {d=pow(10,a);
            p[i].aa[k++]=(c/d) + 48;
        c=c%d;
        a--;}
        p[i].aa[k++] ='\0';

}

for(i=0;i<co;i++)
printf("%s\n",p[i].aa);

}
return 0;
}
