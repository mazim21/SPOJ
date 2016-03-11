#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

main()
{
int i,j,k=0;
long int n,q=1;
char c;
string a="",b;
b= b+a;
int ans=0;
cin >> n;
if(n==0)
    {cout << 0<<"\n";
    return 0;
}
if(n>0)
    k=1;
n = (n>0) ? n : -1*n;

while( n>= 1 )
{
    if(n==1 && k==1)
    {   //ans = ans + q*1;
        a=a+'1';
        //cout <<1;
        break;}
if(k)
{
    j= n%2;
    c = j + 48;
    a= a+ c;
    //ans = ans + (n%2)*q;
//cout << n%2;
n=n/2;
k=0;
}
else{

if(n%2==0)
{
    n=n/2;
    a = a + '0';
    //ans = ans + q*0;
    //cout <<0;
    k=1;
}
else{
    n= n/2 +1;
    a = a+'1';
    //ans = ans + q*1;
    //cout <<1;
    k=1;
}

}
q=q*10;
}
reverse(a.begin(),a.end());

cout << a<<"\n";
}
