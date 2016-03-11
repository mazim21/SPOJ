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
    ll a,b,c,t;
    char op;
    in(t);
    while(t--)
    {
        in(a);
        cin >> op;

        while( op != '=' )
        {

        switch(op)
        {
        case '+':
            in(b);
            a = a + b;
            break;
         case '-':
            in(b);
            a = a - b;
            break;
         case '/':
            in(b);
            a = a / b;
            break;
         case '*':
            in(b);
            a = a * b;
            break;

        }
            cin >> op;
        }
        out(a);
    }


return 0;
}
