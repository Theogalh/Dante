/*
** get_next_line.h for  in /home/partou_a/rendu/CPE_2015_getnextline
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Mon Jan 11 17:04:45 2016 Robin Partouche
** Last update Thu Jan 14 13:58:23 2016 Robin Partouche
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
# define READ_SIZE (1)
# endif /* !READ_SIZE */

int	my_strlen_and_init(char *buffer, char *read_carac
			   , char *line, int bool);
char	*get_next_line(const int fd);
char	*my_strcat_get(char *dest, char *src, int i, int j);
int	find_end(char *buffer, char *read_carac, int i, int j);
char	*rec_buff(const int fd, char *buffer, char *line, char *read_carac);

#endif /* !GET_NEXT_LINE_H_ */
