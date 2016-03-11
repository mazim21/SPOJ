#include<iostream>
using namespace std;

void block(int *a,int l,int k,int n)
{
    int i=l,j=k;
    while(l < n && k < n)
    {
        *(a+k+l)=1;
        k++;
        l++;
    }
    while( i>=0 && j>=0)
    {
        *(a+i+j)=1;
        i--;
        j--;
    }
}
main()
{
int i,j,k,l=0,n,a[3][3];
cin >> n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
a[i][j]=0;
}
i=0;
j=0;
//for(i=0;i<n;i++)
//{
//for(j=0;j<n;j++)
//{
if(a[j][i]==0)
{
    a[j][i]=1;
l++;
block(a,j,i,n);
}

//}
//}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout << a[i][j];
}


}
