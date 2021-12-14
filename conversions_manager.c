/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_manager.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:19:17 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:38:06 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "ft_printf.h"

int	conversion_manager(va_list args, const char *form, int	*p)
{
	*p += 1;
	if (form[*p] == '#' || form[*p] == ' ' || form[*p] == '+')
		return (flags_manager(args, form, p));
	else
	{
		if (form[*p] == 'c')
			return (ft_putchar(va_arg(args, int)));
		else if (form[*p] == 's')
			return (ft_putstr(va_arg(args, char *)));
		else if (form[*p] == 'p')
			return (ft_putadd(va_arg(args, void *)));
		else if (form[*p] == 'd' || form[*p] == 'i')
			return (ft_putnbr(va_arg(args, int)));
		else if (form[*p] == 'u')
			return (ft_putnbr(va_arg(args, unsigned int)));
		else if (form[*p] == 'x')
			return (ft_puthex(va_arg(args, unsigned int), 'x'));
		else if (form[*p] == 'X')
			return (ft_puthex(va_arg(args, unsigned int), 'X'));
		else if (form[*p] == '%')
			return (ft_putchar('%'));
		return (0);
	}
}
