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
    ll i,j,n;
    in(n);
    ll arr[n+3];
    ll ans[n+3][n+3];
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
        ans[i][j] = 0;

    for(i=1;i<=n;i++)
        in(arr[i]);

    ll max,ip=1,jp=1;
        max = 0;

    for(i=1;i<=n;i++)
        {
            ans[i][i] = arr[i];
            if( max < ans[i][i] )
            {
                max = ans[i][i];
                ip = i;
                jp = i;
            }
        }



    for(i=1;i<=n;i++)
    {
        for(j = i+1 ; j <= n ;j++)
        {
            ans[i][j] = ( arr[j]^ ans[i][j-1] );
            if ( max < ans[i][j] || (max == ans[i][j] && i < ip) || (max == ans[i][j] && i == ip && j < jp)  )
            {
                /*cout << "max="<<max<<endl;
                cout << "ans[i][j]"<<ans[i][j]<<endl;
                cout <<"i="<<i<<"j="<<j<<endl;*/
                max = ans[i][j];
                ip = i;
                jp = j;
            }
        }
    }

    /*for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                cout << ans[i][j]<<" ";
            cout << "\n";
        }
        cout << "\n";*/
        cout << max<<endl;
        cout << ip << " "<<jp<<endl;

return 0;

}
