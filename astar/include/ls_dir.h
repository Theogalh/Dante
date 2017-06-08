/*
** ls_dir.h for  in /home/partou_a/rendu/PSU_2015_tetris
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Fri Mar 18 19:13:21 2016 Robin Partouche
** Last update Mon May  9 23:11:17 2016 Robin Partouche
*/

#ifndef LS_DIR_H_
# define LS_DIR_H_

# include <sys/types.h>
# include <sys/stat.h>

int		fs_open(char *filepath);
int		fs_close(int fd);
int		fs_create(char *filepath);
int		length_buff(int fd);

#endif /* !LS_DIR_H_ */
