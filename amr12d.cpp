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

ll t,i,j;
in(t);
string s;

while(t--)
{
    cin >> s;
    int flag = 1;

    j = s.length()-1;

    for(   i=0 ;i < s.length()/2 ; i++)
    {
        if( s[i] != s[j])
        {
            flag = 0;
            break;

        }
        j--;
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}


return 0;
}
