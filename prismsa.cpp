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
    ll t,v,i;
    in(t);
    while(t--)
    {
        in(v);
        double r,ans;
        r = cbrt(4*v);

        ans = (double)( (sqrt(3)*r*r / 2) + ( 4*v*sqrt(3) )/r  );
        printf("%lf\n",ans);


    }



return 0;
}
