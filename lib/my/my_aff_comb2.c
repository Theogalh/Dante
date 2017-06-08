/*
** my_aff_comb2.c for  in /home/partou_a/rendu/Piscine_C_J03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Sep 30 14:09:30 2015 Robin Partouche
** Last update Thu Nov 26 15:14:24 2015 Robin Partouche
*/

int	 my_aff_printer(int i, int j, int k, int l)
{
  if (((i + j) - 96) < ((k + l) - 96) && k <= l)
    {
      my_putchar(i);
      my_putchar(j);
      my_putchar(' ');
      my_putchar(k);
      my_putchar(l);
      if (i != 57 || j != 56 || k != 57 || l != 57)
	{
	  my_putchar(',');
	  my_putchar(' ');
	}
    }
}

int	my_aff_boucle(int i, int j, int k, int l)
{
  while (k != 58)
    {
      while (l != 58)
	{
	  my_aff_printer(i, j, k, l);
	  l = l + 1;
	}
      l = 48;
      k = k + 1;
    }
}

int	my_aff_comb2()
{
  int	i;
  int	j;
  int	k;
  int	l;

  i = 48;
  j = 48;
  k = 48;
  l = 48;
  while (i != 58)
    {
      while (j != 58)
	{
	  my_aff_boucle(i, j, k, l);
	  j = j + 1;
	}
      j = 48;
      i = i + 1;
    }
}
