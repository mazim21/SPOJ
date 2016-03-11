#include<iostream>
#include<math.h>
using namespace std;

 void gen_primes(int max)
     {
       int i,j,primes[max];
       for(i=0;i<max;i++) primes[i] = 1;

       for(i=2;i<=(int)sqrt(max);i++)
         {if (primes[i])
           for(j=i;j*i<max;j++) primes[i*j] = 0;
     }
     for(i=0;i<max;i++)
     {
     if(primes[i]==1)
     cout << i<<" ";}
     }

    main()
    {
    int i;
    cin >> i;
    gen_primes(i);
    }
