/*
** my_strcmp.c for my_strcmp in /home/murato_a/rendu/Piscine_C_J06
** 
** Made by Valentin Muratore
** Login   <murato_a@epitech.net>
** 
** Started on  Mon Oct  5 13:52:04 2015 Valentin Muratore
** Last update Fri Oct 30 11:12:22 2015 Valentin Muratore
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  return (my_strcmpB(s1, s2, i));
}

int	my_strcmpB(char *s1, char *s2, int i)
{
  if (s1[i] < s2[i])
    return (s1[i] - s2[i]);
  else if (s1[i] > s2[i])
    return (s1[i] - s2[i]);
  else if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  else
    return (my_strcmpB(s1, s2, i + 1));
}
