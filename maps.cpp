#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;


main()
{
map<int,int >mymap;
char s[20];
int k=0;
mymap[34]=1;
mymap[22]=2;
for(std::map<int, int >::iterator i = mymap.begin(); i != mymap.end(); i++)
//for( map<char *,int>::const_iterator it=mymap.begin(); it!=mymap.end(); ++it)
cout << i->second<<endl;
cout << mymap[22];
}
