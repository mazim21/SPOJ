#include<iostream>
using namespace std;

char state[10],self[10];

void test(int i)
{
    if( state[(i+1)%5] != 'e' && state[(i+4)%5]!='e' && state[i]=='h')
        {state[i]='e';
        self[i]='s';}
}

void pickup(int i)
{
    state[i]='h';
    test(i);
    if(state[i]=='h')
        self[i]='w';

}

void putdown(int i)
{
    state[i]='t';
    test((i+1)%5);
    test((i+4)%5);
}

main()
{
int i,j,k;

for(i=0;i<5;i++)
{
state[i]='t';
self[i]='s';
}
int n=2,x,y,z;
cout << "choice 2.eating 3.thinking";
cin >> n;
while(n!=1)
{
if(n==2)
{
    cout << "which hungry";
    cin >> x;
    pickup(x);
}
else if(n==3)
{
    cout << "which thinking";
    cin >> x;
    putdown(x);

}
cout << "\nstates\n";
for(i=0;i<5;i++)
{
    cout << "phil  " << i<< "  state is  "<<state[i]<<"  and self is  "<<self[i]<<endl;
}

cout << "choice 2.eating 3.thinking";
cin >> n;

}

}
