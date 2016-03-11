#include<stdio.h>
#include<math.h>
main()
{
double ab,ac,ad,bc,bd,cd;
double U,V,W,u,v,d,c,w,X,Y,Z,x,y,z,a,b;
int t;
scanf("%d",&t);
while(t--)
{scanf("%lf",&ab);
scanf("%lf",&ac);
scanf("%lf",&ad);
scanf("%lf",&bc);
scanf("%lf",&bd);
scanf("%lf",&cd);
U=ab;
V=ac;
W=bc;
u=cd;
v=bd;
w=ad;
X = (w - U + v)*(U + v + w);
x = (U - v + w)*(v - w + U);
Y = (u - V + w)*(V + w + u);
y = (V - w + u)*(w - u + V);
Z = (v - W + u)*(W + u + v);
z = (W - u + v)*(u - v + W);
a = sqrt (x*Y*Z);
b = sqrt (y*Z*X);
c = sqrt (z*X*Y);
d = sqrt (x*y*z);
double k=(b+c+d-a)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d);
k=sqrt(k);
k=k/192;
k=k/(u*v*w);

printf("%.4lf\n",k);
}
return 0;
}
