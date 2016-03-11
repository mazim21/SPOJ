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

void fn(string s)
{
    ll i,j;
    string q="",temp="";
    int x = 2,y,z,c,w;
    c = 0;
    for(i=0;i<s.length();i++)
    {
        y = s[i] - '0' + c;
        if( y < 2  )
        {
            temp = 0 + '0';
            q = q + temp;
            y = y*10;
            if( i+1 < s.length() )
            {
                w = s[i+1] - '0';
                y = y + w;
                x = y/2;
                temp = x + '0';
                q = q + temp;
                i++;
                if( y % 2 == 1 )
                    c = 10;
                else
                    c = 0;
            }
            /*else
            {
                temp = 0 + '0';
                q = q + temp;
            }*/
        }
        else
        {
            z = y/2;
            w = y%2;
            temp = z +'0';
            if( w == 1 )
                c = 10;
            else
                c = 0;
            q = q + temp;
        }
    }
    i = 0;
    while(q[i] == '0')
        i++;
    for(i=i;i<q.length();i++)
        cout << q[i];
    cout <<endl;
}

int main()
{
    ll i,j,k;
    int t;
    t = 10;

        while(t--)
    {

        string a = "",b="",add="",diff="";
        cin >> a;
        cin >> b;

        while( b.length() != a.length() )
        {
            b = "0" + b;
        }
        int x,y,z,c;
        string temp="";
        c = 0;
        for(i= a.length()-1; i >= 0 ;i--)
        {
            x = a[i] - '0';
            y = b[i] - '0';

            z = (x + y + c)%10;
            c = (x + y + c)/10;
            temp = z + '0';
            add = temp + add;
        }
        if( c!= 0 )
        {
            temp = c + '0';
            add = temp + add;
        }

        for(i=a.length()-1;i>=0;i--)
        {
            x = a[i] - '0';
            y = b[i] - '0';

            z = x - y;
            if( z < 0 )
            {
                z = z + 10;

                if( a[i-1] == 0 )
                {
                    j = i - 1;
                    while(a[j] == 0)
                    {
                        a[j] = 9 + '0';
                        j--;
                    }
                    a[j] = a[j] - 1;
                }
                else
                {
                    a[i-1] = a[i-1] - 1;
                }
            }
            temp = z + '0';
            diff = temp + diff;
        }
        diff.erase(0, min(diff.find_first_not_of('0'), diff.size()-1));
        add.erase(0, min(add.find_first_not_of('0'), add.size()-1));
        //cout << diff<<endl;
        if( add.compare("0") != 0 )
        fn(add);
        else
            cout << 0<<endl;
        if( diff.compare("0") != 0 )
        fn(diff);
        else
            cout << 0<<endl;
    }
    /*string xx;
    cin >> xx;
    fn(xx);*/

    return 0;
}
