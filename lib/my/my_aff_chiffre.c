/*
** my_aff_chiffre.c for  in /home/partou_a/rendu/Piscine_C_J03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Sep 30 10:55:28 2015 Robin Partouche
** Last update Wed Sep 30 18:50:45 2015 Robin Partouche
*/

int	my_aff_chiffre()
{
  int	i;

  i = 48;
  while (i != 58)
    {
      my_putchar(i);
      i = i + 1;
    }
}
