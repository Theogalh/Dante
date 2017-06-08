/*
** my_strcpy.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_02
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 09:37:08 2015 Robin Partouche
** Last update Mon Oct  5 09:50:48 2015 Robin Partouche
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
