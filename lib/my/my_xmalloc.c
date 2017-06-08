/*
** my_xmalloc.c for  in /home/partou_a/rendu/CPE_2015_Pushswap/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Nov 17 15:13:55 2015 Robin Partouche
** Last update Tue Dec  1 14:14:14 2015 Robin Partouche
*/

#include <stdlib.h>

void	*my_xmalloc(int n)
{
  void	*new_malloc;

  if (((new_malloc = malloc(n)) == NULL) || n <= 0)
    {
      write(2, "Error: malloc", 14);
      exit(-1);
    }
  return (new_malloc);
}
