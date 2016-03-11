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
long long int sum1=0;
void power2(long long int a);
long long int fibo (long long int a,long long int b)
{
    if (a == 0)
    {sum1=0;
    goto xy;}
    else if (a==1)
        {sum1=1;
        goto xy;}
        else if(a==2)
            {sum1=2;
        goto xy;}
       sum1 = 2;
    power(a-1);
    xy:
 //   cout << "sum1=="<<sum1<<endl;
    sum=0;
m[0][0]=1;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
    if (b == 0)
    {sum=0;
    goto xyz;}
    else if (b==1)
        {sum=1;
        goto xyz;}
        else if(b==2)
            {sum=2;
        goto xyz;}
       sum = 2;
    power2(b-1);
    xyz:
//    cout << "sum=="<<sum<<endl;
cout << sum - sum1<<endl;
}

void power (long long int a)
{
    int f[2][2] = {{1,1},{1,0}};
    for(int i=2;i<=a;i++)
    {
          multiply(f, m);
          sum1=sum1+mod(m[0][0],1000000007);
    }
//cout << "sum=="<<sum<<endl;
}
void power2(long long int a)
{
    int f[2][2] = {{1,1},{1,0}};
    for(int i=2;i<=a;i++)
    {
          multiply(f, m);
          sum=sum+mod(m[0][0],1000000007);
    }
//cout << "sum=="<<sum<<endl;
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

d=fibo(a,b);

m[0][0]=1;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
}
return 0;
}
