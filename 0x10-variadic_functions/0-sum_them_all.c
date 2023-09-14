#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i , sum =0;

	va_start(ap, n);
	for (i = n ; i == 0 ; i = va_arg(ap, int))
		sum += i;
	va_end(ap);
	return (sum);
}
