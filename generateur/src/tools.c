/*
** tools.c for  in /home/partou_a/rendu/dante/generateur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue May  3 13:27:32 2016 Robin Partouche
** Last update Sat May  7 01:36:38 2016 Robin Partouche
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	my_str_comparate(char *str, char *str2)
{
  int	i;

  i = 0;
  if (str == NULL || str2 == NULL)
    return (0);
  while (str[i] != 0 && str2[i] != 0)
    {
      if (str[i] != str2[i])
	return (0);
      i = i + 1;
    }
  if (str[i] == str2[i] && str[i] == 0)
    return (1);
  else
    return (0);
}

int	my_putstr_err(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      write(2, &str[i], 1);
      i = i + 1;
    }
  return (1);
}

void	my_put2int(int **str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != NULL)
    {
      while (str[i][j] != -1)
	{
	  my_put_nbr(str[i][j]);
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
      j = 0;
    }
}

void	free_double_tab(int **tab, int rows)
{
  int	i;

  i = 0;
  while (i != rows + 1)
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}
