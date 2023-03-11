/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okotsuwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:18:47 by okotsuwa          #+#    #+#             */
/*   Updated: 2023/03/11 12:51:09 by okotsuwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*ans;

	ans = (char *)malloc(10 * sizeof(char));
	printf("%d", (int)read(fd, ans, 10));
	return (ans);
}
