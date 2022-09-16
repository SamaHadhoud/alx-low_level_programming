/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_numbers - print the numbers form 0 to 9
 */

void print_numbers(void);

/**
 * _isupper - checks for uppercase
 * @c: the character to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c);

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiplication
 */

int mul(int a, int b);
