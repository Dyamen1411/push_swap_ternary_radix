/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:56:42 by amassias          #+#    #+#             */
/*   Updated: 2024/05/02 14:29:43 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

void	push_swap_destroy(
			t_push_swap **push_swap_ptr
			)
{
	if (*push_swap_ptr == NULL)
		return ;
	free(*push_swap_ptr);
	*push_swap_ptr = NULL;
}
