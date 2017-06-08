/*
** algo.c for  in /home/partou_a/rendu/dante/profondeur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon May  9 23:22:17 2016 Robin Partouche
** Last update Sun May 29 16:33:21 2016 Robin Partouche
*/

#include <stdlib.h>
#include "mylist.h"
#include "mazes.h"
#include "my.h"

static int	next_point(t_maze *maze, int **map, int *i, int *j)
{
  int		xsup;
  int		ysup;

  xsup = 0;
  ysup = 0;
  map[*i][*j] = WAY;
  if (*i >= maze->x - 1 && *j >= maze->y - 1)
    return (2);
  if ((*j + 1 < maze->y) && map[*i][*j + 1] == SPACE)
    ysup = 1;
  else if ((*i + 1 < maze->x) && map[*i + 1][*j] == SPACE)
    xsup = 1;
  else if ((*i - 1 >= 0) && map[*i - 1][*j] == SPACE)
    xsup = -1;
  else if ((*j - 1 >= 0) && map[*i][*j - 1] == SPACE)
    ysup = -1;
  else
    return (1);
  my_put_in_list(&maze->pile, *i);
  my_put_in_list(&maze->pile, *j);
  *i = *i + xsup;
  *j = *j + ysup;
  return (0);
}

int		long_algo(t_maze *maze, int **map, int i, int j)
{
  int		end;

  end = 2;
  while (maze->pile != NULL || end == 2)
    {
      j = my_catch_in_list(&maze->pile);
      i = my_catch_in_list(&maze->pile);
      end = 0;
      while (end == 0)
	end = next_point(maze, map, &i, &j);
      if (end == 2)
	{
	  while (maze->pile != NULL)
	    my_catch_in_list(&maze->pile);
	  return (0);
	}
      map[i][j] = SPACE_USE;
    }
  exit(my_putstr("No solution found"));
}
