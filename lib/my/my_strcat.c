/*
** my_strcat.c for  in /home/partou_a/rendu/Piscine_C_J07/ex_02
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 17:32:47 2015 Robin Partouche
** Last update Thu Jan 14 13:56:12 2016 Robin Partouche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*new_dest;

  j = 0;
  i = 0;
  if ((new_dest = malloc(sizeof(char*)
			 * (my_strlen(dest) + my_strlen(src) + 1))) == NULL)
    {
      my_puterr("MALLOC INVALIDE.", 2);
      return (NULL);
    }
  while (dest[i] != '\0')
    {
      new_dest[i] = dest[i];
      i = i + 1;
    }
  while (src[j] != '\0')
    {
      new_dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  new_dest[i] = '\0';
  return (new_dest);
}
