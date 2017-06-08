/*
** my_putstr.c for  in /home/partou_a/rendu/Piscine_C_J04
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  1 16:50:33 2015 Robin Partouche
** Last update Sat May 28 18:47:41 2016 Robin Partouche
*/

#include <stdlib.h>

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (0);
    }
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr_len(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (i);
}
