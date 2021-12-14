/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:18:37 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 09:39:14 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flags_manager(va_list args, const char	*form, int	*p)
{
	if (form[*p] == '#')
	{
		while (form[*p] == '#')
			*p += 1;
		if (form[*p] == 'x' || form[*p] == 'X')
			return (hash_flag(args, form, p));
	}
	else if (form[*p] == '+')
	{
		while (form[*p] == '+')
			*p += 1;
		if (form[*p] == 'd' || form[*p] == 'i' )
			return (plus_flag(args));
	}
	else if (form[*p] == ' ')
	{
		while (form[*p] == ' ')
			*p += 1;
		if (form[*p] == 'd' || form[*p] == 'i')
			return (space_flag(args));
	}
	*p -= 1;
	return (conversion_manager(args, form, p));
}
