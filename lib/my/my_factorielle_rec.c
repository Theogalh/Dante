/*
** my_factorielle_rec.c for  in /home/partou_a/rendu/Piscine_C_J05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Sun Oct  4 10:08:06 2015 Robin Partouche
** Last update Wed Oct 14 09:50:06 2015 Robin Partouche
*/

int	my_factorielle_rec(int nb)
{
  if (nb == 1)
    {
      return (1);
    }
  else
    {
      return ((my_factorielle_rec(nb - 1)) * nb);
    }
}
