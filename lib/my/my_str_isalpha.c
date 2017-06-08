/*
** my_str_isalpha.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_11
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 11:41:07 2015 Robin Partouche
** Last update Tue Oct  6 11:55:59 2015 Robin Partouche
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 64 || str[i] >= 91) && (str[i] <= 96 || str[i] >= 123))
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
