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

void mul(ll a[],ll b[],ll n)
{
    ll i,j,k,f=0;
    ll temp[n+1],sum=0;
    for(j=0;j<n;j++)
    {
        //cout << "temp arr= ";
        for(i=0;i<n;i++)
        {
            temp[i] = a[f++];
            //cout << temp[i]<<" ";
        }
        //cout <<"\n";
        k = 0;
        for(i=0;i<n*n;i++)
        {
          //  cout << "temp="<<temp[i%n]<<"*"<<b[k]<<endl;
            sum = sum + temp[i%n]*b[k];
            //cout << "sum="<<sum<<endl;
            k++;
        }

    }
    cout << sum<<endl;
}

int main()
{
    ll i,j,n,q,ii,jj,val;
    char x;
    in(n);

    ll a[n*n+2],b[n*n+2];

    ll arr[n+1][n+1];

    for(i=0;i<n*n;i++)
        in(a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            in(arr[i][j]);
    }
    ll k;
    i = 0,k=0;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        b[k++]=arr[i][j];

    }
    //for(i=0;i<n*n;i++)
      //  cout << b[i]<<" ";

    in(q);
    for(ll ki=0;ki<q;ki++)
    {
        cin >> x;
        if( x == 'A' )
        {
            in(ii);
            in(jj);
            in(val);
            ll ta;
            ta = n*ii + jj;
            a[ta] = val;
            //cout <<"yup";
             //for(i=0;i<n*n;i++)
        //out(a[i]);
        }
        else
        {
            in(ii);
            in(jj);
            in(val);
            arr[ii][jj] = val;
            k = 0;
            for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            b[k++]=arr[i][j];

        }

        }

       mul(a,b,n);
    }
}
