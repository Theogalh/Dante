/*
** get_next_line.c for  in /home/partou_a/rendu/CPE_2015_getnextline
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Jan 11 17:04:55 2016 Robin Partouche
** Last update Tue Jan 19 10:00:06 2016 Robin Partouche
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int	my_strlen_and_init(char *buffer, char *read_carac, char *line, int bool)
{
  int	i;

  if (bool == 0)
    {
      i = 0;
      while (buffer[i] != 0)
	i = i + 1;
      return (i);
    }
  else if (bool == 1)
    {
      if ((find_end(buffer, read_carac, 0, 0)) == 1)
	return (-2);
      else
	return (-1);
    }
  free(buffer);
  read_carac[0] = '\0';
  if (line[0] != '\0')
    return (-1);
  free(line);
  return (-2);
}

int	find_end(char *buffer, char *read_carac, int i, int j)
{
  while (buffer[i] != '\0')
    {
      if (j >= 1)
	{
	  read_carac[j - 1] = buffer[i];
	  j = j + 1;
	}
      else if (buffer[i] == '\n')
	{
	  buffer[i] = '\0';
	  j = 1;
	}
      i = i + 1;
    }
  if (j >= 1)
    {
      read_carac[j - 1] = '\0';
      return (1);
    }
  else
    return (0);
}

char	*my_strcat_get(char *dest, char *src, int i, int j)
{
  char	*new_dest;

  if ((new_dest = malloc(sizeof(*new_dest)
			 * (my_strlen_and_init(dest, NULL, NULL, 0)
			    + my_strlen_and_init(src, NULL, NULL, 0) + 1))) == NULL)
    {
      return (NULL);
    }
  while (dest[i] != '\0')
    {
      new_dest[i] = dest[i];
      i = i + 1;
    }
  while (src[j] != '\0')
    {
      new_dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  free(dest);
  new_dest[i] = '\0';
  return (new_dest);
}

char	*rec_buff(const int fd, char *buffer, char *line, char *read_carac)
{
  int	len;

  len = 0;
  if ((buffer = malloc(sizeof(*buffer) * (READ_SIZE + 1))) == NULL)
    return (NULL);
  if (line == NULL)
    {
      line = malloc(sizeof(*buffer) * (READ_SIZE + 1));
      line[0] = '\0';
    }
  while ((len = read(fd, buffer, READ_SIZE)) > 0)
    {
      buffer[len] = '\0';
      if (find_end(buffer, read_carac, 0, 0) == 1)
	{
	  line = my_strcat_get(line, buffer, 0, 0);
	  free(buffer);
	  return (line);
	}
      line = my_strcat_get(line, buffer, 0, 0);
    }
  if (my_strlen_and_init(buffer, read_carac, line, 3) == -1)
    return (line);
  else
    return (NULL);
}

char	*get_next_line(const int fd)
{
  static char	*read_carac = NULL;
  char		*buffer;
  char		*line;

  if (read_carac == NULL)
    {
      if ((read_carac = malloc(sizeof(*read_carac) * (READ_SIZE + 1))) == NULL)
	return (NULL);
      read_carac[0] = '\0';
    }
  line = read_carac;
  if (read_carac[0] != '\0')
    {
      if ((buffer = malloc(sizeof(*buffer) * (READ_SIZE + 1))) == NULL)
	return (NULL);
      buffer[0] = '\0';
      if ((buffer = my_strcat_get(buffer, read_carac, 0, 0)) == NULL)
	return (NULL);
      if (my_strlen_and_init(buffer, read_carac, NULL, 1) == -2)
	return (buffer);
      free(buffer);
    }
  if ((read_carac = malloc(sizeof(*read_carac) * (READ_SIZE + 1))) == NULL)
    return (NULL);
  return (rec_buff(fd, buffer, line, read_carac));
}
