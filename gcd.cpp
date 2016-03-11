#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int i,j,big;
    int div=(a>b)?b:a;
    big=(a>b)?a:b;
    int rem=0;
    while ( big >= div )
    {
        rem= big%div;
        if(rem ==0)
            return div;
        big = div;
        div = rem;
    }

}

main()
{
int x,y;
cin >> x;
cin >> y;
cout << gcd(x,y);

}
