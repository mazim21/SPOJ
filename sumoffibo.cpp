#include<iostream>
using namespace std;
int x;
#define MOD 1000000007
void power (long long int a);
void multiply(int mh[2][2], int n[2][2]);
int m[2][2] = {{1,1},{1,0}};
long long int sum=0;
long long int sum1=0;
/*long long int mod(long long int v,long long int z)
{
    long long int r;
    r=v%z;
    if (r < 0)
        return r+z;
    else
        return r;
}*/
long long int fibo (long long int a,long long int b)
{
    sum=0;
    sum1=0;
    power(b-1);
    //cout << "sum ="<<sum<<endl;
    sum = m[0][0];
    m[0][0]=1;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
    power(a-1);
    sum1=m[0][0];

    cout << (sum-sum1+MOD)%MOD<<endl ;

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
//cout << "x=="<<x<<endl;
}
void multiply(int mh[2][2], int n[2][2])
{
  long long int x =  (mh[0][0]*n[0][0] + mh[0][1]*n[1][0])%MOD;
  long long int y =  (mh[0][0]*n[0][1] + mh[0][1]*n[1][1])%MOD;
  long long int z =  (mh[1][0]*n[0][0] + mh[1][1]*n[1][0])%MOD;
  long long int w =  (mh[1][0]*n[0][1] + mh[1][1]*n[1][1])%MOD;

  m[0][0] = x;
  m[0][1] = y;
  m[1][0] = z;
  m[1][1] = w;
//cout << "x=="<<x<<endl;
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

d=fibo(a+1,b+2);

m[0][0]=1;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
}
return 0;
}
