#include <stdio.h>
#include <math.h>
int main(){
   float c;
   int result;
   printf("Enter a number: ");
   scanf("%f",&c);
   result=ceil(c);
   printf("Ceiling integer of %.2f=%d",c,result);
    return 0;
}
