#include<iostream>
#include<string>
using namespace std;

int main()
{
int i=0,j,l;
std::string a;
cin >> a;
int k=1;
while(a[0]!='-')
{
    int c=0;
l=a.size();
i=0;
    while(i!=l)
    {
        if(a[i]== '{' && a[i+1]== '{')
        c++;
        if(a[i]== '}' && a[i+1]== '{')
        c=c+2;
        i=i+2;

    }

    cout <<k<<". "<<c<<endl;
    k++;
    cin >>a;

}
return 0;
}
