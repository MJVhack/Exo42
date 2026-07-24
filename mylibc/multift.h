/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 04:02:05 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/24 21:04:49 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int size_uit;
typedef unsigned long size_ult;
typedef unsigned long long size_ullt;

void	ft_putchar(char c);
void	ft_putnbr(long long n);
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_strcpy(char *src, char *dest);
void	ft_strncpy(char *src, char *dest, int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *src, char *dest, unsigned int size);
void	ft_print_hex(char c);
void	ft_putstr_non_printable(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_uit n);
char	*ft_strcat(char *dest, char *src);
