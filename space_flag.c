/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:17:34 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:49 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "ft_printf.h"

int	space_flag(va_list args)
{
	int	n;
	int	count;

	count = 0;
	n = va_arg(args, int);
	if (n >= 0)
		count += ft_putchar(' ');
	count += ft_putnbr(n);
	return (count);
}
