#include<iostream>
using namespace std;

main()
{

int i,j,n;

cin >> n;
while(n!=0)
{
j=0;
j= 5 + (n-1)*5;
i=n-1;
if(i!=0)
j = j+ ((3*i + 1)*i )/2;
cout << j<<endl;
cin >> n;
}

}
