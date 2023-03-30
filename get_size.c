#include <stdio.h>
#include "main.h"

/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	int i = 123;
	long int li = 1234567890;
	short int si = 123;
	unsigned int ui = 123;
	unsigned long int uli = 1234567890;
	unsigned short int usi = 123;

	printf("%d\n", i);
	printf("%ld\n", li);
	printf("%hi\n", si);
	printf("%u\n", ui);
	printf("%lu\n", uli);
	printf("%hu\n", usi);

	return (0);
}
