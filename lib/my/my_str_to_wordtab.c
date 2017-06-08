/*
** my_str_to_wordtab.c for  in /home/partou_a/rendu/Piscine_C_J08/ex_04
** 
* Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Wed Oct  7 16:53:52 2015 Robin Partouche
** Last update Thu Nov 26 15:10:42 2015 Robin Partouche
*/

#include <stdlib.h>

int	my_verif(char *str, int i, int j)
{
  while (str[i] != 0)
    {
      if ((str[i] <= 64 || str[i] >= 91) && (str[i] <= 96 || str[i] >= 123)
	  && (str[i] < 48 || str[i] > 57))
	{
	  if ((str[i - 1] > 64 && str[i - 1] < 91) ||
	      (str[i - 1] > 96 && str[i - 1] < 123) ||
	      (str[i - 1] >= 48 && str[i - 1] <= 57))
	    {
	      j = j + 1;
	    }
	}
      i = i + 1;
    }
  return (j);
}

char	*my_strcut(char *str, int min, int max)
{
  char	*recup;
  int	i;

  i = 0;
  recup = malloc((max + 10) * sizeof(char));
  while ((i + min) != max)
    {
      recup[i] = str[i + min];
      i = i + 1;
    }
  recup[max] = '\0';
  return (recup);
}

char	**my_back_str_to_wordtab(char *str, char **stock, int i, int j)
{
  int	k;

  k = 0;
  while (str[i] != 0)
    {
      if ((str[i] <= 64 || str[i] >= 91) && (str[i] <= 96 || str[i] >= 123)
          && (str[i] < 48 || str[i] > 57))
	{
	  if ((str[i - 1] > 64 && str[i - 1] < 91) ||
              (str[i - 1] > 96 && str[i - 1] < 123) ||
	      (str[i - 1] >= 48 && str[i - 1] <= 57))
	    {
	      stock[j] = my_strcut(str, i - k, i);
	      j = j + 1;
	      k = -1;
	    }
	  else
	    k = k - 1;
	}
      k = k + 1;
      i = i + 1;
    }
  stock[j] = my_strcut(str, i - k, i);
  stock[j + 1] = 0;
  return (stock);
}

char	**my_str_to_wordtab(char *str)
{
  char	**stock;
  int	i;
  int	j;

  i = 1;
  j = 1;
  my_verif(str, i, j);
  stock = malloc((j + 10) * sizeof(char*));
  stock[j + 1] = 0;
  i = 0;
  j = 0;
  stock = my_back_str_to_wordtab(str, stock, i, j);
  return (stock);
}
