/*
** my_strlowcase.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_09
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 10:45:30 2015 Robin Partouche
** Last update Thu Nov 26 14:56:24 2015 Robin Partouche
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
