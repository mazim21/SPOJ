#include <iostream>
using namespace std;

int main()
{
unsigned int m;
cin >> m;
int c,i=0;
if(m%10==0)
{
    c=0;
    cout << 2<<endl;
}
else
{
    cout << 1<<endl;
    cout << m%10<<endl;
}
return 0;
}
