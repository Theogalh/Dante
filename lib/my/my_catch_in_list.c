/*
** my_catch_in_list.c for  in /home/partou_a/rendu/Piscine_C_bistromatique/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Fri Oct 23 12:23:47 2015 Robin Partouche
** Last update Thu Nov 26 15:27:07 2015 Robin Partouche
*/

#include <stdlib.h>
#include "mylist.h"

char		*my_catch_in_list(struct s_list **list)
{
  struct s_list	*elem;
  char		*nbr;

  elem = *list;
  if (*list == NULL)
    {
      return (NULL);
    }
  if (list != NULL && *list != NULL)
    {
      nbr = elem->data;
      *list = elem->next;
      free(elem);
    }
  return (nbr);
}

void		*my_catch_char_in_list(struct s_list **list)
{
  struct s_list	*elem;
  void		*nbr;

  elem = *list;
  if (*list == NULL)
    {
      return (NULL);
    }
  if (list != NULL && *list != NULL)
    {
      nbr = elem->data;
      *list = elem->next;
      free(elem);
    }
  return (nbr);
}

void		*my_catch_in_double_list(struct d_list **list)
{
  struct s_list	*elem;
  void		*nbr;

  elem = (*list)->head;
  if (*list == NULL)
    {
      return (NULL);
    }
  if (list != NULL && *list != NULL)
    {
      nbr = elem->data;
      (*list)->head = elem->next;
      free(elem);
    }
  return (nbr);
}

void		*my_catch_in_double_last_list(struct d_list **list)
{
  struct s_list	*elem;
  void		*nbr;

  elem = (*list)->tail;
  if (*list == NULL)
    {
      return (NULL);
    }
  if (list != NULL && *list != NULL)
    {
      nbr = elem->data;
      (*list)->tail = elem->prev;
      free(elem);
    }
  return (nbr);
}
