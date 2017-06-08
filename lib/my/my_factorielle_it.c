/*
** my_factorielle_it.c for  in /home/partou_a/rendu/Piscine_C_J05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Fri Oct  2 17:02:42 2015 Robin Partouche
** Last update Wed Oct 14 09:55:58 2015 Robin Partouche
*/

int	my_factorielle_it(int nb)
{
  int	i;
  int	result;

  i = 1;
  result = 1;
  if (nb == 0)
    {
      return (1);
    }
  while (i != (nb + 1))
    {
      result = result * i;
      i = i + 1;
    }
  return (result);
}

int main()
{
  my_factorielle_it (13);
}
