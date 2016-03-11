#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

int main()
{
    ll t,n,x,ans;

    in(t);
    x = 1;
    while(t--)
    {
        in(n);

        ans = sqrt(1 + n);
        ans--;

        printf("Case %lld: %lld\n",x,ans);
        x++;
    }


return 0;
}
