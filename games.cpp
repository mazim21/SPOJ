#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

ll gcd(ll big,ll small)
{
    if(big % small == 0)
        return small;
    gcd(small,big%small);
}

int main()
{
    ll t,i;
    in(t);

    while(t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for(i=0;i<s.length();i++)
        {
            if( s[i] == '.' )
                {
                    flag = 1;
                    break;
                }
        }
        if( flag == 0 )
            cout <<1<<endl;
        else
        {
            ll big = 0,j=1,pos,num=0,x,small,c=0;
            pos = i;
            for(i=i+1;i<s.length();i++)
                    {
                        c++;
                        j = j*10;
                    }

            for(i=0;i<s.length();i++)
            {
                if(s[i]!= '.')
                num = 10*num + s[i] - '0';
            }
                //cout << num<<endl;
                //cout << j<<endl;
                big = (num > j)?num:j;
                small= (num > j)?j:num;
                x = gcd(big,small);
                cout << j/x<<endl;
        }


    }



return 0;
}
