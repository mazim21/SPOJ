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

    ll n,t,i,j;
    in(t);

    while(t--)
    {
        in(n);
        int c[102]={0};
        std::string s,a;
        for(i=0;i<n;i++)
        {
            cin >> s;
            if( i == 0 )
            a = s;
            for(j = 0 ; j < s.length() ; j++)
            {
                if( i == 0)
                {
                    c[j]++;
                }
                else
                {
                    if( s[j] == a[j] )
                        c[j]++;
                }

            }

        }

        for( i =0 ; i < s.length() ; i++)
        {
            if( c[i] == n )
                cout << a[i];
            else
                break;
        }
        cout << "\n";
    }



return 0;
}
