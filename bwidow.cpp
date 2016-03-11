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

    ll n,i,j,inr,our,m,pos;

    get(t);
    while(t--)
    {
        in(n);
        ll arr[n+5];
        for(i=1;i<=n;i++)
        {
            in(inr);
            in(our);
            if(i==1)
            {
                m = inr;
                pos = i;
            }
            if( i!=1 && inr > m)
            {
                m = inr;
                pos = i;
            }
            arr[i]=our;
        }
        ll c = 0;
        for(j=1;j<=n;j++)
        {
            if( j!= pos )
            {
                if( arr[j] < m )
                    c++;
            }
        }
        if( c == n-1 )
            cout << pos<<endl;
        else
            cout << -1<<endl;

    }

return 0;
}
