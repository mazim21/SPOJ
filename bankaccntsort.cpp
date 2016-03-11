#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

char s[10000];

int main() {
  int T; cin >> T;
  for (int t = 0; t < T; ++t) {
    if (t > 0) cout <<"\n";
    int n; cin  >> n;
    n++;
    map<string, int> M;
    while (n--) {
      gets(s);
      M[(string)s]++;
    }
    std::map<string, int >::iterator i =M.begin();
    i++;
    for(i=i; i != M.end(); i++)
    {cout << i->first.c_str()<<" "<<i->second<<endl;}
  }
}
