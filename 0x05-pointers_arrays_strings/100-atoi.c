#include "main.h"
#define MY_INT_MAX 2147483647
#define MY_INT_MIN (-2147483647 - 1)

/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > MY_INT_MAX / 10 || (result == MY_INT_MAX / 10 && (s[i] - '0') >
				MY_INT_MAX % 10))
			{
				if (sign == 1)
				{
					return (MY_INT_MAX);
				}
				else
				{
					return (MY_INT_MIN);
				}
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
