#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
	char nomFic[80], nomPers[80], buff[80];
	int fd;
	int nbEnreg, i, nbCar;
	
	//Ecriture dans un fichier
	printf("Entrez le nom du fichier à créer : ");
	scanf("%s", nomFic);
	fd = open(nomFic, O_CREAT | O_WRONLY, S_IRWXU);
	
	printf("Nombre d'enregistrements à créer : ");
	scanf("%d", &nbEnreg);
	
	i = 0;
	while (i < nbEnreg)
	{
		printf("Entrez le nom de la personne : ");
		scanf("%s", nomPers);
		nbCar = strlen(nomPers);
		write(fd, nomPers, nbCar);
		write(fd, "\n", 2);
		++i;
	}
	close(fd);
	
	//Lecture dans un fichier
	
	return 0;
}