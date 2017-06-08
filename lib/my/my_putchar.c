/*
** my_putchar.c for  in /home/partou_a/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Nov  9 13:03:19 2015 Robin Partouche
** Last update Mon Nov  9 13:03:30 2015 Robin Partouche
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
