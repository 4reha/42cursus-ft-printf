/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:02:24 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:33:39 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

int	ft_printf(const char *form, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, form);
	i = 0;
	count = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			count += conversion_manager(args, form, &i);
			i++;
		}
		else
		{
			count += ft_putchar(form[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
