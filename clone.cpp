#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld",(a))
using namespace std;


int main()
{
    std::map <string,ll >ma;
    std::map <string,ll >::iterator x;

    ll n,m,i,t;

    int f[20000];

    in(n);
    in(m);

    while( n!= 0 && m!= 0 )
    {
        string arr;

        for(i=0;i<n;i++)
        {
            cin >> arr;

            ma[arr]++;

            f[i] = 0;
        }

        for(x=ma.begin();x!=ma.end();x++)
          {
            f[ x->second - 1 ]++;
          }

        for(i=0;i<n;i++)
            cout << f[i]<<endl;

        ma.clear();



        in(n);
        in(m);
    }


return 0;
}
