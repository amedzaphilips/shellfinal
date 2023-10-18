#include <stdio.h>
#include "main.h"

/**
 * custom_strcmp
 *
 *
 */

int custom_strcmp(char *stra, char *strb)
{
    while (*stra != '\0' && *strb != '\0') 
    {
        if (*stra != *strb) 
	{
            return *stra - *strb;
        }
        stra++;
        strb++;
    }
	
    return *stra - *strb;
}
