#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include <cstdlib>
#include <algorithm>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

ll cmp2(ll a,ll b,ll c=0)
{
    if( a > b && a > c)
        return a;
    else if ( b > a && b > c )
        return b;
    else
        return c;
}

int main()
{
    int t;
    ll h,w,i,j;
    get(t);
    while(t--)
    {
        in(h);
        in(w);

        ll m[h+2][w+2],b[h+2][w+2];

        for(i=0;i<h+1;i++)
        {
            for(j=0;j<w+1;j++)
                {
                    m[i][j] = 0;
                    b[i][j] = 0;
                }
        }


        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                in(m[i][j]);
                if( i == 0)
                {
                    b[i][j] = m[i][j];
                }
            }
        }
        ll x;
        for(i=1;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(j == 0)
                {
                    x = max( b[i-1][j] , b[i-1][j+1]  );
                    b[i][j] = x + m[i][j];
                }
                else if( j == w-1 )
                {
                    x = max( b[i-1][j] , b[i-1][j-1]  );
                    b[i][j] = x + m[i][j];
                }
                else
                {
                    x = max(  b[i-1][j] , max( b[i-1][j-1] , b[i-1][j+1] )   );
                    b[i][j] = x + m[i][j];
                }
            }
        }
        /*for(i=0;i<h;i++)
        {
        	for(j=0;j<w;j++)
        	cout << b[i][j]<<" ";
        	cout << "\n";

        }*/
        i = h-1;
        x = 0;
        for( j = 0; j<w;j++)
        {
            x = (x < b[i][j])?b[i][j]:x;
        }
        out(x);
    }


return 0;
}
