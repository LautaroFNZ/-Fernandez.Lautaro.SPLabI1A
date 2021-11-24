/*
 * movie.h
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#ifndef MOVIE_H_
#define MOVIE_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "LinkedList.h"

typedef struct
{
	int id;
	char titulo[50];
	char genero[50];
	int duracion;

}eMovies;

eMovies* movies_new();

int movies_setId(eMovies* this, int id);
int movies_getId(eMovies* this, int* id);
int movies_setTitle(eMovies* this, char* title);
int movies_getTitle(eMovies* this, char* title);
int movies_setGenero(eMovies* this,char* genero);
int movies_getGenero(eMovies* this,char* genero);
int movies_setTime(eMovies* this, int time);
int movies_getTime(eMovies* this, int* time);

eMovies* movies_newParametros(char* id,char* title,char* genero, char* time);

void movies_listar(eMovies* this);

int movies_filtrarComedy(void* element);
int movies_filtrarDrama(void* element);
int movies_filtrarAdventure(void* element);
int movies_filtrarRomance(void* element);
int movies_filtrarDocumentary(void* element);
int movies_filtrarHorror(void* element);
int movies_filtrarMusical(void* element);
int movies_filtrarAnimation(void* element);
int movies_filtrarAction(void* element);
int movies_filtrarWestern(void* element);
int movies_filtrarThriller(void* element);

void* movies_setNewTime(void* this);



#endif /* MOVIE_H_ */
