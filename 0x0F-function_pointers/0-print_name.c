#include "function_pointers.h"

/**
 * print_name - a function that prints name
 *
 * @name: name of the person
 * @f: variable to hold the string name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
