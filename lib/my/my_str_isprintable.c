/*
** my_str_isprintable.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_15
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 13:38:55 2015 Robin Partouche
** Last update Thu Nov 26 15:08:13 2015 Robin Partouche
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 6 || str[i] >= 14) && (str[i] <= 31 || str[i] > 127))
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
