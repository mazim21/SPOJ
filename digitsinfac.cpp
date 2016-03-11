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

ll t,n,ans;

in(t);

while(t--)
{
    in(n);
    if( n== 0 || n==1 || n== 2)
        printf("%d\n",1);
    else
    {
        ans = ceil(log10(2*pie*n)/2 + n*log10(n/ln10));
        printf("%lld\n",ans);
    }


}

return 0;
}
