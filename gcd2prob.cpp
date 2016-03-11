#include<iostream>
#include<string.h>
using namespace std;

long long int gcd(long long int div,char* ar)
{
    int len=strlen(ar);
    int i=0;
    long long int rem=0;
    while(i<len)
		{
			rem=rem*10+(long long)ar[i]-48;
			rem=rem%div;
			i++;
		}
		if (rem ==0)
            return div;
		int big;
		big = div;
		div=rem;
		while( big >= div)
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
long long int a;
char ar[251];
int t;
cin >> t;
while(t--)
{
cin >> a;
cin >> ar;
if(a==0)
cout << ar<<endl;
else if(ar[0]=='0')
cout << a<<endl;
else
cout << gcd(a,ar)<<endl;
}
}
