#include<iostream>
using namespace std;

bool primcheck(int n)
{
  // """Returns True if n is prime"""
   if (n == 2) return true;
   if (n == 3) return true;
   if (n % 2 == 0) return false;
   if (n % 3 == 0) return false;

  int i = 5;
   int w = 2;
   while (i * i <= n)
      {if (n % i == 0)
         return false;

      i += w;
      w = 6 - w;
      }
   return true;
}

int gcd(int a,int b)
{
    int i,j,big;
    int div=(a>b)?b:a;
    big=(a>b)?a:b;
    int rem=0;
    while ( big >= div )
    {
        rem= big%div;
        if(rem ==0)
            return div;
        big = div;
        div = rem;
    }

}

int main()
{
int c=0,t,n,y,i;
cin >> t;
while(t--)
{c=0;
cin >> n;
y=primcheck(n);
if(y==1)
{cout << n-1<<endl;
goto xy;}
else
{
    for(i=1;i<n;i++)
    {y=gcd(i,n);
    if(y==1)
        c++;}
}
cout <<c<<endl;
xy:
t=t;
}

return 0;
}
