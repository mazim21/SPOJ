#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define out(a) printf("%lld",(a))
using namespace std;

ll r = 0;

void fn(int start,string arr)
{
    ll i,j,num1=0,num2=0;

    num1 = arr[start] - '0';

    for(j=start + 1 ; j < arr.length();j++)
        num2 = num2 + arr[j] - '0';


    if ( num1 <= num2)
        {
            r++;
        cout << num1<<" "<<num2<<endl;
        }
    for(i=start+1;i<arr.length()-1;i++)
    {
        num1 = num1 + arr[i] - '0';
        num2 = num2 - arr[i] + '0';
       // cout << num1<<" "<<num2<<endl;
        if( num1 <= num2 )
            {
                r++;
            cout << num1<<" "<<num2<<endl;
            }
        else
            break;
    }
    if( arr[start] <= arr[start+1] && start+1 != arr.length()-1)
        fn(start + 1,arr);
    //cout << r;
}

int main()
{
    ll n,t,i;

    char arr[150];
    scanf("%s",arr);
    //cin >> arr;
    t = 1;

    while( 1 )
    {
        fn(0,arr);
         cout << t<< ". "<<r+1<<endl;
        scanf("%s",&arr);
        if(!(arr[0]>='0'&&arr[0]<='9'))
	     break;
        t++;
        r = 0;

    }




return 0;
}
