#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

int main()
{

    ll t,n,i,j;
    in(t);

    while(t--)
    {
            in(n);
         char arr[n+5];
        int dp[n+5][n+5];

        for(i=0;i < n+2;i++)
        {
            for(j=0;j < n+2;j++)
                dp[i][j]= 9;
        }

        cin >> arr;

        for(i=0;i < strlen(arr) ;i++)
        {
            ll one = 0 ,zero = 0;

            for(j = i ; j < strlen(arr) ; j++)
            {
                    if( arr[j] == '0')
                        zero++;
                    else
                        one++;
                    if( one > zero )
                        dp[i][j] = j - i + 1;
                    else
                        dp[i][j] = 0;
            }
        }
        for(i=0;i<strlen(arr);i++)
            cout << arr[i]<<"  ";
        cout << endl;
        for(i=0;i< strlen(arr);i++)
        {
            for( j =0 ; j< strlen(arr) ;j++)
                cout << dp[i][j]<<"  ";
            cout << "\n";
        }


    }


return 0;
}
