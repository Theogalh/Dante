/*
** my_printf.h for  in /home/partou_a/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Robin Partouche
** Login   <partou_a@epitech.net>
** 
** Started on  Sat Nov 14 14:27:56 2015 Robin Partouche
** Last update Mon Nov 16 15:17:08 2015 Robin Partouche
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

int	search_nbr(const char *format, int *i, int *printed, va_list *va);
int	search_u_nbr(const char *format, int *i, int *printed, va_list *va);
int	search_char(const char *format, int *i, int *printed, va_list *va);
int	search_string(const char *format, int *i, int *printed, va_list *va);
int	search_ascii(const char *format, int *i, int *printed, va_list *va);
int	search_octal(const char *format, int *i, int *printed, va_list *va);
int	search_bin(const char *format, int *i, int *printed, va_list *va);
int	search_hexa(const char *format, int *i, int *printed, va_list *va);
int	search_hexa_M(const char *format, int *i, int *printed, va_list *va);
int	search_p(const char *format, int *i, int *printed, va_list *va);
int	search_modulo(const char *format, int *i, int *printed, va_list *va);
int	search_no(const char *format, int *i, int *printed, va_list *va);
void	my_put_nbr_hex(long nb, int upcase);
void	my_put_nbr_hex_long(unsigned long nb, int upcase);
int	my_putstr_ascii(char *str, int i, int length);
int	my_put_p(unsigned long a, unsigned long base, int i, int upcase);
int	my_put_base(long a, int base, int i, int upcase);

#endif /* !MY_PRINTF_H_ */
