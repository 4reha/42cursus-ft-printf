/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:02:42 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:14 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *form, ...);

int	conversion_manager(va_list args, const char *form, int	*p);
int	flags_manager(va_list args, const char	*form, int	*p);
int	hash_flag(va_list args, const char *form, int *p);
int	plus_flag(va_list args);
int	space_flag(va_list args);

#endif