/*
** my_search_printf.c for  in /home/partou_a/rendu/PSU_2015_my_printf
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Sat Nov 14 14:11:34 2015 Robin Partouche
** Last update Thu Nov 26 15:04:38 2015 Robin Partouche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int	search_nbr(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_nbr_len(va_arg(*va, int), 0) + *printed - 2;
  return (0);
}

int	search_u_nbr(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_unbr_len(va_arg(*va, unsigned int), 0) + *printed - 2;
  return (0);
}

int	search_string(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_putstr_len(va_arg(*va, char*)) + *printed - 2;
  return (0);
}

int	search_char(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_putchar(va_arg(*va, int)) + *printed - 1;
  return (0);
}

int	search_ascii(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_putstr_ascii(va_arg(*va, char*), 0, 0) + *printed - 2;
  return (0);
}
