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

ll arr[2000];
ll si=1;
bool fac(ll a)
{
    ll i,j;
    ll count = 0;
    int flag = 1;
    while( a%2 == 0 )
    {
        if(flag)
        {
            count++;
            //cout << 2<<endl;
            flag = 0;
        }
        a = a/2;
    }
    for(i=3 ; i <= sqrt(a) ; i++ )
    {
        flag = 1;
        while( a % i == 0 )
        {
            if(flag)
            {
                count++;
                //cout << i<<endl;
                flag = 0;
            }
            a = a/i;
        }
    }
    if( a > 2 )
        count++;
        if( count >= 3 )
            return true;
        else
            return false;
}
void pre()
{
    ll i;
    bool x;
    for(i=30;i<=2665;i++)
    {
        x = fac(i);
        if( x == true )
        {
            arr[si++] = i;
        }
    }
}

int main()
{
    pre();
    int t;
    ll n;
    ll i;
    //for(i=1;i<=10;i++)
      //  cout << arr[i]<<" ";
    get(t);

    while(t--)
    {
        in(n);
        out(arr[n]);

    }

return 0;
}
