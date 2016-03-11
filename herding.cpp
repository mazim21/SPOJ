#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int n,m,i,j,ii,jj;
cin >> n;
cin >> m;

char a[n+2][m+3],s,c;
int di[n+2][m+3];
for(i=0;i<n;i++)
{
    scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        di[i][j]=0;
}
s = a[0][0];
int x,no;
long long int k=0,count=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        c = a[i][j];
        ii=i;
        jj=j;
        x=0;
        no=1;
        while(c == 'S' || c == 'N' ||c == 'E' ||c == 'W' )
        {
            //ii=i;
            //jj= j;
            x=1;
             di[ii][jj] = k;
             c = a[ii][jj];
             a[ii][jj]='*';
            if( c == 'S')
                {c = a[++ii][jj];
                }
            else if(c == 'N')
                {c = a[--ii][jj];
                }
             else if(c == 'E')
                {c = a[ii][++jj];
                }
            else
                {c = a[ii][--jj];
                }
                if(c != 'S' || c != 'N' ||c != 'E' ||c != 'W')
                {
                    if(di[ii][jj] != k)
                        no=0;
                    else
                        no=1;

                }

        }
        if(x==1)
        k++;
        if(no && x==1)
            count++;
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        cout << di[i][j];
    cout << "\n";
}
cout << count<<endl;
return 0;
}
