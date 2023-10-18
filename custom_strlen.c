#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */

size_t custom_strlen( char *str) 
{
	int length;
	length = 0;
	while (str[length] != '\0') 
	{
	length++;
	}
    return length;
}
