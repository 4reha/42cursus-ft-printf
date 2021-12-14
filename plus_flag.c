/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:16:45 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:46 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "ft_printf.h"

int	plus_flag(va_list args)
{
	int	n;
	int	count;

	count = 0;
	n = va_arg(args, int);
	if (n >= 0)
		count += ft_putchar('+');
	count += ft_putnbr(n);
	return (count);
}
