#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *F_file;
	
	//Écriture
	F_file = fopen(argv[1], "w");
	int nbPers = atoi(argv[2]);
	int i;
	for (i = 1; i <= nbPers; ++i)
	{
		fprintf(F_file,"%s\n", argv[2 + i]);
	}
	fclose(F_file);
	
	//Lecture
	F_file = fopen(argv[1], "r");
	char nomPers[100];
	while (!feof(F_file))
	{
		fscanf(F_file,"%s\n", nomPers);
		printf("%s\n", nomPers);
	}
	fclose(F_file);
	
	return 0;
}