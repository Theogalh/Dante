/*
** my_put_printf.c for  in /home/partou_a/rendu/PSU_2015_my_printf
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Nov 10 16:26:27 2015 Robin Partouche
** Last update Thu Nov 26 15:04:00 2015 Robin Partouche
*/

#include <stdlib.h>

void	my_put_nbr_hex(long nb, int upcase)
{
  if (nb <= 9)
    my_putchar(nb + 48);
  else if (nb >= 10 && upcase)
    my_putchar(nb + 55);
  else if (nb >= 10)
    my_putchar(nb + 87);
  else
    my_putstr("ERROR");
}

void	my_put_nbr_hex_long(unsigned long nb, int upcase)
{
  if (nb <= 9)
    my_putchar(nb + 48);
  else if (nb >= 10 && upcase)
    my_putchar(nb + 55);
  else if (nb >= 10)
    my_putchar(nb + 87);
  else
    my_putstr("ERROR");
}

int	my_putstr_ascii(char *str, int i, int length)
{
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  while (str[i] != 0)
    {
      if (str[i] >= 33 && str[i] <= 126)
	my_putchar(str[i]);
      else
	{
	  if (str[i] <= 9)
	    my_putstr("\\00");
	  else if (str[i] >= 100)
	    my_putchar('\\');
	  else
	    my_putstr("\\0");
	  my_put_base(str[i], 8, length, 0);
	  length = length + 3;
	}
      length = length + 1;
      i = i + 1;
    }
  return (length);
}

int	my_put_p(unsigned long a, unsigned long base, int i, int upcase)
{
  if (a == 0)
    {
      my_putstr("(nil)");
      return (2);
    }
  if (i == -1)
    {
      my_putstr("0x");
      i = 0;
    }
  if (a <= base)
    {
      my_put_nbr_hex_long(a, upcase);
    }
  else
    {
      i = 1 + my_put_p(a / base, base, i, upcase);
      my_put_nbr_hex_long(a % base, upcase);
    }
  return (i);
}

int	my_put_base(long a, int base, int i, int upcase)
{
  if (a <= base)
    {
      my_put_nbr_hex(a, upcase);
    }
  else
    {
      i = 1 + my_put_base(a / base, base, i, upcase);
      my_put_nbr_hex(a % base, upcase);
    }
  return (i);
}
