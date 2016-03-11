#include<iostream>
using namespace std;
main()
{
int a,t;
cin >> t;
while(t--)
{
cin >> a;
if(a%2==0)
cout << a/2<<"\n";
else
    cout << (a/2)+1<<"\n";
}
}
