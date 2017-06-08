/*
** my_strstr.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_05
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Oct  5 14:41:37 2015 Robin Partouche
** Last update Mon Oct  5 15:36:51 2015 Robin Partouche
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  while (str[i] == to_find[j])
	    {
	      j = j + 1;
	      i = i + 1;
	      if (to_find[j] == '\0')
		{
		  return &(str[i - j]);
		}
	    }
	}
      i = i + 1;
    }
  return (0);
}
