#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

ll gcd(ll big,ll small)
{
    if( big % small == 0 )
        return small;
    gcd( small , big % small );
}

int main()
{
    ll i;
    int t;
    get(t);
    string s;
    ll x,y,z,j,ii;

    for(ii=1;ii<=t;ii++)
    {
        cin >> s;

        for(i=0;i<s.length();i++)
        {
            if( s[i] == '/' )
            {
                i++;
                break;
            }
        }
        j = i - 2;
        ll x,y;
        x = 0;
        while( s[i] != '\0' )
        {
            x = 10*x + s[i] - '0';
            i++;
        }
        //out(x);
        y = 0;
        for(i=0;i<=j;i++)
        {
            y = 10*y + s[i] - '0';
        }
        //out(y);
        ll z;
        if(x > y)
            z = gcd(x,y);
        else
            z = gcd(y,x);

        printf("Case %d: ",ii);
        cout << y/z <<"/"<<x/z;
        cout <<"\n";
    }


return 0;
}
