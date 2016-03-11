#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int t,i,p[1000],n,j;
scanf("%d",&t);
while(t--)
{
cout << "no. of matrices";
cin >> n;
for(i=0;i<=n;i++)
cin >> p[i];
int m[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        m[i][j]=999999;
}
for(i=0;i<n;i++)
m[i][i]=0;
int q=99999;
j=1;

//for(i=0;i<n;i++)
//{
//for(j=2;j<n;j++)
//{
int k;
j=1;
i=0;
int ja[n-1];
for(i=0;i<n-1;i++)
{
    ja[i]=i+1;
}
int a=0;
int count =n-1;
int c2;
int c=n-1;
while(c--)
{
    i=0;
    j=ja[a++];
    c2=count--;
while(c2 !=0)
{
int l;
for(k=i;k<j;k++)
{
    l=m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1];
    m[i][j]=(l<m[i][j])?l:m[i][j];

}
i++;
j++;
c2 --;
}
}
//}

//}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{if(m[i][j]!=999999)
cout << m[i][j];
cout <<"\t";}
cout << "\n";
}

}
return 0;
}
