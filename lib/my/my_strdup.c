/*
** my_strdup.c for  in /home/partou_a/rendu/Piscine_C_J08/ex_01
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Oct  7 10:12:21 2015 Robin Partouche
** Last update Thu Nov 26 11:32:06 2015 Robin Partouche
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *src)
{
  int	lenght;
  char	*newsrc;

  lenght = my_strlen(src);
  newsrc = malloc((lenght + 1) * sizeof(*src));
  newsrc = my_strcpy(newsrc, src);
  return (newsrc);
}
