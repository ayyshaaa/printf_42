/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aistierl <aistierl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:21:56 by aistierl          #+#    #+#             */
/*   Updated: 2024/06/21 18:36:48 by aistierl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
int	ft_print_char(unsigned int c);
int	ft_print_int(int number);
int	ft_print_string(const char *s);
int	ft_print_hexa(unsigned int nb, char type);
int	ft_print_unsigned(unsigned int number);
int	ft_print_pointer(void *ptr);

#endif