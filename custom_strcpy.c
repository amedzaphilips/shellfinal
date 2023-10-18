#include <stdio.h>
#include "main.h"

char *custom_strcpy(char *destination, char *source) 
{
	int index;
	
	index = 0;
	while (source[index] != '\0') 
		{
        		destination[index] = source[index];
       			 index++;
    		}
    	destination[index] = '\0'; 
   	return destination;
}
