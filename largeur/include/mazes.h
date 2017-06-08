/*
** mazes.h for  in /home/partou_a/rendu/dante/profondeur
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon May  9 22:41:38 2016 Robin Partouche
** Last update Tue May 10 16:15:44 2016 Robin Partouche
*/

#ifndef MAZES_H_
# define MAZES_H_

# include "mylist.h"
# define SPACE 0
# define SPACE_USE 1
# define WALL 2
# define WAY 3

typedef struct	s_maze
{
  int		x;
  int		y;
  t_list	*pile;
  int		**path;
}		t_maze;

void	free_double_tab(int **tab, int rows);
int	my_putstr_error(char *str);
void	my_put2str(char **str);
int	**parse_map_to_int(char **map, int length, int i, int j);
void	my_putmap(int **map);
void	free_double_tab_char(char **tab, int rows);
int	my_put_in_list(struct s_list **list, int voidata);
int	my_catch_in_list(struct s_list **list);
int	larg_algo(t_maze *maze, int **map, int i, int j);
void	verif_map(char **map, int i, int j, int memory);
int	**init_map(int x, int y);
void	write_path(int **map, int **path, int i, int j);

#endif /* !MAZES_H_ */
