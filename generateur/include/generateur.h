/*
** generateur.h for  in /home/partou_a/rendu/dante/generateur/include
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue May  3 13:07:53 2016 Robin Partouche
** Last update Tue May 10 00:42:32 2016 Robin Partouche
*/

#ifndef GENERATEUR_H_
# define GENERATEUR_H_

# include "mylist.h"

# define SPACE 0
# define SPACE_USE 1
# define WALL 2
# define WAY 3

typedef struct	s_gen
{
  int		x;
  int		y;
  int		occ;
  int		tmp;
  int		*occ_tab;
  char		*name;
  t_list	*pile;
}		t_gen;

int	my_str_comparate(char *str, char *str2);
void	perfect_maze(t_gen gen);
int	my_putstr_err(char *str);
int	**init_map(int x, int y);
int	*reload_tab(int free, int *freed);
void	verif_tab(t_gen *gen, int **map, int i, int j);
void	free_double_tab(int **tab, int rows);
void	my_putmap(int **map);
void	recur_map(t_gen *gen, int **map, int i, int j);
int	my_put_in_list(struct s_list **list, int voidata);
int	my_catch_in_list(struct s_list **list);
int	im_recur_map(t_gen *gen, int **map, int i, int j);
void	imperfect_maze(t_gen gen);
void	next_point(t_gen *gen, int **map, int *i, int *j);
void	rand_map(int **map, t_gen gen);

#endif /* !GENERATEUR_H_ */
