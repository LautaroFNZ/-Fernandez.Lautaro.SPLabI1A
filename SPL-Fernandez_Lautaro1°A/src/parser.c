/*
 * parser.c
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */
#include "parser.h"


int parser_MoviesFromText(FILE* pFile, LinkedList* pArrayListMovies)
{
	int exito=0;
	char id[50];
	char titulo[50];
	char genero[50];
	char duracion[50];
	int flag=0;

	eMovies* moviesAux;
	int r;

	if(pFile==NULL)
	{
		printf("Error al abrir el archivo de Peliculas.\n");
	}

	if(pFile!=NULL && pArrayListMovies!=NULL)
	{
		do{
			r = fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n] \n",id,titulo,genero,duracion);
			flag++;


			if(flag>1)
			{
printf("%s,%s,%s,%s\n",id,titulo,genero,duracion);
				if(r==4)
				{
					moviesAux = movies_newParametros(id, titulo, genero, duracion);
					ll_add(pArrayListMovies, moviesAux);
					exito=1;


				}else
				{

					break;

				}

			}

		}while(!feof(pFile));

	}

	return exito;

}
