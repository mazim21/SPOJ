#include<iostream>
#include<map>
using namespace std;

main()
{
long int x;
int t,n,a;
map<int,long int>m;
cin >> t;
while(t--)
{
cin >> n;
int i,v=1;
int c;
c=0;
for(i=0;i<n;i++)
{
    cin >>a;
    m[a]++;
    if(m[a] > n/2)
    {
        c=1;
        x=a;
        v=m[a];
    }
}
/*for(std::map<int,long int >::iterator j = m.begin(); j!= m.end(); j++)
{
    cout << j->first <<j->second<<endl;
    if(j->second > n/2)
        {
            c=1;
            i=j->first;
            break;
        }
}
*/
if(c)
{
    cout << "YES "<<x<<endl;
}
else
    cout << "NO"<<endl;
    m.clear();
}
}
