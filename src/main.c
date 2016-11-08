/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:00:15 by jhalford          #+#    #+#             */
/*   Updated: 2016/11/08 16:26:15 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	t_list		*dir;
	t_list		*ent;
	char		*opts;

	dir = NULL;
	ent = NULL;
	opts = ft_ls_parse(ac, av, &dir, &ent);
	ft_ls_files(ent, dir, opts);
	ft_lstdel(&ent, &ft_ent_free);
	ft_ls_dirs(dir, opts);
	ft_strdel(&opts);
	return (errno);
}
