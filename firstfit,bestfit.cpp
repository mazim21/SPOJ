#include<iostream>
using namespace std;


main()
{
int i,j,k,t;
int n,m,a[20],b[20],bb[20];
int flag;
cout << "number of processes";
cin >> n;
cout << "size one by one";
for(i=0;i<n;i++)
cin >> a[i];

cout << "number of holes";
cin >> t;
cout << "size one by one";
for(i=0;i<t;i++)
{cin >> b[i];
bb[i]=b[i];
}


/*cout << "First fit\n\n";

for(i=0;i<n;i++)
{
    flag=1;
    for(j=0;j<t;j++)
    {
        if(b[j] >= a[i])
        {
            b[j]=b[j]-a[i];
            cout << "process "<<i<<" in hole "<<j<<endl;
            flag=0;
            break;

        }

    }
    if (flag)
    cout<< "No hole for process "<<i<<endl;
}
*/
cout << "\nWorst fit\n\n";
int x;
for(i=0;i<t;i++)
{
    for(j=i+1;j<t;j++)
    {
        if( bb[i] < bb[j] )
        {
            x=bb[i];
            bb[i]=bb[j];
            bb[j]=x;
        }
    }
}

for(i=0;i<n;i++)
{
    flag=1;
    for(j=0;j<t;j++)
    {
        if(bb[j] >= a[i])
        {

             for(k=0;k<t;k++)
           {

                if( b[k] == bb[j])
                    break;
            }
            cout << "process "<<i<<" in hole "<<k<<endl;
            flag=0;

            bb[j]=0; //bb[j] = bb[j] - a[i];
            //sort
            //b[k]=b[k]-a[i];
            break;

        }

    }
    if (flag)
    cout<< "No hole for process "<<i<<endl;
}
}
