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

int fn(int node[],int visit[],int n)
{
    int i,min=9999999;
    int pos;
    for(i=1;i<=n;i++)
    {
        if( visit[i] == 0)
        {
            if( min > node[i] )
            {
                pos = i;
                min = node[i];
            }

        }
    }
    return pos;
}

int main()
{
    int t,n,m,start,last,a,b,weight,i,j;
    get(t);
    while(t--)
    {

        get(n);
        std::list<int> edge[n+1];
        std::list<int>::iterator x,y;
        std::list<int> cost[n+1];
        std::list<int> cost2[n+1];
        get(m);
        get(start);
        get(last);

        for(i=0;i<m;i++)
        {
            get(a);
            get(b);
            get(weight);

            edge[a].push_back(b);
            edge[b].push_back(a);
            cost[a].push_back(weight);
            cost[b].push_back(weight);

        }

        if( m < n - 1 )
            cout <<"NONE\n";

        else
        {

        int visit[100002]={0};
        int node[n+2];

        for(i=0;i<n+1;i++)
            node[i] = 99999999;
        node[start]=0;

        int mnode,xx=2;

        while( visit[last] != 1 )
        {
            mnode = fn(node,visit,n);
            visit[mnode] = 1;
            //cout << "neighbo of"<<mnode<<endl;
            y = cost[mnode].begin();
            for(x = edge[mnode].begin();x!=edge[mnode].end();x++,y++)
            {
                //cout << "node="<<*x<<endl;
                if( node[*x] > *y + node[mnode] )
                    node[*x] = *y + node[mnode];
                //cout << "node"<<*x<<"val="<<node[*x]<<endl;
            }
            //xx--;
        }
        for(i=1;i<=n;i++)
            cout << node[i]<<" ";
        //cout << node[last]<<endl;
        }

    }



return 0;
}
