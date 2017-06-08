/*
** my_strcmp2.c for my_strcmp2 in /home/murato_a/rendu/Piscine_C_bistromathique/lib/my
** 
** Made by Valentin Muratore
** Login   <murato_a@epitech.net>
** 
** Started on  Fri Oct 30 15:06:11 2015 Valentin Muratore
** Last update Thu Nov 26 15:02:13 2015 Robin Partouche
*/

int	my_strcmp2(char *n1, char *n2)
{
  int	i;

  i = 0;
  if (my_strlen(n1) < my_strlen(n2))
    return (-1);
  else if (my_strlen(n1) > my_strlen(n2))
    return (1);
  else
    {
      while (n1[i] != '\0' && n1[i] == n2[i])
	i++;
      if (n1[i] < n2[i])
	return (-1);
      else if (n1[i] > n2[i])
	return (1);
      else
	return (0);
    }
}
