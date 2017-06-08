/*
** sum_params.c for  in /home/partou_a/rendu/Piscine_C_J08/ex_02
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Oct  7 11:21:35 2015 Robin Partouche
** Last update Fri Oct  9 13:35:20 2015 Robin Partouche
*/

#include <stdlib.h>
#include "my.h"

char	*sum_params(int argc, char **argv)
{
  int	i;
  char	*src;
  int	length;

  length = my_strlen(argv[0] + 1);
  src = malloc(length);
  src = my_strcpy(src, argv[0]);
  i = 1;
  while (argc != i)
    {
      src = my_strcat(src, "\n");
      src = my_strcat(src, argv[i]);
      i = i + 1;
    }
  return (src);
}
