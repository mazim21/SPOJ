#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define pb push_back
#define out(a) printf("%lld\n",(a))
using namespace std;

int main()
{
    ll t,i,j,w,b;
    in(t);
    while(t--)
    {
        in(w);
        in(b);

        if(w == 0)
        {
            if( b%2 == 0 )
                printf("%f\n",0.000000);
            else
                printf("%f\n",1.000000);

                goto xy;
        }

        else if( b == 0 )
        {
            printf("%f\n",0.000000);
            goto xy;
        }

        if( b%2 == 0 )
        {
             printf("%f\n",0.000000);
        }
        else
            printf("%f\n",1.000000);

        xy:
            w = w;



    }

return 0;
}
