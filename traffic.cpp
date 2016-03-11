#include<iostream>
#include<stack>
using namespace std;

int main()
{
std::stack<int> s;
int t,i,a[1500],f,c,k;
cin >> t;
while(t!=0)
{
while(!s.empty())
    s.pop();
k=1;
f=1;
c=0;
for(i=0;i<t;i++)
cin >> a[i];
int l=0;
s.push(0);
while(c!=t)
{
    if(s.top()==k)
    {
        s.pop();
        k++;
        c++;
    }
    else
    {
        s.push(a[l++]);
    }
    if(c!=t && l==t+1)
        f=0;
}
if(f)
    cout << "yes\n";
else
    cout << "no\n";

    cin >> t;
}
return 0;
}
