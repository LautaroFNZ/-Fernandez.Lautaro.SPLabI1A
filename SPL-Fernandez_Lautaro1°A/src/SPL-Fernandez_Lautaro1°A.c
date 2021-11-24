/*
 ============================================================================
 Name        : SPL-Fernandez_Lautaro1°A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"
#include "movies.h"

int main(void) {
	setbuf(stdout,NULL);

	LinkedList* movies = ll_newLinkedList();
	LinkedList* filtro = ll_newLinkedList();

	int option;
	int suboption;
	int flag=0;

	do{
		option = menu();

		switch(option)
		{
			case 1:
				if(flag==0)
				{

				controller_loadMoviesFromText("movies.csv", movies);
				flag=1;
				}else printf("Los datos ya han sido cargados!\n");

				break;

			case 2:

				if(flag!=0)
				{
				controller_listarMovies(movies);
				}else printf("Primero debe cargar los datos!\n");

				break;

			case 3:
				if(flag!=0)
				{
					filtro = controller_asignarTime(movies);
					controller_listarMovies(filtro);

				}else printf("Primero debe cargar los datos!\n");

				break;

			case 4:

				if(flag!=0)
				{

					printf("\nMenu para elegir filtro\n");
					printf("0. Cancelar\n");
					printf("1. Filtrar por Comedy\n");
					printf("2. Filtrar por Drama\n");
					printf("3. Filtrar por Adventure\n");
					printf("4. Filtrar por Romance\n");
					printf("5. Filtrar por Documentary\n");
					printf("6. Filtrar por Horror\n");
					printf("7. Filtrar por Musical\n");
					printf("8. Filtrar por Animation\n");
					printf("9. Filtrar por Action\n");
					printf("10. Filtrar por Western\n");
					printf("11. Filtrar por Thriller\n");

					suboption = GetIntParam("Ingrese una opcion: ", 0, 11);

					if(suboption>0)
					{

						controller_filtrarGenero(movies,suboption);

					}else printf("Cancelando..\n");

				}else printf("Primero debe cargar los datos!\n");

				break;

			case 6:
				if(flag!=0)
				{
					printf("Guardando los datos del punto 3...\n");

				}else printf("Primero debe cargar los datos!\n");


				break;



		}





	}while(option!=7);



	return EXIT_SUCCESS;
}
