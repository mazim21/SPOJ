#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
main()
{
int pid;
printf("welcome\n");
sleep(5);
if(pid == 0)
{
printf("\ni am child my id is %d",getpid());
}

}
