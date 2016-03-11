#include<stdio.h>
int main(){int i=10,h=0;char c;while(i--){h=1;while( (c=getchar()) >'@'){if(c=='L'||c=='T'||c=='D'||c=='F')h=h*2;}printf("%d\n",h);}return 0;}
