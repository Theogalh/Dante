/*
** my_strcapitalize.c for  in /home/partou_a/rendu/Piscine_C_J06/ex_10
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Tue Oct  6 11:01:40 2015 Robin Partouche
** Last update Thu Nov 26 15:23:29 2015 Robin Partouche
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (i == 0 || str[i - 1] == ' ' ||
	 str[i - 1] == '-' || str[i - 1] == '+')
	{
	  if (str[i] >= 97 && str[i] <= 122)
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
  return (str);
}
