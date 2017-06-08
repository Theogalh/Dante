/*
** my_find_prime_sup.c for  in /home/partou_a/rendu/PSU_2015_my_ls/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Nov 26 15:22:31 2015 Robin Partouche
** Last update Thu Nov 26 15:23:00 2015 Robin Partouche
*/

int	my_is_prime2(int nb)
{
  int	i;

  if (nb == 1 || nb == 0)
    {
      return (0);
    }
  else if (nb == 2)
    {
      return (1);
    }
  i = 2;
  while (i != nb)
    {
      if (nb % i == 0)
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

int	my_find_prime_sup(int nb)
{
  if ((my_is_prime2(nb)) == 1)
    {
      return (nb);
    }
  else
    {
      my_find_prime_sup(nb + 1);
    }
}
