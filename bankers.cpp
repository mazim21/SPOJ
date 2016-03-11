#include<iostream>
using namespace std;

main()
{
int alloc[10][5],max[10][5],avai[5],need[10][5];
int p,r,i,j;
int over[10];
cout << "process:";
cin >> p;
cout << "resources:";
cin >> r;

cout << "max of all resources";
for(i=0;i<p;i++)
{
over[i]=0;
for(j=0;j<r;j++)
cin >> max[i][j];
}

cout << "alloc of all resources";
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
    cin >> alloc[i][j];
    need[i][j]= max[i][j] - alloc[i][j];
}

}
cout << "available";
for(i=0;i<r;i++)
    cin >> avai[i];
 int seq[p];
int c,k;
k=0;
/*cout << "alloc";
for(i=0;i<p;i++)
{
    for(j=0;j<r;j++)
        cout <<alloc[i][j]<<"\t";
    cout << "\n";
}

cout << "max";
for(i=0;i<p;i++)
{
    for(j=0;j<r;j++)
        cout <<max[i][j]<<"\t";
    cout << "\n";
}

cout << "need";
for(i=0;i<p;i++)
{
    for(j=0;j<r;j++)
        cout <<need[i][j]<<"\t";
    cout << "\n";
}
*/
//for(j=0;j<p;j++)
//        cout <<over[j]<<"\t";
i=0;
while(1)
{

    for(i=0;i<p;i++)
    {

        c=0;
        if (over[i] != 1 )
        {
            for(j=0;j<r;j++)
            {
                if (avai[j] >= need[i][j])
                    c++;

            }

            if (c==r)
              goto xy;
        }
        if(i==p-1)
            goto zz;
    }
    xy:
      //  cout << i<<"\t";
    seq[k++]=i;

    for(j=0;j<r;j++)
    {
        avai[j]=alloc[i][j] + avai[j];
    }
    over[i]=1;

}
zz:
    int flag;
    flag=1;
  for(i=0;i<p;i++)
  {
      if(over[i] != 1)
      {
          flag=0;
          break;
      }
  }
  if(flag)
  {
      cout << "safe seq\n";
      for(i=0;i<k;i++)
        cout << seq[i];
  }
  else
    cout << "No safe seq";

}
