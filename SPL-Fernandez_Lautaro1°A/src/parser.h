/*
 * parser.h
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#ifndef PARSER_H_
#define PARSER_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "LinkedList.h"
#include "movies.h"

int parser_MoviesFromText(FILE* pFile, LinkedList* pArrayListMovies);


#endif /* PARSER_H_ */
