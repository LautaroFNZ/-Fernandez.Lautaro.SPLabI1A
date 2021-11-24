/*
 * controller.c
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#include "controller.h"

int menu()
{
	int option;

	printf("1. Cargar archivo\n");
	printf("2. Imprimir lista\n");
	printf("3. Asignar tiempos\n");
	printf("4. Filtrar por tipo\n");
	printf("5. Mostrar Duraciones\n");
	printf("6. Guardar peliculas\n");
	printf("7. Salir\n");

	option=GetInt("Ingrese una opcion:");

	return option;
}

int controller_loadMoviesFromText(char* path,LinkedList* pArrayListMovies)
{
	int exito=0;
	FILE* pFile;
	int comp;

	if(path!=NULL && pArrayListMovies!=NULL)
	{
		pFile = fopen(path,"r");

		comp = parser_MoviesFromText(pFile, pArrayListMovies);

		if(comp==1)
		{
			printf("\n...Datos de las peliculas cargados con exito!...\n");
			exito=1;

			fclose(pFile);

		}else
		{
			printf("ERROR\n");
		}



	}

	return exito;
}

void controller_listarMovies(LinkedList* pArrayListMovies)
{
	eMovies* moviesAux;

	int len;
	int i;

	if(pArrayListMovies!=NULL)
	{
		len = ll_len(pArrayListMovies);

		for(i=0;i<len;i++)
		{
			moviesAux = (eMovies*) ll_get(pArrayListMovies, i);
			movies_listar(moviesAux);

		}

	}

}

LinkedList* controller_filtrarGenero(LinkedList* pArrayListMovies,int tipo)
{
	LinkedList* filtro = ll_newLinkedList();

	if(pArrayListMovies!=NULL)
	{
		switch(tipo)
		{
			case 1:
			filtro = ll_filter(pArrayListMovies,movies_filtrarComedy);
			printf("\nMostrando peliculas de g�nero Comedy...\n");
				break;
			case 2:
			filtro = ll_filter(pArrayListMovies, movies_filtrarDrama);
			printf("\nMostrando peliculas de g�nero Drama...\n");
				break;
			case 3:
			filtro=ll_filter(pArrayListMovies, movies_filtrarAdventure);
			printf("\nMostrando peliculas de g�nero Adventure...\n");
				break;
			case 4:
				filtro=ll_filter(pArrayListMovies, movies_filtrarRomance);
				printf("\nMostrando peliculas de g�nero Romance...\n");
				break;
			case 5:
				filtro=ll_filter(pArrayListMovies, movies_filtrarDocumentary);
				printf("\nMostrando peliculas de g�nero Documentary...\n");
				break;
			case 6:
				filtro=ll_filter(pArrayListMovies, movies_filtrarHorror);
				printf("\nMostrando peliculas de g�nero Horror...\n");
				break;
			case 7:
				filtro=ll_filter(pArrayListMovies, movies_filtrarMusical);
				printf("\nMostrando peliculas de g�nero Musical...\n");
				break;
			case 8:
				filtro=ll_filter(pArrayListMovies, movies_filtrarAnimation);
				printf("\nMostrando peliculas de g�nero Animation...\n");
				break;
			case 9:
				filtro=ll_filter(pArrayListMovies, movies_filtrarAction);
				printf("\nMostrando peliculas de g�nero Action...\n");
				break;
			case 10:
				filtro=ll_filter(pArrayListMovies, movies_filtrarWestern);
				printf("\nMostrando peliculas de g�nero Western...\n");
				break;
			case 11:
				filtro=ll_filter(pArrayListMovies, movies_filtrarThriller);
				printf("\nMostrando peliculas de g�nero Thriller...\n");
				break;

		}




		controller_listarMovies(filtro);




	}



	return filtro;

}


