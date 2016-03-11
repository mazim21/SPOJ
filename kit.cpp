#include<iostream>
using namespace std;

main()
{
int i,t,n,a[105],j;
cin >> n;
string s;
for(i=0;i<n;i++)
    cin >> a[i];

    cin >> s;
    i=0;
    while( 1)
    {
        for(j=0;j<s.length();j++)
        {
            if(s[j]=='-')
         {
             s[j]='\0';
             s[j+1]='\0';
             cout << s<<endl;
             goto xy;
         }
         //s[j] = s[j] + a[i++];

        if(i==n)
        i=0;
         if( s[j]  + a[i] > 'z')
            s[j] = s[j] + a[i] - 26;
        else
            s[j] = s[j] + a[i];

        i++;
        }
        cout << s<<endl;
    if(i==n)
        i=0;
        cin >> s;
        if ( s[0]== '-')
            break;
    }
xy:
    i=i;
}
