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
    ll n,i,j;

    in(n);
    while(n!=0)
    {
        ll arr[n+3];

        for(i=1;i<=n;i++)
            in(arr[i]);
        int flag = 1;

        for(i=1;i<=n;i++)
        {
            if(arr[ arr[i]  ] != i )
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");


        in(n);
    }

}
