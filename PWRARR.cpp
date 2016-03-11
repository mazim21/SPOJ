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
    ll t,n,i,j;
    in(t);
    while(t--)
    {
        in(n);
        ll arr[n+2],c,k;
        ll b[50005]={0},x;
        c = 0,k=0;
        for(i=0;i<n;i++)
            {
                in(x);
                if( b[ x ] == 0 )
                {
                    b[ x ]++;
                    c++;
                }
                else
                {
                    b[x]++;
                    if( b[x] == 2 )
                    arr[k++] = x;

                }
            }
            if( c == n )
        printf("%lld\n",(n*(n+1))/2);
        else
        {
            c = (n*(n+1))/2;
            for(i=0;i<k;i++)
            {
                //cout << arr[i]<<endl;
                x =  b[ arr[i] ];
                x--;
                c = c + (x*(x+1) )/2;
            }
            out(c);
        }

    }


return 0;
}
