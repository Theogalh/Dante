/*
** my_strupcase.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_08
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 10:24:10 2015 Robin Partouche
** Last update Tue Oct  6 10:43:30 2015 Robin Partouche
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
