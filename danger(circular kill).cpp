#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
int i;
int x,y,z,n,a,c;
char ch[10];
char aa[10]="00e0";
scanf("%s",ch);
    while (1)
    {
      i=1;
      x=ch[0] -48;
      y=ch[1]-48;
      z=ch[3]-48;
      n= ((10*x) + y )*pow(10,z);
      a=pow(2,i);
while(a < n )
{
i++;
a=pow(2,i);
}
a=pow(2,i);
if (n % a == 0)
{
    cout << 1<<endl;
    goto xy;
}
i--;
c=1;
a=pow(2,i);
x=n-a;
c=1 + 2*x;
cout << c<<endl;

xy:
scanf("%s",ch);
if ( strcmp (ch,aa)== 0)
    break;
    }

return 0;
}
