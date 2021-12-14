/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:02:42 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:03 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr(long long n);
int	ft_puthex(unsigned int n, char x);
int	ft_putadd(void *ptr);

int	ft_printf(const char *form, ...);

#endif