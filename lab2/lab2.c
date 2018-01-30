#include <stdio.h>
#include <unistd.h>

int main()
{
int pd = getpid();
printf("Mon pid est : %d \n", pd);


int val_fork = fork();
if (val_fork == -1)
printf("Échec \n");
else if(val_fork == 0)
printf("je suis le fils et mon PID est %d \n",  getpid());
else
printf("je suis le père et mon PID est %d \n",  getpid());

}
