/*
** perfect_maze.c for  in /home/partou_a/rendu/dante/generateur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue May  3 13:26:36 2016 Robin Partouche
** Last update Tue May 10 00:55:36 2016 Robin Partouche
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include "generateur.h"
#include "mylist.h"

void	next_point(t_gen *gen, int **map, int *i, int *j)
{
  int	xsup;
  int	ysup;

  xsup = 0;
  ysup = 0;
  gen->tmp = 5;
  while (gen->occ_tab[gen->tmp] != 1)
    gen->tmp = rand() % 4;
  if (gen->tmp == 0)
    ysup = -2;
  if (gen->tmp == 1)
    ysup = 2;
  if (gen->tmp == 2)
    xsup = 2;
  if (gen->tmp == 3)
    xsup = -2;
  map[*i + xsup / 2][*j + ysup / 2] = SPACE;
  my_put_in_list(&gen->pile, *i);
  my_put_in_list(&gen->pile, *j);
  *i = *i + xsup;
  *j = *j + ysup;
}

void	recur_map(t_gen *gen, int **map, int i, int j)
{
  int	end;

  end = 2;
  while (gen->pile != NULL || end == 2)
    {
      end = 0;
      while (end == 0)
	{
	  verif_tab(gen, map, i, j);
	  if (gen->occ == 0)
	    end = 1;
	  else
	    next_point(gen, map, &i, &j);
	}
      j = my_catch_in_list(&gen->pile);
      i = my_catch_in_list(&gen->pile);
    }
}

void	rand_map(int **map, t_gen gen)
{
  int	tmp;

  if (map[gen.x - 1][gen.y - 2] == WALL && map[gen.x - 2][gen.y - 1] == WALL)
    {
      tmp = rand() % 2;
      if (tmp == 1)
	map[gen.x - 1][gen.y - 2] = SPACE;
      else
	map[gen.x - 2][gen.y - 1] = SPACE;
    }
  if (map[0][1] == WALL && map[1][0] == WALL)
    {
      tmp = rand() % 2;
      if (tmp == 1)
	map[0][1] = SPACE;
      else
	map[1][0] = SPACE;
    }
}

void		perfect_maze(t_gen gen)
{
  int		**map;
  int		tmp_x;
  int		tmp_y;

  srand(time(NULL) * getpid());
  gen.pile = NULL;
  tmp_x = rand() % gen.x;
  tmp_y = rand() % gen.y;
  map = init_map(gen.x, gen.y);
  gen.occ_tab = reload_tab(0, NULL);
  recur_map(&gen, map, tmp_x, tmp_y);
  map[0][0] = SPACE;
  rand_map(map, gen);
  free(gen.occ_tab);
  map[gen.x - 1][gen.y - 1] = SPACE;
  my_putmap(map);
  free_double_tab(map, gen.x);
}
