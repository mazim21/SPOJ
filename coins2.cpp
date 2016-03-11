#include<iostream>
#include<map>
using namespace std;
map <long int,long int>mymap;
long int maxi(unsigned x,unsigned y)
{
    return( x >= y)?x:y;
}
long int fun(long int n)
{
    if(n==1 || n==2 || n==3 || n==0)
    return n;
    if(mymap[n]!=0)
        return mymap[n];
    return maxi(n,fun(n/2)+fun(n/3)+fun(n/4));
}
int main()
{
long int i,j;
mymap[0]=0;
mymap[1]=1;
mymap[2]=2;
mymap[3]=3;

    cin >> i;
    cout << fun(i)<<"\n";
    mymap[i]=i;
return 0;
}
