#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
cin >> n;
while(n!=0)
{
int i;
int x;
i=1;
if(n==1)
{cout << 0<<endl;
goto xy;}
else if (n==2)
{
   cout << 1<<endl;
goto xy;
}
x=pow(2,i);

while(x < n )
{
i++;
x=pow(2,i);
}
x=pow(2,i);
if( n % x == 0 )
cout << i<<endl;
else
cout << i-1<<endl;
xy:
cin >> n;
}

return 0;
}
