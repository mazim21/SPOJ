#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld\n",(a))
using namespace std;

std::list<ll> l[300];


std::stack<ll> s;

void top(ll i,int visit[])
{
    //cout <<"i=="<<i<<endl;
    visit[i] = 1;
	std::list<ll>::iterator t;
    for(t=l[i].begin();t!=l[i].end();t++)
    {
       // cout << "for i=="<<i<<endl;
        //cout << "in for *t=="<<*t<<endl;
        if( visit[*t] == 0 )
            top(*t,visit);
    }
    //cout <<"push=="<<i<<endl;
    s.push(i);
	cout << i<<" ";
}

int main()
{
    ll n,m,i,j,node,x,de;

    in(n);

    while( n!= -1 )
    {
        in(m);
    int visit[300]={0};
    for(i=0;i<m;i++)
    {
        in(node);
        in(x);
        for(j = 0; j< x;j++)
        {
            in(de);
            l[node].push_back(de);
        }
    }

    for(i=1;i<=n;i++)
    {
        if(visit[i] == 0)
            top(i,visit);
    }

	cout << "\n";
   /* while( !s.empty() )
    {
        cout << s.top()<<" ";
        s.pop();
    }*/
    /*for(i=1;i<=n;i++)
    {
         cout <<"node="<<i;
        for(t=l[i].begin();t!=l[i].end();t++)
           cout << *t<<" ";
        cout << "\n";
    }*/
    in(n);
    }
return 0;
}
