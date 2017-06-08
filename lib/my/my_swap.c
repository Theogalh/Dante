/*
** my_swap.c for  in /home/partou_a/rendu/Piscine_C_J04
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  1 10:29:38 2015 Robin Partouche
** Last update Thu Oct  1 20:11:35 2015 Robin Partouche
*/

int	my_swap(int *a, int *b)
{
  int	prt;

  prt = *a;
  *a = *b;
  *b = prt;
}
