/*
** my_strncar.c for  in /home/partou_a/rendu/Piscine_C_J07/ex_03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 18:00:44 2015 Robin Partouche
** Last update Tue Oct  6 18:28:53 2015 Robin Partouche
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[j] != '\0' || nb == 0)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
