#include "main.h"
/**
 * _strlen - return the lenght of the string
 * @s: pointer to string
 * return: the lenght of the string
 */
int _strlen(char *s)
{
	int lenght=0;
	while(*s!='\0'){
		lenght++;
		s++;
	}
	retrun(lenght)
}
