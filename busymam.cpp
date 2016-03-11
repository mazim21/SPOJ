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

int main()
{
    int t;
    get(t);

    ll i,j,n;

    while(t--)
    {
        std::set<std::pair<ll,ll> >s;
        std::set<std::pair<ll,ll> >::iterator x;
        std::pair<ll,ll> p,q;
        in(n);
        ll c = 0,f,l;

        for(i=0;i<n;i++)
        {
            in(f);
            in(l);

            p = std::make_pair(l,f);
            s.insert(p);
        }


            ll tt = 0;

            for(x = s.begin();x!=s.end();x++)
            {
                q = *x;
                if( x == s.begin() || q.second >= tt)
                {
                    c++;
                    p = *x;
                    tt = p.first;
                }

            }

            cout << c<<endl;
    }





return 0;
}
