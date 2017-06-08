/*
** my_show_list.c for  in /home/partou_a/rendu/Piscine_C_J11/ex_01
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct 12 17:13:25 2015 Robin Partouche
** Last update Thu Nov 26 15:23:58 2015 Robin Partouche
*/

#include <stdlib.h>
#include "mylist.h"

void	my_show_list(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}

void	my_show_list_int(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_put_nbr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}

void	my_show_double_list_int(struct d_list *list)
{
  struct s_list *tmp;

  tmp = list->head;
  while (tmp != NULL)
    {
      my_put_nbr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
