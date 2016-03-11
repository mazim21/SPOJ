#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

ll makenum(string b)
{
    ll i,s=0;
    int x;
    ll m = 1;
            for(i = b.length()-1; i>= 0 ; i--)
            {
                x = b[i] - '0';
                s = s + m*x;
                m = m*10;
            }
    return s;
}

int main()
{
    ll i,j,k,t;
    in(t);

    while(t--)
    {
        string a,b,c;
        char eq,pl;
        cin >> a;
        cin >> pl;
        cin >> b;
        cin >> eq;
        cin >> c;

        int aa=0,bb=0,cc=0;

        for(i=0;i<a.length();i++)
        {
            if( a[i] == 'm' )
            {
                aa = 1;
                break;
            }
        }

        for(i=0;i<b.length();i++)
        {
            if( b[i] == 'm' )
            {
                bb = 1;
                break;
            }
        }


        for(i=0;i<c.length();i++)
        {
            if( c[i] == 'm' )
            {
                c = 1;
                break;
            }
        }

        ll f=0,s=0,th=0;
        int x,m;
        if( aa == 1 )
        {
            s = makenum(b);
            th = makenum(c);
            f = th - s;
            cout << f <<" + "<<s<<" = "<<th;
        }
        else if(bb == 1)
        {
            f = makenum(a);
            th = makenum(c);
            s = th - f;
            cout << f <<" + "<<s<<" = "<<th;
        }
        else
        {
           f = makenum(a);
           s = makenum(b);
           th = f + s;
        cout << f <<" + "<<s<<" = "<<th;
        }
        cout << "\n";

    }

return 0;
}
