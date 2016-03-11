#include<iostream>
#include<string.h>
using namespace std;

main()
{
long long int a;
char ar[251];
cin >> ar;
cin >> a;
int i=0;
int val=0;
int len=strlen(ar);
while(i<len)
		{
			val=val*10+(long long)ar[i]-48;
			val=val%a;
			i++;
		}
cout << "rem= "<<val;

}
