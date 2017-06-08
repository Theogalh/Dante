/*
** my_search_printf3.c for  in /home/partou_a/rendu/PSU_2015_my_printf
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Nov 16 14:23:25 2015 Robin Partouche
** Last update Thu Nov 26 15:04:26 2015 Robin Partouche
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int	search_modulo(const char *format, int *i, int *printed, va_list *va)
{
  my_putchar('%');
  *printed = *printed - 1;
  return (0);
}

int	search_no(const char *format, int *i, int *printed, va_list *va)
{
  my_putchar('%');
  if (format[*i] == ' ')
    {
      my_putchar(' ');
      *printed = *printed + 1;
    }
  my_putchar(format[*i + 1]);
  return (0);
}
