#include<iostream>
#include<map>
using namespace std;

main()
{
int i,j=0,c=0;
map<int ,int>mymap;
map<int ,int>p;
/*while(j<2)
{p[j]=j+6;;
j++;
}
if(p.find(3)==p.end())
    cout << "no";
else
    cout << "yes";*/
    mymap[1]=0;
    mymap[1]=5;
    mymap.insert(std::pair<int,int>(23,4));
   // for(std::map<int, int >::iterator i = mymap.begin(); i != mymap.end(); i++)
     //   cout << i->first<<i->second;

    map<int,int>::iterator t;
    t = mymap.find(23);
    cout << t->second;


}

