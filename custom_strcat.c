#include <stdio.h>
#include "main.h"

/**
 * custom_strcat:
 *
 *
 */

char *custom_strcat(char *destination, char *source) 
{
    char *destination_ptr;
   
   destination_ptr = destination;
    while (*destination_ptr != '\0') {
        destination_ptr++;
    }

    while (*source != '\0') {
        *destination_ptr = *source;
        destination_ptr++;
        source++;
    }
    *destination_ptr = '\0';

    return destination;
}
