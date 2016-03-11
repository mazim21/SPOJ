#include<iostream>
using namespace std;

main()
{
int i,j,d,n,k;
int a[14][100];

//cin >> d;
d=1;
while(d--)
{
    //cin >> n;
    //cin >> k;
    n--;
    k--;
    for(i=0;i<13;i++)
    {
        for(j=0;j<100;j++)
            a[i][j]=0;
    }

    if(n==0)
    {
        k=0;
        //goto xy;
    }
    for(i=0;i<12;i++)
    a[i][0]=i;
    a[1][0]=1;
    a[2][0]=2;
    a[2][1]=2;
    a[2][2]=1;

    for(i=3;i<13;i++)
    {
        for(j=1;j!=i+1;j++)
        {
            a[i][j] = a[i][j-1] + a[i-1][j];
        }
        a[i][i]=a[i][i]-1;


    }
    for(i=1;i<6;i++)
    {for(j=0;j<i+1;j++)
        cout << a[i][j]<<" ";
        cout << "\n";
    }

}

}
