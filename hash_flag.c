/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_flag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:16:09 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:41 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "ft_printf.h"

int	hash_flag(va_list args, const char *form, int *p)
{
	int	count;
	int	a;

	count = 0;
	a = va_arg(args, unsigned int);
	if (a != 0)
	{
		count += ft_putchar('0');
		count += ft_putchar(form[*p]);
	}
	count += ft_puthex(a, form[*p]);
	return (count);
}
