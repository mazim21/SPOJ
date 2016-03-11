#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main()
{
int t,i,j;
string str1;
cin >> str1;
string str2;
cin >> str2;
int n=str1.size();
int m=str2.size();
int arr[n+1][m+1];
char b[n+1][m+1];

for(i=0;i<n+1;i++)
{arr[i][0]=0;
b[i][0]='0';
}

for(i=0;i<m+1;i++)
{arr[0][i]=0;
b[0][i]='0';
}

for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
{
    if(  str1[i-1] == str2[j-1]  )
        {arr[i][j]=arr[i-1][j-1]+1;
        b[i][j]= '%';
        }
    else
    {
        if (arr[i-1][j] >= arr[i][j-1])
        {
            arr[i][j]=arr[i-1][j];
            b[i][j]='|';
        }
        else
        {
            arr[i][j]= arr[i][j-1];
            b[i][j]='-';
        }

    }
}

}

for(i=0;i<n+1;i++)
{
    for(j=0;j<m+1;j++)
        cout << b[i][j]<<"\t";
    cout << "\n";
}
i=1;
for(j=0;j<n+1;j++)
{
    if(b[i][j]=='%')
        cout << str2[j];
}
cout <<"\n"<<arr[n][m];

}
