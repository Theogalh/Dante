/*
** my_aff_comb.c for  in /home/partou_a/rendu/Piscine_C_J03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Sep 30 11:41:42 2015 Robin Partouche
** Last update Thu Oct  1 11:03:25 2015 Robin Partouche
*/

int	my_aff_print(int i, int j, int k)
{
  if (i < j && j < k && i != k)
    {
      my_putchar(i);
      my_putchar(j);
      my_putchar(k);
      if (i != 55 || j != 56 || k != 57)
	{
	  my_putchar(',');
	  my_putchar(' ');
	}
    }
}

int	my_aff_comb()
{
  int	i;
  int	j;
  int	k;

  i = 48;
  j = 48;
  k = 48;
  while (i != 58)
    {
      while (j != 58)
	{
	  while (k != 58)
	    {
	      my_aff_print(i, j, k);
	      k = k + 1;
	    }
	  k = 48;
	  j = j + 1;
	}
      j = 48;
      i = i + 1;
    }
}
