/*
** my_search_printf2.c for  in /home/partou_a/rendu/PSU_2015_my_printf
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Nov 16 13:18:41 2015 Robin Partouche
** Last update Thu Nov 26 14:59:58 2015 Robin Partouche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int	search_hexa(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_base(va_arg(*va, int), 16, 0, 0) + *printed - 1;
  return (0);
}

int	search_bin(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_base(va_arg(*va, int), 2, 0, 0) + *printed - 1;
  return (0);
}

int	search_octal(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_base(va_arg(*va, int), 8, 0, 0) + *printed - 1;
  return (0);
}

int	search_hexa_M(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_base(va_arg(*va, int), 16, 0, 1) + *printed - 1;
  return (0);
}

int	search_p(const char *format, int *i, int *printed, va_list *va)
{
  *printed = my_put_p(va_arg(*va, unsigned long*), 16, -1, 0) + *printed + 1;
  return (0);
}
