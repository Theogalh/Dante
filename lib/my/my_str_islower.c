/*
** my_str_islower.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_13
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 13:24:58 2015 Robin Partouche
** Last update Thu Nov 26 14:58:57 2015 Robin Partouche
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 96 || str[i] >= 123)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
