#include<iostream>
using namespace std;


//1 == a
//0 == b
main()
{
int k,l,m,i,j;
bool arr[1000006]={0};
cin >> k;
cin >> l;
cin >> m;
int f[55];

for(i=0;i<m;i++)
cin >> f[i];

arr[0]=0;
arr[1]=1;

arr[l]=1;
i=2;
while( i <= k )
{
    //if ( i!=k && i!=l )
    arr[i]=0;
    //if ( i+1!=k )
    arr[i+1]=1;
    i = i+2;

}
arr[k]=1;
i=k+1;
//cout << i << "\n\n";
int t1=1,t2=1,t3=1;
for(j=i;j<1000006;j++)
{
	arr[j]=0;
	arr[l]=1;
    t1 = arr[j - k];

    t3 = arr[j-  1];
    if ( j!=l )
{
    if( t1 == 0 || t3 ==0)
    arr[j]=1;
    else
    arr[j]=0;

    if ( j > l )
    {
        if ( arr[j - l] == 0)
            arr[j]=1;
    }
}
arr[l]=1;
}

/*for(t1 = 0;t1<=15;t1++)
{
    if( arr[t1]==1)
        cout << "A";
    else
        cout << "B";

}
*/
arr[0]=0;
arr[1]=1;
arr[k]=1;
arr[l]=1;
for(int aa=0;aa<m;aa++)
{

    if ( arr[ f[aa] ] == 1)
    cout << "A";
    else
        cout << "B";

}
cout << "\n";
}
