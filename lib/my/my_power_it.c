/*
** my_power_it.c for  in /home/partou_a/rendu/Piscine_C_J05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 16:38:13 2015 Robin Partouche
** Last update Mon Oct  5 16:51:01 2015 Robin Partouche
*/

int	my_power_it(int nb, int power)
{
  int	i;
  int	result;

  result = 1;
  i = 0;
  while (i != power)
    {
      result = result * nb;
      i = i + 1;
    }
  return (result);
}
