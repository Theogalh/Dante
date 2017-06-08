/*
** my_strlen.c for  in /home/partou_a/rendu/Piscine_C_J04
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  1 20:41:01 2015 Robin Partouche
** Last update Wed Feb 17 11:52:29 2016 Robin Partouche
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      i = i + 1;
    }
  return (i);
}

int	my_strulen(unsigned char *word)
{
  int	i;

  i = 0;
  while (word[i] != 0)
    {
      i = i + 1;
    }
  return (i);
}
