/*
** my_evil_str.c for  in /home/partou_a/rendu/Piscine_C_J04
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  1 21:00:41 2015 Robin Partouche
** Last update Fri Oct  2 19:00:30 2015 Robin Partouche
*/

int	my_put_my_nbr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char	*my_evil_str(char *str)
{
  int	nbr;
  int	nbrmin;
  char	trans;

  nbr = my_put_my_nbr(str);
  nbrmin = 1;
  while (nbr > nbrmin)
    {
      trans = str[nbr - 1];
      str[nbr - 1] = str[nbrmin - 1];
      str[nbrmin - 1] = trans;
      nbr = nbr - 1;
      nbrmin = nbrmin + 1;
    }
  return (&str[0]);
}
