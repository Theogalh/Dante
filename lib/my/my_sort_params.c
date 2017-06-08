/*
** my_sort_params.c for  in /home/partou_a/rendu/Piscine_C_J10/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Fri Oct  9 18:33:11 2015 Robin Partouche
** Last update Thu Nov 26 15:21:57 2015 Robin Partouche
*/

int	my_sort_params(int argc, char **argv)
{
  int	i;
  int	j;
  int	tmp_j;

  i = 0;
  j = 1;
  tmp_j = j;
  while (i < argc)
    {
      while (j < argc)
	{
	  if (my_strcmp(argv[i], argv[j]) < 0)
	    j = j + 1;
	  else
	    {
	      my_swap_str(&argv[i], &argv[j]);
	      j = j + 1;
	    }
	}
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
      j = tmp_j + 1;
      tmp_j = tmp_j + 1;
    }
}
