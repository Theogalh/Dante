/*
** my_square_root.c for  in /home/partou_a/rendu/Piscine_C_J05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 17:22:08 2015 Robin Partouche
** Last update Mon Oct  5 19:08:19 2015 Robin Partouche
*/

int	my_square_root(int nb)
{
  int	i;

  i = nb / 2;
  while (i != 0)
    {
      if ((i * i) == nb)
	{
	  return (i);
	}
      i = i - 1;
    }
  return (i);
}
