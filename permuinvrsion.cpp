#include<iostream>
using namespace std;

int c[14][100];
int dp()
{
for(int i=1;i<=12;i++)
{
for(int j=0;j<=98;j++)
c[i][j]=0;
}
}
int fun(int c)
{
    return 1 + ((c)*(c-1) )/2;
}

int init()
{
int j=1,k,i,l,size;
c[1][0]=1;
l=0;
k=0;
int n,fill;
n=1;
for(i=2;i<=12;i++)
{
k=0;
size=fun(i);
fill=0;
while( fill < size)
{l=0;
        while(l<=k)
        {
        c[i][k]=c[i][k] + c[i-1][l];
        l++;
        }
    fill++;
    k++;

}
if(i>=5)
    {
        c[i][i]=c[i][i]-1;
    }
int f;
f=size/2;
l=0;
n=0;
k--;
while(l<f)
{
    c[i][k--]=c[i][n++];
    l++;
}

}
for(i=1;i<=12;i++)
{
    size=fun(i);
    for(j=0;j<size;j++)
            cout << c[i][j]<<"\t";
    cout << "\n";
}
}

int main()
{
int i,j,t,n,k;
//cin >> t;
c[0][0]=1;
c[1][0]=1;
c[1][1]=1;
dp();
init();
/*while(t--)
{
cin >> n;
cin >> k;

}*/

return 0;
}
