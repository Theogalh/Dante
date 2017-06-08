/*
** ls_dir.c for  in /home/partou_a/rendu/PSU_2015_my_ls
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Nov 26 17:22:48 2015 Robin Partouche
** Last update Sun May 29 22:21:15 2016 Robin Partouche
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include "mazes.h"
#include "ls_dir.h"
#include "my.h"
#include "get_next_line.h"

int	fs_open(char *filepath)
{
  int	fd;

  if ((fd = open(filepath, O_RDWR)) == -1)
    {
      return (0);
    }
  else
    return (fd);
}

int	fs_close(int fd)
{
  if (close(fd) == -1)
    {
      exit(my_putstr("Error: Impossible to close file.\n"));
    }
  return (0);
}

int	length_buff(int fd)
{
  char	*buff;
  int	len;

  len = 1;
  while ((buff = get_next_line(fd)) != NULL)
    {
      free(buff);
      len = len + 1;
    }
  free(buff);
  return (len);
}
