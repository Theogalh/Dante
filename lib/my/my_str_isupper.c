/*
** my_str_isupper.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_14
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 13:32:54 2015 Robin Partouche
** Last update Thu Nov 26 15:01:44 2015 Robin Partouche
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 64 || str[i] >= 91)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
