/*
** mylist.h for  in /home/partou_a/rendu/Piscine_C_J11/include
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct 12 13:40:45 2015 Robin Partouche
** Last update Sat May  7 03:59:25 2016 Robin Partouche
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	d_list
{
  struct s_list	*tail;
  struct s_list	*head;
  int		length;
}		e_list;

typedef struct	s_list
{
  struct s_list	*next;
  struct s_list *prev;
  void		*data;
}		t_list;

struct d_list	*double_list_new();

#endif /* !MYLIST_H_ */
