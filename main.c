/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:10:22 by eleclet           #+#    #+#             */
/*   Updated: 2016/09/06 18:24:12 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft/libft.h"

int main()
{
	char *s;
	void *p;

	s = gc_alloc(10000); // use it as malloc
	s = gc_alloc(10000);
	s = gc_alloc(10000);
	p = gc_add(malloc(10)); //allow you to add function that malloc for u such as strdup strnew etc ..
	gc_free(); // put this at the end to free all malloc
	return (0);
}

