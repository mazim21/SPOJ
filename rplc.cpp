#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ln10 2.7182818284590452353
#define pie 3.141592653589793
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld",(a))
using namespace std;


int main()
{
ll t,i,n,c;
in(t);

for(c = 1 ; c<= t;c++)
{
    in(n);
    ll arr[n+1];

    int flag = 0;

    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);

    ll x,y;
    x = 0;
    y = 0;
    i = 0;

    while( i < n)
    {
        if( arr[i] < 0)
        {
            x = x + arr[i];
            if( x < 0 )
            {
                y = fabs(x) + y;
                x = 0 ;
            }
        }
        else
           x = x + arr[i];

        i++;
    }
   printf("Scenario #%lld: %lld\n",c,y+1);

}


return 0;
}
