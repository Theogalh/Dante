/*
** main.c for  in /home/partou_a/rendu/dante/profondeur/src
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon May  9 22:36:56 2016 Robin Partouche
** Last update Sun May 29 16:00:40 2016 Robin Partouche
*/

#include <stdlib.h>
#include "ls_dir.h"
#include "my.h"
#include "mazes.h"
#include "get_next_line.h"

void		parse_map(char **map, int length)
{
  int		**int_map;
  t_maze	maze;

  verif_map(map, 0, 0, 0);
  maze.x = length - 1;
  maze.y = my_strlen(map[0]);
  maze.pile = NULL;
  maze.path = init_map(maze.x, maze.y);
  my_put_in_list(&maze.pile, 0);
  my_put_in_list(&maze.pile, 0);
  int_map = parse_map_to_int(map, length - 1, 0, 0);
  larg_algo(&maze, int_map, 0, 0);
  my_putmap(int_map);
  free_double_tab(int_map, length - 1);
  free_double_tab(maze.path, length - 1);
}

int		algo_long(char *map_name, int i, int length)
{
  int		fd;
  char		**map;

  if ((fd = fs_open(map_name)) == 0)
    return (my_putstr_error("No map with this name in the folder.\n"));
  length = length_buff(fd);
  if ((map = malloc(sizeof(char **) * (length + 1))) == NULL)
    return (my_putstr_error("Error: Malloc.\n"));
  fs_close(fd);
  if ((fd = fs_open(map_name)) == 0)
    return (my_putstr_error("No map with this name in the folder.\n"));
  while ((map[i] = get_next_line(fd)) != NULL)
    i = i + 1;
  map[i] = NULL;
  parse_map(map, length);
  fs_close(fd);
  return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
  if (argc >= 2)
    return (algo_long(argv[1], 0, 0));
  else
    return (my_putstr_error("./solver [map].\n"));
}
