/*
** my_strncpy.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 09:55:49 2015 Robin Partouche
** Last update Mon Oct  5 13:38:35 2015 Robin Partouche
*/

int	my_strl(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char	*my_strncpy(char *dest, char *str, int n)
{
  int	i;
  int	j;

  i = my_strl(dest);
  j = 0;
  while ((str[j] != '\0') && (j < n))
    {
      dest[j] = str[j];
      j = j + 1;
    }
  if (n > i)
    {
      dest[n] = '\0';
    }
  return (dest);
}
