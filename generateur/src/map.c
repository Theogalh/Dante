/*
** map.c for  in /home/partou_a/rendu/dante/generateur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Fri May  6 22:24:50 2016 Robin Partouche
** Last update Tue May 10 00:55:15 2016 Robin Partouche
*/

#include <stdlib.h>
#include "generateur.h"
#include "my.h"

int	**init_map(int x, int y)
{
  int	i;
  int	j;
  int	**map;

  i = 0;
  j = 0;
  if ((map = malloc(sizeof(int *) * (x + 1))) == NULL)
    exit(my_putstr_err("Error: Malloc\n"));
  while (i != x)
    {
      if ((map[i] = malloc(sizeof(int) * (y + 1))) == NULL)
	exit(my_putstr_err("Error: Malloc\n"));
      while (j != y)
	{
	  map[i][j] = WALL;
	  j = j + 1;
	}
      map[i][j] = -1;
      j = 0;
      i = i + 1;
    }
  map[i] = NULL;
  return (map);
}

int	*reload_tab(int door, int *freed)
{
  int	*tab;

  if (door == 1)
    free(freed);
  if ((tab = malloc(sizeof(int) * (6))) == NULL)
    exit(my_putstr_err("Error: Malloc\n"));
  tab[0] = 0;
  tab[1] = 0;
  tab[2] = 0;
  tab[3] = 0;
  tab[4] = 0;
  tab[5] = -1;
  return (tab);
}

void	verif_tab(t_gen *gen, int **map, int i, int j)
{
  gen->occ = 0;
  map[i][j] = SPACE_USE;
  gen->occ_tab = reload_tab(1, gen->occ_tab);
  if ((j - 2 >= 0) && map[i][j - 2] != SPACE_USE)
    {
      gen->occ = gen->occ + 1;
      gen->occ_tab[0] = 1;
    }
  if ((j + 2 < gen->y) && map[i][j + 2] != SPACE_USE)
    {
      gen->occ = gen->occ + 1;
      gen->occ_tab[1] = 1;
    }
  if ((i + 2 < gen->x) && map[i + 2][j] != SPACE_USE)
    {
      gen->occ = gen->occ + 1;
      gen->occ_tab[2] = 1;
    }
  if ((i - 2 >= 0) && map[i - 2][j] != SPACE_USE)
    {
      gen->occ = gen->occ + 1;
      gen->occ_tab[3] = 1;
    }
}

void	my_putmap(int **map)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (map[i] != 0)
    {
      while (map[i][j] != -1)
	{
	  if (map[i][j] <= SPACE_USE)
	    my_putchar('*');
	  else
	    my_putchar('X');
	  j = j + 1;
	}
      i = i + 1;
      if (map[i] != 0)
	my_putchar('\n');
      j = 0;
    }
}
