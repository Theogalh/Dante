/*
** my_puterror.c for  in /home/partou_a/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Nov  2 17:29:49 2015 Robin Partouche
** Last update Mon Nov  2 17:35:19 2015 Robin Partouche
*/

int	my_puterr(char *str, int error)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(2, str[i], 1);
      i = i + 1;
    }
  return (error);
}
