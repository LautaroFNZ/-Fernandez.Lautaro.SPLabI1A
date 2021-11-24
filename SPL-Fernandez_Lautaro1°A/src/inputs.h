/*
 * inputs.h
 *
 *  Created on: 24 nov 2021
 *      Author: Lauty
 */

#ifndef INPUTS_H_
#define INPUTS_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int GetInt(char *msj);
int GetIntParam(char *msj,int min, int max);
float GetFloat(char *msj);
void GetString(char *msj, char value[]);
char GetChar(char *msj);




#endif /* INPUTS_H_ */
