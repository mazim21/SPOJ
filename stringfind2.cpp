#include <iostream>       // std::cout
#include <string>
#include <string.h>         // std::string
using namespace std;
int main ()
{
std::string str ;
std::string str2;
char str3[100];
int t,x,i,y;
cin >> t;
while(t--)
{cin >> x;
cin >> str2;
cin >> str;
y=str.size();
int found = str.find(str2);
while(1)
{
     if (found==std::string::npos)
            break;
     cout << found<<endl;
     int l=str.copy(str3,found+1,y);
     str3[l]='\0';
     str=str3;
     found = str.find(str2);
}
}
}
