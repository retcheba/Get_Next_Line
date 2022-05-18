/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:49:48 by retcheba          #+#    #+#             */
/*   Updated: 2022/05/06 17:48:32 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int fd;
	char *str;
	fd = open("test", O_RDONLY);

	str = get_next_line(fd);
	printf("%s", str);
	if (str)
		free(str);

	str = get_next_line(fd);
	printf("%s", str);
	if (str)
		free(str);

	str = get_next_line(fd);
	printf("%s", str);
	if (str)
		free(str);

	str = get_next_line(fd);
	printf("%s", str);
	if (str)
		free(str);
	
	str = get_next_line(fd);
	printf("%s", str);
	if (str)
		free(str);

	close(fd);
	return (0);
}
