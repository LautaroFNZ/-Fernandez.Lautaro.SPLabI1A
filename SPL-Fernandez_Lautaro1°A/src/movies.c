/*
 * movie.c
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#include "movies.h"

eMovies* movies_new()
{
	eMovies* movies;

	movies = (eMovies*) malloc(sizeof(eMovies));

	return movies;
}

int movies_setId(eMovies* this, int id)
{
	int exito=0;

	if(this!= NULL && id!=0)
	{
		this->id=id;
		exito=1;

	}


	return exito;
}

int movies_getId(eMovies* this, int* id)
{
	int exito=0;

	if(this!=NULL && id!=0)
	{
		*id=this->id;
		exito=1;
	}


	return exito;
}

int movies_setTitle(eMovies* this, char* title)
{
	int exito=0;

	if(this!=NULL && title!=NULL)
	{
		strcpy(this->titulo,title);
		exito=1;

	}

	return exito;
}

int movies_getTitle(eMovies* this, char* title)
{
	int exito=0;

	if(this!=NULL && title!=NULL)
	{
		strcpy(title,this->titulo);
		exito=1;

	}


	return exito;
}

int movies_setGenero(eMovies* this,char* genero)
{
	int exito=0;

	if(this!=NULL && genero!=NULL)
	{
		strcpy(this->genero,genero);
		exito=1;




	}

	return exito;
}

int movies_getGenero(eMovies* this,char* genero)
{
	int exito=0;

	if(this!=NULL && genero!=NULL)
	{

		strcpy(genero,this->genero);
		exito=1;

	}

	return exito;
}

int movies_setTime(eMovies* this, int time)
{
	int exito=0;

	if(this!=NULL)
	{
		this->duracion=time;
		exito=1;

	}

	return exito;

}

int movies_getTime(eMovies* this, int* time)
{
	int exito=0;

	if(this!=NULL)
	{
		*time=this->duracion;
		exito=1;


	}


	return exito;

}

eMovies* movies_newParametros(char* id,char* title,char* genero, char* time)
{
	eMovies* movies = movies_new();

	if(movies!=NULL)
	{
		movies_setId(movies, atoi(id));
		movies_setTitle(movies, title);
		movies_setGenero(movies, genero);
		movies_setTime(movies, atoi(time));


	}

	return movies;
}

void movies_listar(eMovies* this)
{
	int id;
	char title[50];
	char genero[50];
	int time;

	if(this!=NULL)
	{
		movies_getId(this, &id);
		movies_getTitle(this, title);
		movies_getGenero(this, genero);
		movies_getTime(this, &time);
	}

	printf("%d|%s|%s|%d \n", id,title,genero,time);


}

int movies_filtrarComedy(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Comedy")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarDrama(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Drama")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarAdventure(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Adventure")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarRomance(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Romance")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarDocumentary(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Documentary")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarHorror(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Horror")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarMusical(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Musical")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarAnimation(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Animation")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarAction(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Action")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarWestern(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Western")==0)
	{
		exito=1;
	}


	return exito;
}

int movies_filtrarThriller(void* element)
{
	int exito=0;

	eMovies* moviesAux = (void*) element;
	char genero[50];

	movies_getGenero(moviesAux, genero);

	if(strcmp(genero,"Thriller")==0)
	{
		exito=1;
	}


	return exito;
}









