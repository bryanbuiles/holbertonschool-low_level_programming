#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - entry function
 * @f: FUnction name
 * @name:Person name
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
f(name);
}
