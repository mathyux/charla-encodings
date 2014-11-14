/*
 * =====================================================================================
 *
 *       Filename:  cadenas.c
 *
 *    Description: Programa que recibe una cadena y calcula su tamaño 
 *
 *        Version:  1.0
 *        Created:  14/11/2014 19:55:33
 *       Revision:  v1
 *       Compiler:  clang
 *
 *         Author:  Euclydex (), 
 *   Organization:  La Diosa 
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
  char cadena[30];
  int size = 0;
  printf("cadena: ");
  scanf("%s", cadena);


  size = strlen(cadena);
  printf("Cadena es %s y su tamaño es %d\n", cadena, size);

}

