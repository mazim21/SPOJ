#include<iostream>
#include<map>
#include<string>
#include<string.h>
#include <algorithm>
#include<stdio.h>
using namespace std;

int min(int a,int b)
{
    return (a>b)? b:a;
}

int main()
{
int t,i;
string a,b;
while(cin >>a>>b)
{//cin >>a;
//cin >>b;
// if(scanf("%s",a)==EOF)
  //  return 0;
    //    scanf("%s",b);
int m,n;
int f,g;
string s;
m=a.size();
n=b.size();
//sort(a.begin(), a.end());
//sort(b.begin(), b.end());
int c;
f=0;
bool ac[28]={false};
int aac[28];
int bbc[28];

for(i=0;i<26;i++)
{
    aac[i]=1;
    bbc[i]=1;
}

for(i=0;i<m;i++)
{
   c=a[i];
   if(ac[c-97]==true)
   {
       aac[c-97]=aac[c-97]+1;
   }
   ac[c-97]=true;
}

int bc[28]={false};

for(i=0;i<n;i++)
{
   c=b[i];
   if(bc[c-97]==true)
   {
       bbc[c-97]=bbc[c-97]+1;
   }
   bc[c-97]=true;
}

/*for(i=0;i<26;i++)
    cout << ac[i];
cout << "\n";
for(i=0;i<26;i++)
    cout << aac[i];
cout << "\n";
for(i=0;i<26;i++)
    cout << bc[i];
cout << "\n";
for(i=0;i<26;i++)
    cout << bbc[i];
cout << "\n";*/
char d;
for(i=0;i<26;i++)
{
    if (ac[i] == true && bc[i]==true)
    {
        d=97+i;
        if( aac[i] > 1 && bbc[i] > 1 )
        {
        for(int k=0;k<min(aac[i],bbc[i]);k++)
        cout <<d;
        }
        else
            cout <<d;
    }
}
cout << "\n";

}
return 0;
}
