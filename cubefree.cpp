#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll int
#include<stdio.h>
#define in(a) scanf("%d",&(a))
#define out(a) printf("%lld",(a))
using namespace std;

int a[1000001]={0};
int main()
{
ll t,i,n,j,y;
//in(t);
scanf("%d",&t);

for(i=2;i<=100;i++)
{
    y = i*i*i;
    for(j=y;j<=1000001;j=j+y)
   a[j]=-1;
}
j = 1;
for(i=1;i<=1000001;i++)
{
    if( a[i] == 0 )
        a[i]=j++;
}
//for(x=m.begin();x!=m.end();x++)
  //  cout << x->first<<" ";
ll c=1;
while(t--)
{
    scanf("%d",&n);
    if( a[n] == -1)
        printf("Case %d: Not Cube Free\n",c);

    else
        printf("Case %d: %d\n",c,a[n]);

    c++;
}

return 0;
}
