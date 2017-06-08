/*
** double_list.c for  in /home/partou_a/rendu/CPE_2015_Pushswap/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Nov 19 17:40:14 2015 Robin Partouche
** Last update Thu Nov 26 15:21:09 2015 Robin Partouche
*/

#include <stdlib.h>
#include "mylist.h"

struct d_list		*double_list_new()
{
  struct d_list		*list_new;

  list_new = malloc(sizeof(*list_new));
  if (list_new != NULL)
    {
      list_new->length = 0;
      list_new->head = NULL;
      list_new->tail = NULL;
    }
  return (list_new);
}

void		my_put_in_double_list(struct d_list **list, void *data)
{
  struct s_list	*new;

  if (*list != NULL)
    {
      new = malloc(sizeof(*new));
      if (new != NULL)
	{
	  new->data = data;
	  new->prev = NULL;
	  if ((*list)->head == NULL)
	    {
	      new->next = NULL;
	      (*list)->head = new;
	      (*list)->tail = new;
	    }
	  else
	    {
	      (*list)->head->prev = new;
	      new->next = (*list)->head;
	      (*list)->head = new;
	    }
	  (*list)->length = (*list)->length + 1;
	}
    }
}

void		my_put_in_double_last_list(struct d_list **list, void *data)
{
  struct s_list	*new;

  if (*list != NULL)
    {
      new = malloc(sizeof(*new));
      if (new != NULL)
	{
	  new->data = data;
	  new->next = NULL;
	  if ((*list)->tail == NULL)
	    {
	      new->prev = NULL;
	      (*list)->head = new;
	      (*list)->tail = new;
	    }
	  else
	    {
	      (*list)->tail->next = new;
	      new->prev = (*list)->tail;
	      (*list)->tail = new;
	    }
	  (*list)->length = (*list)->length + 1;
	}
    }
}

void		free_double_list(struct d_list **list)
{
  struct s_list	*tmp;
  struct s_list *del;

  if (*list != NULL)
    {
      tmp = (*list)->head;
      while (tmp != NULL)
	{
	  del = tmp;
	  tmp = tmp->next;
	  free(del);
	}
      free(*list);
      *list = NULL;
    }
}
