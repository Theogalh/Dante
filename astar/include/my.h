/*
** my.h for  in /home/partou_a/rendu/Piscine_C_J09/include
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Thu Oct  8 16:19:33 2015 Robin Partouche
** Last update Sat May  7 03:54:55 2016 Robin Partouche
*/

#ifndef MY_H_
# define MY_H_

int	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strulen(unsigned char *word);
int	my_getnbr(char *str);
char	*my_strdup(char *src);
int	my_power_rec(int nb, int power);
int	my_power_it(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_recstr(char *str);
char	*my_strstr(char *str, char*to_find);
int	my_stpcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_puterr(char *str, int error);
void	*my_xmalloc(int n);

#endif /* !MY_H_ */
