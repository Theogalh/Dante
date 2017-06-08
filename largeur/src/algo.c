/*
** algo.c for  in /home/partou_a/rendu/dante/profondeur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon May  9 23:22:17 2016 Robin Partouche
** Last update Sun May 29 16:30:02 2016 Robin Partouche
*/

#include <stdlib.h>
#include "mylist.h"
#include "mazes.h"
#include "my.h"

int	**init_map(int x, int y)
{
  int	i;
  int	j;
  int	**map;

  i = 0;
  j = 0;
  if ((map = malloc(sizeof(int *) * (x + 1))) == NULL)
    exit(my_putstr_error("Error: Malloc\n"));
  while (i != x)
    {
      if ((map[i] = malloc(sizeof(int) * (y + 1))) == NULL)
	exit(my_putstr_error("Error: Malloc\n"));
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

static int	next_point(t_maze *maze, int **map, int *i, int *j)
{
  if ((*j + 1 < maze->y) && map[*i][*j + 1] == SPACE)
    {
      my_put_in_list(&maze->pile, *i);
      my_put_in_list(&maze->pile, *j + 1);
      maze->path[*i][*j + 1] = 3;
    }
  if ((*i + 1 < maze->x) && map[*i + 1][*j] == SPACE)
    {
      my_put_in_list(&maze->pile, *i + 1);
      my_put_in_list(&maze->pile, *j);
      maze->path[*i + 1][*j] = 0;
    }
  if ((*i - 1 >= 0) && map[*i - 1][*j] == SPACE)
    {
      my_put_in_list(&maze->pile, *i - 1);
      my_put_in_list(&maze->pile, *j);
      maze->path[*i - 1][*j] = 2;
    }
  if ((*j - 1 >= 0) && map[*i][*j - 1] == SPACE)
    {
      my_put_in_list(&maze->pile, *i);
      my_put_in_list(&maze->pile, *j - 1);
      maze->path[*i][*j - 1] = 1;
    }
  return (0);
}

int		larg_algo(t_maze *maze, int **map, int i, int j)
{
  int		end;

  end = 2;
  maze->path[i][j] = -1;
  while (maze->pile != NULL || end == 2)
    {
      j = my_catch_in_list(&maze->pile);
      i = my_catch_in_list(&maze->pile);
      map[i][j] = 1;
      if (i >= maze->x - 1 && j >= maze->y - 1)
	{
	  write_path(map, maze->path, i, j);
	  while (maze->pile != NULL)
	    my_catch_in_list(&maze->pile);
	  return (0);
	}
      end = next_point(maze, map, &i, &j);
    }
  exit(my_putstr("No solution found"));
}
