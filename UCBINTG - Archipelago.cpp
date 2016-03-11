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

    ll r,c,i,j;
    in(r);
    in(c);
    string a;
    string pad[r+3];
    string pad2[r+3];

    for(i=0;i<=c+1;i++)
        pad[0] = pad[0] + '.';


    for(i=1;i<=r;i++)
        pad[i]='.';

    for(i=0;i<=c+1;i++)
        pad[r+1] += '.';


    for(i=1;i<=r;i++)
    {
        cin >> a;
        pad[i] += a;
        pad[i] += '.';
    }
    /*for(i=0;i<=r+1;i++)
        cout << pad[i]<<endl;*/
    for(i=0;i<=r+1;i++)
        pad2[i] = pad[i];

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if( pad[i][j] == 'X')
            {
                if( (pad[i-1][j] == '.' && pad[i][j+1]=='.' && pad[i][j-1]=='.')  || ( (pad[i-1][j] == '.' && pad[i][j+1]=='.' && pad[i+1][j]=='.' ) ) )
                    pad2[i][j] = '.';

            else if( (pad[i][j+1] == '.' && pad[i+1][j]=='.' && pad[i][j-1]=='.') || ( pad[i-1][j] == '.' && pad[i+1][j]=='.' && pad[i][j-1]=='.'   ) )
                pad2[i][j] = '.';
            }
        }
    }
    /*cout << "\n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            cout << pad2[i][j];
        cout <<"\n";
    }
    cout << "\n";*/
    ll mini=100,maxi=0,minj=100,maxj=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if( pad2[i][j] == 'X' )
            {
                if( i < mini )
                    mini = i;
                if( i > maxi )
                    maxi = i;
                if( j < minj )
                    minj = j;
                if( j > maxj )
                    maxj = j;
            }

        }
    }

    for( i = mini ;i <= maxi ; i++)
    {
        for( j = minj ; j<= maxj ;j++ )
            cout << pad2[i][j];
        cout << "\n";
    }

return 0;
}
