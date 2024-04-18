/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:21:47 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/18 16:29:48 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts the number to a string representation of the number in the given base.
The base must be between 2 and 16.
*/
char	*ft_tobase(int num, int base)
{
	const char	*digits = "0123456789abcdef";
	char		*tmp;
	int			len;
	char		*str;

	str = malloc(2);
	if (!str || base < 2)
		return (NULL);
	if (num < base)
	{
		str[0] = digits[num];
		str[1] = '\0';
	}
	else
	{
		tmp = ft_tobase(num / base, base);
		len = ft_strlen(tmp);
		str = ft_realloc(str, len + 2);
		ft_strlcpy(str, tmp, len + 1);
		str[len] = digits[num % base];
		str[len + 1] = '\0';
		free(tmp);
	}
	return (str);
}
