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

/**
 *print_most_numbers - print the numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - print numbers form 0 to 14 (10 times)
 */
void more_numbers(void);

/**
 * print_line - draw a stight line
 * @n: the number of time the character '_' should be print
 */
void print_line(int n);
/**
 * print_diagonal - draw a diagonal
 * @n : the number of time the character '\' should be print
 */
void print_diagonal(int n);

