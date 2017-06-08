/*
** my_power_rec.c for  in /home/partou_a/rendu/Piscine_C_J05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 17:03:23 2015 Robin Partouche
** Last update Mon Oct  5 17:12:43 2015 Robin Partouche
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    {
      return (nb);
    }
  else
    {
      return (nb) * my_power_rec(nb, power - 1);
    }
}
