#include<iostream>
#include<map>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

int max(int a, int b)
{
    return (a > b)? a : b;
}
map<char,int>my;
int lcs(string a,int m,string b,int n)
{
    int t;
    if(m==0 || n==0)
        return 0;
    else if(a[m-1]==b[n-1])
    {my[a[m-1]]++;
       return 1+lcs(a,m-1,b,n-1);}
       else
        return max  ( lcs(a,m,b,n-1) , lcs (a,m-1,b,n) ) ;
}

int main()
{
int t,i;
cin >>t;
string a,b;
while(t--)
{cin >>a;
cin >>b;
int m,n;
m=a.size();
n=b.size();
lcs(a,m,b,n);
for(std::map<char, int >::iterator i = my.begin(); i != my.end(); i++)
cout << i->first;
cout << "\n";
my.clear();
}
return 0;
}
