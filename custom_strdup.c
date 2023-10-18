#include <stdio.h>
#include "main.h"

char *custom_strdup(char *original) 
{
	if (original == NULL) 
   {
        return NULL;
    }

    size_t length = custom_strlen(original) + 1;
    char *new_dup = (char *)malloc(length);

    if (new_dup != NULL) 
    {
       custom_strcpy(new_dup, original);
    }

    return new_dup;
}
