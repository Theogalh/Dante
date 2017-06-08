/*
** map.c for  in /home/partou_a/rendu/dante/profondeur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon May  9 22:56:37 2016 Robin Partouche
** Last update Sun May 29 16:30:27 2016 Robin Partouche
*/

#include <stdlib.h>
#include "mazes.h"
#include "my.h"

void	my_put2str(char **str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != NULL)
    {
      while (str[i][j] != '\0')
	{
	  my_putchar(str[i][j]);
	  j = j + 1;
	}
      if (str[i + 1] != NULL)
	my_putchar('\n');
      i = i + 1;
      j = 0;
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
	  if (map[i][j] <= 1)
	    my_putchar('*');
	  else if (map[i][j] == 3)
	    my_putchar('o');
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

int	**parse_map_to_int(char **map, int length, int i, int j)
{
  int	**new_map;

  if ((new_map = malloc(sizeof(int *) * (length + 1))) == NULL)
    exit(my_putstr_error("Error: Malloc\n"));
  while (map[i] != NULL)
    {
      if ((new_map[i] = malloc(sizeof(int) * (my_strlen(map[i]) + 1))) == NULL)
	exit(my_putstr_error("Error: Malloc\n"));
      while (map[i][j] != 0)
	{
	  if (map[i][j] == 'X')
	    new_map[i][j] = WALL;
	  else if (map[i][j] == '*')
	    new_map[i][j] = SPACE;
	  j = j + 1;
	}
      new_map[i][j] = -1;
      j = 0;
      i = i + 1;
    }
  new_map[i] = NULL;
  free_double_tab_char(map, length - 1);
  return (new_map);
}

void	verif_map(char **map, int i, int j, int memory)
{
  if (map == NULL || map[0] == NULL || map[0][0] == 0 || map[0][0] == '\n')
    exit(my_putstr_error("Error: Invalid map.\n"));
  while (map[i] != 0)
    {
      while (map[i][j] != 0)
	{
	  if (map[i][j] == '\n' && map[i][j + 1] != 0)
	    exit(my_putstr_error("Error: Map need just have X or *.\n"));
	  else if (map[i][j] != 'X' && map[i][j] != '*' && map[i][j] != '\n')
	    exit(my_putstr_error("Error: Map need just have X or *.\n"));
	  else if ((map[i][j] == 'X' && map[i][j + 1] == 0 && map[i + 1] == 0)
		   || map[0][0] == 'X')
	    exit(my_putstr("No solution found"));
	  j = j + 1;
	}
      if (memory == 0)
	memory = j;
      if (memory != j)
	exit(my_putstr("Error: Map not rectangular.\n"));
      if (j < 1)
	exit(my_putstr_error("Error: Invalid map.\n"));
      j = 0;
      i = i + 1;
    }
}

void	write_path(int **map, int **path, int i, int j)
{
  while (path[i][j] != -1)
    {
      map[i][j] = 3;
      if (path[i][j] == 0)
	i = i - 1;
      else if (path[i][j] == 1)
	j = j + 1;
      else if (path[i][j] == 2)
	i = i + 1;
      else if (path[i][j] == 3)
	j = j - 1;
    }
  map[i][j] = 3;
}
