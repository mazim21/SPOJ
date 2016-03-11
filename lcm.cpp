#include<iostream>
#include<math.h>
using namespace std;

int arr[10000],br[10000];
int fi,la,ch;
void primefac(int a)
{int k=1;
while(a%2==0)
{if(k)
    {//cout << 2;
    if(ch)
    arr[fi++]=2;
    else
        br[la++]=2;
    //k=0;
    }
a=a/2;
}

for(int i=3;i<=sqrt(a);i=i+2)
{k=1;
while(a%i==0)
{if(k)
    {//cout << i<<" ";
     if(ch)
    arr[fi++]=i;
    else
        br[la++]=i;
    //k=0;
    }
a=a/i;}
}
if(a>2)
    {
        //cout << a;
        if(ch)
    arr[fi++]=a;
    else
        br[la++]=a;
    }
return;
}

main()
{
int i,j,n,t,m;
int lcm;
cin >> t;
while(t--)
{
    lcm=1;
    for(i=0;i<1000;i++)
    {
        arr[i]=0;
        br[i]=0;
    }
    ch=1;
    fi=0;
    la=0;
    cin >> n;
    cin >> m;
primefac(n);
ch=0;
primefac(m);

/*for(i=0;i<fi;i++)
    cout << arr[i];
cout << "\n";

for(i=0;i<la;i++)
    cout << br[i];*/
for(i=0;i<fi;i++)
{
    for(j=0;j<la;j++)
    {
        if(arr[i] == br[j])
        {
            br[j]=1;
            break;
        }
    }
}
for(i=0;i<fi;i++)
    lcm=lcm*arr[i];
for(i=0;i<la;i++)
    lcm=lcm*br[i];
//cout << lcm<<endl;
cout << lcm/n << " "<<lcm/m<<endl;

}


}
