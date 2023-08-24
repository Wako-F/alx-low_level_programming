#include <stdio.h>

void pfirst(void) __attribute__ ((constructor));

/**
 * pfirst - Funciton that prints str before main
 */

void pfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
