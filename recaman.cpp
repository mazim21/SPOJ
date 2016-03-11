#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

long long int m[500005];
int main()
{
long long int i,t;
int k;

//map<long long int,long long int>::iterator t;
m[0]=0;
int arr[500005]={0};
arr[0]=1;
for(i=1;i<50000;i++)
{
    t = m[i-1] - i  ;

    if ( t > 0  && arr[t] == 0)
        {
            m[i] = t;
        arr[t]=1;
        }
    else
         {
             m[i] = m[i-1] + i;
         arr[m[i]]=1;
         }
}

cin >> k;
while(k!=-1)
{

    cout << m[k]<<endl;
    cin >> k;
}

return 0;
}
