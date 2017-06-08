/*
** my_printf.c for  in /home/partou_a/rendu/PSU_2015_my_printf
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Nov 10 17:14:19 2015 Robin Partouche
** Last update Thu Nov 26 15:28:33 2015 Robin Partouche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

int	choose_type(char l, char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] == l)
	return (i + 1);
      i = i + 1;
    }
  return (13);
}

void	init_tab(int (*tab_p[14])
		 (const char *format, int *i, int *printed, va_list *va))
{
  tab_p[1] = &search_nbr;
  tab_p[2] = &search_nbr;
  tab_p[3] = &search_u_nbr;
  tab_p[4] = &search_char;
  tab_p[5] = &search_string;
  tab_p[6] = &search_ascii;
  tab_p[7] = &search_octal;
  tab_p[8] = &search_bin;
  tab_p[9] = &search_hexa;
  tab_p[10] = &search_hexa_M;
  tab_p[11] = &search_p;
  tab_p[12] = &search_modulo;
  tab_p[13] = &search_no;
}

int	test_space(const char *format, int *i, int *printed, int *type)
{
  while (((*type = choose_type(format[*i + 1], "diucsSobxXp%% ")) == 14)
	 && format[*i] != 0)
    {
      *i = *i + 1;
      *printed = *printed - 1;
    }
}

int		my_printf2(const char *format, va_list *va)
{
  int		(*tab_p[14])(const char *format, int *i, int *printed,
  va_list *va);
  int		i;
  int		printed;
  int		type;

  i = 0;
  printed = 0;
  init_tab(tab_p);
  while (format[i] != 0)
    {
      if (format[i] == '%' && format[i + 1] != 0)
	{
	  test_space(format, &i, &printed, &type);
	  (*tab_p[type])(format, &i, &printed, va);
	  i = i + 1;
	}
      else if (format[i + 1] != 0)
	my_putchar(format[i]);
      else
	return (-1);
      i = i + 1;
    }
  va_end(*va);
  return (i + printed);
}

int		my_printf(const char *format, ...)
{
  va_list	va;

  va_start(va, format);
  if (format == NULL)
    return (-1);
  else
    return (my_printf2(format, &va));
}
