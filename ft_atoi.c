#include "header.h"

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-') {
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9') {
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}