/*
** main.c for  in /home/partou_a/rendu/dante/generateur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue May  3 12:51:47 2016 Robin Partouche
** Last update Fri May 27 18:59:15 2016 Robin Partouche
*/

#include <stdlib.h>
#include "generateur.h"
#include "my.h"

void	gen(char *x, char *y, char *perfect)
{
  t_gen	gen;

  if ((gen.x = my_getnbr(x)) <= 0 || (gen.y = my_getnbr(y)) <= 0)
    {
      my_putstr("Error: Invalid x/y.\n");
      exit(1);
    }
  if (perfect == NULL)
    imperfect_maze(gen);
  else if (my_str_comparate(perfect, "parfait"))
    perfect_maze(gen);
  else
    {
      my_putstr("./generateur x y [parfait]\n");
      exit(1);
    }
}

int	main(int argc, char **argv)
{
  if (argc == 3)
    gen(argv[1], argv[2], NULL);
  else if (argc == 4)
    gen(argv[1], argv[2], argv[3]);
  else
    {
      my_putstr("./generateur x y [parfait]\n");
      return (1);
    }
  return (0);
}
