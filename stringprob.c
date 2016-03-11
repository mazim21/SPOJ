#include<stdio.h>
#include<conio.h>
#include<string.h>


main()
{
char a[201],b[201];
int n=0,i,j;
scanf("%d",&j);
scanf("%s",a);
while( n <= strlen(a))
{
a[n]=b[n/j];
n++;
}
b[n]='\0';
puts(b);

}
