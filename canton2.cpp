#include<bits/stdc++.h>
#include<math.h>
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
    if( big % small == 0)
        return small;
    gcd(small,big%small);
}

int main()
{
    ll t,i,n,a,b,c,x;
    in(t);
    i = 1;
    while(t--)
    {
        in(a);
        in(b);
        in(c);

        if ( a > b )
            x = gcd(a,b);
        else
            x = gcd(b,a);

        if( c % x == 0 )
            printf("Case %lld: Yes\n",i);
        else
             printf("Case %lld: No\n",i);

        i++;
    }

return 0;
}
