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

ll t,n,i,j;


in(t);

while(t--)
{
    std::set <ll> m;
    std::set <ll>::iterator t,t2;
    in(n);
    ll arr[n+1];
    for(i=0;i<n;i++)
        in(arr[i]);

    m.insert(arr[0]);

    ll c = 0;
    for(i=1;i<n;i++)
    {
        m.insert(arr[i]);

        t = m.upper_bound(arr[i]);

        c = c + distance(t,m.end());
    }
    out(c);

    m.clear();
}


return 0;
}
