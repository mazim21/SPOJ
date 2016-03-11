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

ll isleap(ll n)
{
 	 if( (n%4==0) && (n%400==0) )
     {
	  	return 1;
     }
     else if( (n%4==0) && (n%100!=0) )
     {
     	return 1;
     }
     return 0;
}


int main()
{
    int t,day,mon,y;
    get(t);
    int m[14]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int m2[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    char week[8][10]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    ll i,j,k;

    while(t--)
    {
        get(day);
        get(mon);
        get(y);
        ll bet = 0;
        if( y == 2012 )
        {
            for( i = 2;i < mon ;i++ )
                bet = bet + m[i];

            if( mon == 1 )
            {
                bet = (day - 11);
                cout << week[bet % 7]<<endl;
            }
            else
            {
                bet = bet + 20 + day;
                cout << week[bet % 7]<<endl;
            }
        }
        else
        {
            bet = 355;

            for( i = 2013 ; i < y ; i++ )
            {
                if( isleap(i) )
                    bet = bet + 366;
                else
                    bet = bet + 365;
            }
            bet = bet + day;

            for(i = 1 ; i < mon ;i++ )
                bet = bet + m2[i];
                //cout << "bet=="<<bet<<endl;
            if( isleap(y) && mon > 2)
                bet++;
                //cout << "bet=="<<bet<<endl;
            cout << week[bet % 7]<<endl;
        }


    }


}
