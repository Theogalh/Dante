/*
** my_getnbr.c for  in /home/partou_a/rendu/Piscine_C_J04
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  1 23:20:28 2015 Robin Partouche
** Last update Thu Nov 26 15:09:20 2015 Robin Partouche
*/

int	its_neg(int i, char *str, int neg)
{
  if (i > 0 && str[i - 1] == '-' && neg == 0)
    {
      neg = 1;
      return (neg);
    }
  else if (neg == 1)
    {
      return (neg);
    }
  else
    {
      neg = 0;
      return (neg);
    }
}

int	yes_neg(int neg, int result)
{
  if (neg == 1)
    {
      result = result * -1;
      return (result);
    }
  return (result);
}

int	just_test(int result, int i, char *str)
{
  if ((result == 214748364 && str[i] > 55) ||
      (result > 214748364 && (57 >= str[i] && str[i] >= 48)))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	my_condition1(int i, int result, int neg, char *str)
{
  while (str[i] != '\0')
    {
      if (just_test(result, i, str) == 1)
	{
	  return (0);
	}
      else if (57 >= str[i] && str[i] >= 48)
	{
	  result = result * 10 + (str[i] - 48);
	  neg = its_neg(i, str, neg);
	}
      else
	{
	  if (result > 0 || str[i] != '-')
	    {
	      if (neg == 1)
		result = result * -1;
	      return (result);
	    }
	}
      i = i + 1;
    }
  return (yes_neg(neg, result));
}

int	my_getnbr(char *str)
{
  int	i;
  int	result;
  int	neg;

  i = 0;
  neg = 0;
  result = 0;
  if (str == "0")
    return (0);
  result = my_condition1(i, result, neg, str);
  return (result);
}
