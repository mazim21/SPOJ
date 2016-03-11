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

int main()
{

    ll l,r,i,ans,a;

    in(l);
    in(r);
    ans = 0;
    ans = pow (2 , ceil( log2(r)) ) - 1;
    cout << ans<<endl;

return 0;
}
