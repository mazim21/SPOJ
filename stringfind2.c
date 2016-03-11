#include <iostream>       // std::cout
#include <string>
#include <string.h>         // std::string
using namespace std;
int main ()
{
std::string str ;
std::string str2;
std::string str3;
int t,x;
cin >> t;
while(t--)
{cin >> x;
cin >> str2;
cin >> str;
int found = str.find(str2);
while(1)
{
     if (found==std::string::npos)
            break;
     cout << found<<endl;
     str
     found = str.find(str2);
}
}
}
