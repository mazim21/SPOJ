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

std::list<ll> l[100005];
int arr[100005]={0};
void dfs(ll i)
{
    arr[i] = 1;
    std::list<ll>::iterator x;
    for(x=l[i].begin();x!=l[i].end();x++)
    {
        if( arr[*x] == 0)
            dfs(*x);
    }
    return;
}

int main()
{
    int t;
    get(t);
    ll n,i,j,a,b,no;

    while(t--)
    {
        in(no);
        in(n);
        for(i=0;i<no+2;i++)
            arr[no] = 0;

        for(i=0;i<n;i++)
        {
            in(a);
            in(b);
            l[a].push_back(b);
            l[b].push_back(a);
        }
        ll c = 0;
        for(i=0;i<no;i++)
        {
            if( arr[i] == 0)
            {
                c++;
                dfs(i);
            }
        }
        cout << c<<endl;
        for(i=0;i<no+2;i++)
            {
                l[i].clear();
                arr[i]=0;
            }

    }




return 0;
}
