#include<iostream>
using namespace std;
#include<string>

int main()
{
string s;
int t,k,q,i,n;

cin >>t;
while(t--)
{
cin >>n;
cin >> k;
cin >>q;
cin >>s;
int i,l,r,ii;
for(ii=0;ii<q;ii++)
{
cin >> l;
cin >> r;

int f=1;
int len;
len =r-l+1;
int sum;
sum=0;
for(i=len;f<=k;i--)
{
    sum=sum+i;
    f++;
}
//cout << sum;
f--;
int j,first=0,last;
j=len-f;
f++;
//cout <<j;
//cout <<f;
int zero,one;
for(i=0;i<j;i++)
{
    int zero=0;
    int one=0;
    int first=l-1;
    int last;
    last=first + f-1;
    //cout << "first= "<<first<<endl;
    //cout << "last= "<<last<<endl;
    for(last=last;last<r;last++)
    {

        zero=0;
        one=0;
        for(int a=first;a<=last;a++)
        {
        	//cout << s[a];
            if(s[a]=='0')
            zero++;
            else
                one++;
        }
        if (zero <=k && one <= k)
            {
                sum++;}
        first++;
    }
f++;
}
cout << sum<<endl;
}

}
}

