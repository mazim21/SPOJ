#include<iostream>
using namespace std;

int main()
{
int t,n,m,i,j;
cin >> t;
while(t--)
{
cin >> n;
cin >> m;
string a[n+1];
int k=0;
int x[n*m+1],y[n*m+1];
k=0;
for(i=0;i<n;i++)
{
    cin >>a[i];
}
int z=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i][j]=='1')
        {
            x[z]=i;
            y[z]=j;
            z++;
        }
    }
}
int xd,yd,min;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        min = 10000000;
        if( a[i][j] == '1')
            cout << 0<<" ";
        else
        {
            for(k=0;k<z;k++)
            {
                xd = x[k] - i;
                yd = y[k] - j;
                xd=(xd>0)?xd:-1*xd;
                yd=(yd>0)?yd:-1*yd;
                min = (min < (xd+yd))?min:xd+yd;
            }
            cout << min << " ";
        }
    }
    cout << "\n";
}


}

return 0;
}
