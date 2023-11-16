#include <stdio.h>
#include "main.h"

/**
 * pre_main - Function to be executed before main
 *
 * Description: Prints a specific text before the main function is executed
 */

void __attribute__ ((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
