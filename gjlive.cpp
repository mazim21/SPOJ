#include<iostream>
using namespace std;

int main()
{
int i,j,k,t,a[20],l;
t=10;
int m;
int sum;
sum=0;
for(i=0;i<t;i++)
{
cin >> a[i];
if(sum < 100)
{sum=sum + a[i];
j=i;
}

}
if (sum==100)
{
    cout <<100<<endl;
    return 0;
}
k=sum - a[j];
m=100 - k;
m=(m>0)?m:-m;
l=sum - 100;
l=(l>0)?l:-l;
if(l <= m)
    cout << sum<<endl;
else
    cout << k<<endl;
return 0;
}
