/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaula <amaula@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:58:06 by amaula            #+#    #+#             */
/*   Updated: 2024/05/03 15:31:51 by amaula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;
	size_t			bytes;

	bytes = size * count;
	if (size != 0 && bytes / size != count)
		return (NULL);
	memory = malloc(bytes);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, bytes);
	return ((void *) memory);
}
