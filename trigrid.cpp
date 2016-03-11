#include<iostream>
using namespace std;

main()
{
long long int m,n;
int t,i,j,k;

cin >> t;
while(t--)
{
    cin >> m;
    cin >> n;

    if(m==1 || (m==1 && n==1))
        cout << "R\n";
    else if ( n == 1)
        cout << "D\n";
    else if ( m ==n && m%2== 0 )
        cout << "L\n";
    else if ( m ==n && m%2 !=0)
        cout << "R\n";
    else if ( m < n && m%2==0 )
        cout << "L\n";
    else if ( m < n && m%2!=0)
        cout << "R\n";
    else if ( m > n)
    {
        if ( n%2 == 0)
            cout << "U\n";
        else
            cout << "D\n";


    }


}
}
