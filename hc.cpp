#include<iostream>
using namespace std;

main()
{
int t,n,i,b;
cin >> t;
string a;
while(t--)
{
cin >> n;
for(i=0;i<n;i++)
{
    cin >> a;
    if( i==0 )
    {
        if(a == "lxh")
            b=1;
        else
            b=0;
    }
    else if( (a == "lxh" && b==1 )||  (a=="hhb" && b==0 )   )
        b=0;
    else
        b=1;
}
if(b==1)
    cout << "lxh"<<endl;
    else
        cout << "hhb"<<endl;

}

}
