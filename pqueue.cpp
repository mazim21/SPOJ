#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define pb push_back
#define out(a) printf("%lld\n",(a))
using namespace std;

int main()
{
    int t;

    ll pos,n,i,j,a,c;

    get(t);
    while(t--)
    {
        std::vector<ll> v;
        std::vector<ll>::iterator x;
        std::map<ll,ll> m;
        std::map<ll,ll>::iterator y;

        c = 0;
        in(n); in(pos);

        for(i = 0 ; i < n; i++ )
        {
            in(a);
            v.pb(a);
            m[a]++;
        }
        int done[200]={0};
        ll si;
        x = v.begin();
        i = 0;
        int flag = 0;
        while( 1 )
        {
            //cout << "i="<<i<<endl;
            //cout << "v[i]"<<v[i]<<endl;
            a = v[i];
            //cout << "a=="<<a<<endl;
            y = m.upper_bound(a);

            if( y!= m.end() )
            {
                //cout << "found a bigger"<<endl;
                si = v.size();
                v.pb(a);
                v.resize(si+1);
                if( i == pos )
                {
                    pos = v.size() - 1;
                   // cout << "new pos="<<pos<<endl;
                    //cout << v[v.size() - 1]<<endl;
                }

            }
            else
            {
                //cout << "Not found a bigger"<<endl;
                y--;
                //cout << "done job"<<y->first<<endl;
                y->second--;
                c++;
                if( y->second == 0 )
                    {
                        //cout <<"erasing="<<y->first<<endl;
                        m.erase( y->first );
                    }

            }
            if( i == pos )
                break;

            //x++;
            i++;
        }
        cout << c<<endl;

        v.clear();        m.clear();
    }

return 0;
}
