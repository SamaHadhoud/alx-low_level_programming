#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", --argc);
	}
	return (0);
}
