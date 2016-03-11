#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main()
{
int t,i,j;
cin >> t;
char a[6105];
int b[6105];
map <char,int>m;
map <char,int>it;
while(t--)
{
    int j=0,l=0;
    l=0;
cin >> a;
for(i=0;i<strlen(a);i++)
m[a[i]]++;
//for(i=0;i<strlen(a);i++)
for(map<char,int>::iterator it=m.begin();it!=m.end();it++ )
cout << it->first;

//j=(it->second > j)?it->second:j;

//for(map<char,int>::iterator it=m.begin();it!=m.end();it++ )
//l= l+ j- (it->second);

//cout <<l<<endl;
}
return 0;
}
