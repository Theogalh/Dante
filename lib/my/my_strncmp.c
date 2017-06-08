/*
** my_strncmp.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_07
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 21:55:54 2015 Robin Partouche
** Last update Mon Oct  5 22:24:22 2015 Robin Partouche
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (s1[i] != '\0' && n != 0)
    {
      i = i + 1;
      n = n - 1;
    }
  while (s2[j] != '\0')
    {
      j = j + 1;
    }
  return (i - j);
}
