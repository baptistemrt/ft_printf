/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapmarti <bapmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 21:04:48 by bapmarti          #+#    #+#             */
/*   Updated: 2021/02/21 02:19:09 by bapmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_params(t_printf *f)
{
	f->m = 0;
	f->w = -1;
	f->l = -1;
	f->p = 0;
	f->s = 0;
}