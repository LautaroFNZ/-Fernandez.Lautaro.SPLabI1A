/*
 * controller.h
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "LinkedList.h"
#include "movies.h"
#include "inputs.h"
#include "parser.h"

int menu();
int controller_loadMoviesFromText(char* path,LinkedList* pArrayListMovies);
void controller_listarMovies(LinkedList* pArrayListMovies);
LinkedList* controller_filtrarGenero(LinkedList* pArrayListMovies,int tipo);
LinkedList* controller_asignarTime(LinkedList* pArrayListMovies);



#endif /* CONTROLLER_H_ */
