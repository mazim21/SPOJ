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

ll func(ll x,ll y,ll z)
{
    ll a,b,c;
    a = x;
    b = 0;
    c = 1;
    ll left;
    while( a!= z && b!=z )
    {
        left = y - b;
        if( left > a )
            {
                b = b + a;
                a = 0;
                c++;
            }
        else
            {
                a = a - left;
                b = y;
                c++;
            }
            if( a == z || b == z )
                break;
            if( b >= y )
            {
                b = 0;
                c++;
            }
            if( a <= 0 )
            {
                a = x;
                c++;
            }

}
return c;
}

ll mi(ll a,ll b)
{
    if( a < b )
        return a;
    else
        return b;
}

int main()
{
    int t;
    ll a,b,x,y,z;
    get(t);
    while(t--)
    {
        in(x);
        in(y);
        in(z);

        if( z > x && z > y )
            cout << -1<<endl;
        else
        {
            if(x > y)
                a = gcd(x,y);
            else
                a = gcd(y,x);

            if( z % a != 0 )
                cout << -1<<endl;
            else
            {
                cout << mi( func(x,y,z) , func(y,x,z) )<<endl;
            }
        }
    }
return 0;
}
