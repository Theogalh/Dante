/*
** my_show_wordtab.c for  in /home/partou_a/rendu/Piscine_C_J08/ex_03
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Oct  7 16:25:04 2015 Robin Partouche
** Last update Wed Oct  7 16:35:15 2015 Robin Partouche
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != 0)
    {
      my_putstr(tab[i]);
      my_putchar(10);
      i = i + 1;
    }
  return (0);
}
