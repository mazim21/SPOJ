#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int min(int a,int b)
{
return (a>b)?b:a;
}

int fun(char a[],int l,int h)
{
if(l==h)
return 0;
if (l == h - 1)
return (a[l] == a[h])? 0 : 1;

if(a[l]==a[h])
return (fun(a,l+1,h-1));
else
return min(fun(a,l+1,h),fun(a,l,h-1)) + 1;

}

int main()
{
int t,i,j;
cin >> t;
char a[6105];
while(t--)
{
cin >> a;
cout << fun(a,0,strlen(a)-1)<<endl;
}
}
