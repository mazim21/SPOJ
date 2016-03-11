#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

std::list<ll> l[300];

int ch(ll i,int visit[])
{
    std::list<ll>::iterator t;

    for(t=l[i].begin();t!=l[i].end();t++)
    {
        if( visit[*t] == 0  )
            return 0;
    }
    return 1;
}

int main()
{
     ll n,m,i,j,node,x,de;

    while( in(n)!= -1 )
    {
        in(m);
    int visit[300]={0};
    for(i=0;i<m;i++)
    {
        in(node);
        in(x);
        for(j = 0; j< x;j++)
        {
            in(de);
            l[node].push_back(de);
        }
    }
    int y;
    for(ll k = 0;k<n;k++)
    {
        for(i=1;i<=n;i++)
    {
        if( visit[i] == 0 )
        {

        std::list<ll>::iterator t;
        int flag;
        flag = 1;
        for(t=l[i].begin();t!=l[i].end();t++)
        {
            if( visit[*t] == 0  )
            {
                flag = 0;
                break;
            }
        }

        if( flag == 1)
        {
            cout << i<<" ";
            visit[i] = 1;
            break;
        }

        }
    }
    }
    cout << "\n";

    for(i=0;i<300;i++)
    l[i].clear();

    }


return 0;
}
