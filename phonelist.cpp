#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#include<stdio.h>
#define in(a) scanf("%lld",&(a))
#define get(a) scanf("%d",&(a))
#define out(a) printf("%lld\n",(a))
#define sn struct node
#define ctoi(c) ((int)c - (int)'0')
using namespace std;

struct node
{
    int v;
    struct node* child[26];
}*root=NULL;

int flag;
struct node* getnode()
{
    sn *p;
    p = new sn;

    for(int i=0;i<10;i++)
        p->child[i] = NULL;
    p->v = 0;
    return p;
};

void insert(string x,sn *root)
{
    int i,j,index;
    sn *p = root;
    for(i=0;i<x.length();i++)
    {
        index = ctoi(x[i]);
        if( p->child[ index ] == NULL )
        {
            p->child[ index ] = getnode();
        }
         if( p->v == 1 )
        flag = 0;
        p = p->child[index];

    }

    p->v = 1;
}

int main()
{
    string x[10000];

    root = getnode();
    ll i,j,k,t,n;
    in(t);

    while(t--)
    {
        flag = 1;
        in(n);
        for(i=0;i<n;i++)
        {
            cin >> x[i];
            //insert(x,root);
        }
        sort(&x[0],&x[n-1]);
        for(i=0;i<n;i++)
            insert(x[i],root);

        //for(i=n-1;i>=0;i--)


        if(flag)
            cout << "YES\n";
        else
            cout <<"NO\n";

        for(i=0;i<10;i++)
            root->child[i] = NULL;

    }


}
