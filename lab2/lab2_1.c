#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
int pd = getpid();
printf("Mon pid est : %d \n", pd);

int i = 0, val_fils, val_pere;
	while (i < 10)
	{
		int val_fork = fork();
		if (val_fork == -1)
		{
			printf("Échec \n");
		}
		else if (val_fork == 0) 
		{
			printf("Je suis le No %d mon pid esd %d mon pere est %d \n", i+1, getpid(), getppid());
			exit(0);
		}
i++;
	}
return 0;
}
