/*
** imperfect_maze.c for  in /home/partou_a/rendu/dante/generateur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Sat May  7 05:22:37 2016 Robin Partouche
** Last update Tue May 10 00:44:39 2016 Robin Partouche
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include "generateur.h"
#include "mylist.h"

int	im_recur_map(t_gen *gen, int **map, int i, int j)
{
  int	end;

  end = 2;
  while (end != 0)
    {
      end = 0;
      while (end == 0)
	{
	  verif_tab(gen, map, i, j);
	  if (gen->occ == 0)
	    end = 1;
	  else
	    next_point(gen, map, &i, &j);
	  if (i + 1 == gen->x - 1 && j + 1 == gen->y - 1)
	    {
	      map[i][j] = SPACE;
	      return (0);
	    }
	}
      j = my_catch_in_list(&gen->pile);
      i = my_catch_in_list(&gen->pile);
    }
  return (0);
}

void	imperfect_the_map(int **map)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (map[i] != 0)
    {
      while (map[i][j] != -1)
	{
	  if (map[i][j] == 2)
	    {
	      if (rand() % 3 == 0)
		map[i][j] = SPACE;
	    }
	  j = j + 1;
	}
      i = i + 1;
      j = 0;
    }
}

void		imperfect_maze(t_gen gen)
{
  int		**map;

  srand(time(NULL) * getpid());
  gen.pile = NULL;
  map = init_map(gen.x, gen.y);
  gen.occ_tab = reload_tab(0, NULL);
  im_recur_map(&gen, map, 0, 0);
  map[0][0] = SPACE;
  map[gen.x - 1][gen.y - 1] = SPACE;
  free(gen.occ_tab);
  rand_map(map, gen);
  imperfect_the_map(map);
  map[gen.x - 1][gen.y - 1] = SPACE;
  my_putmap(map);
  free_double_tab(map, gen.x);
}
