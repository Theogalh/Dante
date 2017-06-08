/*
** my_put_nbr.c for  in /home/partou_a/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Nov  9 12:33:28 2015 Robin Partouche
** Last update Thu Nov 26 15:03:19 2015 Robin Partouche
*/

int	my_put_nbr_len(int nb, int i)
{
  if (nb <= 9 && nb >= 0)
    {
      my_putchar(nb + 48);
      i = i + 1;
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	  i = i + 1;
	  i = my_put_nbr_len(nb, i);
	}
      else
	{
	  i = i + 1;
	  i = my_put_nbr_len(nb / 10, i);
	  my_putchar(nb % 10 + 48);
	}
    }
  return (i);
}

int	my_put_unbr_len(unsigned int nb, int i)
{
  if (nb <= 9 && nb >= 0)
    {
      my_putchar(nb + 48);
      i = i + 1;
    }
  else
    {
      i = i + 1;
      i = my_put_unbr_len(nb / 10, i);
      my_putchar(nb % 10 + 48);
    }
  return (i);
}

int	my_put_nbr(int nb)
{
  if (nb <= 9 && nb >= 0)
    {
      my_putchar(nb + 48);
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	  my_put_nbr(nb);
	}
      else
	{
	  my_put_nbr(nb / 10);
	  my_putchar(nb % 10 + 48);
	}
    }
}
