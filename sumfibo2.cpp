#include<iostream>
using namespace std;
int x;
void power (long long int a);
void multiply(int mh[2][2], int n[2][2]);
int m[2][2] = {{1,1},{1,0}};
long long int sum=0;

long long int mod(long long int v,long long int z)
{
    long long int r;
    r=v%z;
    if (r < 0)
        return r+z;
    else
        return r;
}
long long int fibo (long long int a,long long int b)
{
    sum=0;
    if (a == 0)
     return 0;
    power(b-1);
    return (sum) ;

}

void power (long long int a)
{
    int f[2][2] = {{1,1},{1,0}};
    if(a==0 || a==1)
        return;
    power(a/2);
     multiply(m, m);
     if (a%2 != 0)
     multiply(m,f);
cout << "in mul x=="<<x<<endl;
}
void multiply(int mh[2][2], int n[2][2])
{
   x =  mh[0][0]*n[0][0] + mh[0][1]*n[1][0];
  int y =  mh[0][0]*n[0][1] + mh[0][1]*n[1][1];
  int z =  mh[1][0]*n[0][0] + mh[1][1]*n[1][0];
  int w =  mh[1][0]*n[0][1] + mh[1][1]*n[1][1];

  m[0][0] = x;
  m[0][1] = y;
  m[1][0] = z;
  m[1][1] = w;
 cout << "x=="<<x<<endl;
}

int main()
{
int n,i;
long long int a,b,c,d;
cin >> n;

for(i=0;i<n;i++)
{
cin >> a;
cin >> b;

cout<<fibo(a,b)<<endl;

m[0][0]=1;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
}
return 0;
}
