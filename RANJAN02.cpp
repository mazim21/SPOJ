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

ll arr[40];

void init()
{
    arr[1] = 2;
    ll i;
    for(i=2;i<36;i++)
    {
        arr[i] = 3*arr[i-1] + 2;
    }
}

int main()
{
    init();
    ll t,n;
    in(t);
    while(t--)
    {
        in(n);
        out(arr[n]);
    }


}
