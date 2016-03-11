#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t,n;
double i,j,k,l,s,y;
cin >> t;
while(t--)
{
cin >> i;
cin >> j;
cin >> k;
cin >> l;
s= (i+j+k+l)/2;
y=(s-i)*(s-j)*(s-k)*(s-l);
y=sqrt(y);
cout << y;
}
return 0;
}
