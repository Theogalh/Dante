/*
** my_str_isnum.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_12
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 13:06:08 2015 Robin Partouche
** Last update Thu Nov 26 15:01:31 2015 Robin Partouche
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 48 || str[i] > 57) && str[i] != 45)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

