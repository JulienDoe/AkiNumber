#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

	int restart = 0;

	do {

		//Menu de de choix de min et max

		int min = 0; 
		int max = 0; 
		printf("=== Akinator du chiffre ===\n");
		printf("\nAkinator sais devinez des personnalités\n");
		printf("Tu es maintenant Akinator et tu dois deviner un chiffre entre 1 et 100\n");
		
		// Choix de la plage de choix par le user
		printf("\nTu dois choisir la plage de choix");
		printf("\nQuel le chiffre minimum que la machine va choisir ? =>");
		printf("\nMin =" );
		scanf_s("%d", &min);
		printf("\nMaintenant tu dois choisir le chiffre maximal que la machine va choisir =>");
		printf("\nMax = ");
		scanf_s("%d", &max);
		

		printf("\n=> La machine va choisir un nombre entre %d et %d \n",min,max);

		// Génération du nombre aléatoire

		int number = 0;
		srand(time(NULL));
		number = (rand() % (max - min + 1) + min);

		// Choix du chiffre par le user
		
		int usernumber = 0;


		// Boucle pour trouver le chiffre exact

		int try = 0;

		do {

			try++; // Compteur du nombre d'essais
			
			printf("\nA ton avis, quel est le nombre choisi ? ");
			scanf_s("%d", &usernumber);

			if (number < usernumber)
			{
				printf("\n Top HAUT!");

			}

			else if (number > usernumber)
			{
				printf("\nTrop BAS !");
			}

			else
			{
				printf("\a\nBRAVO TU AS GAGNE !!!!!!!");
				printf("\nCLAP CLAP CLAP !");
				printf("\nNombre d'essais total : %d",try);
			}

		} while (number != usernumber);
		
			// Relancer une partie ou non 

			printf("\n\nVeux - tu relancer une partie ? \nSi c'est le cas tape 1 =");
			scanf_s("%d", &restart);

		system("cls");

	} while (restart);

	return 0;
}
