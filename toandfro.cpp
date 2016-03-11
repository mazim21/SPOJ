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
    ll n,i,j,x;
    in(n);
    while(n!=0)
    {
    char a[300];

    cin >> a;
    x = strlen(a)/n;
    char b[x+1][n+2];
    ll k=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j] = a[k++];
        }
        i++;
        for(j=n-1;j>=0;j--)
        {
            b[i][j] = a[k++];
        }
    }
    /*for(i=0;i<x;i++)
    {
        for(j=0;j<n;j++)
            cout << b[i][j];
        cout << "\n";
    }*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<x;j++)
            cout << b[j][i];
    }
    cout << "\n";
    in(n);
}




}
