#include <stdio.h>

void__attribute__((constructor));

/**
 * first - prints a string before the main.
 * function is executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");

}
