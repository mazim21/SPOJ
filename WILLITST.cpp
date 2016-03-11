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
    ll n;
    in(n);
    while( n%2 == 0 )
        n = n/2;
    if(n==1)
        cout <<"TAK\n";
    else
        cout <<"NIE\n";

return 0;

}
