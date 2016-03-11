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
    gcd(small,big%small);
}

int main()
{
    int t;

    get(t);
    ll x,y,z,a;

    while(t--)
    {

        in(x);
        in(y);
        in(z);

        if( z > x && z > y )
            cout <<"NO"<<endl;
        else
        {
            if( x > y )
                a = gcd(x,y);
            else
                a = gcd(y,x);

                if( z % a == 0 )
                    cout <<"YES"<<endl;
                else
                    cout <<"NO"<<endl;
        }


    }



return 0;
}
